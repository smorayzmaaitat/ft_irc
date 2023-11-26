/**
 * .-----------------------------------------------.
 * |       ___                 _                   |
 * |      / __) _             (_)                  |
 * |     | |__ | |_            _   ____  ____      |
 * |     |  __)|  _)          | | / ___)/ ___)     |
 * |     | |   | |__  _______ | || |   ( (___      |
 * |     |_|    \___)(_______)|_||_|    \____)     |
 * '-----------------------------------------------'
 */

#include "inc/ft_irc.hpp"
#include <poll.h>

class Server
{

public:
    int port;
    int serverSocket;
    std::vector<user> clients;
    std::vector<Channel> Channels;
    struct pollfd pollfd;
    std::vector<struct pollfd> pollVector;
    char buffer[1024];
    Server(int port) : port(port)
    {
        serverSocket = socket(AF_INET, SOCK_STREAM, 0);
        struct sockaddr_in serverAddress;
        serverAddress.sin_family = AF_INET;
        serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1");
        serverAddress.sin_port = htons(port);
        // init server
        pollfd.fd = serverSocket;
        pollfd.events = POLLIN;
        pollfd.revents = 0;
        pollVector.push_back(pollfd);
        // bind
        bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress));
        // listen(serverSocket, SOMAXCONN);
        // struct sockaddr_in clientAddress;
        // socklen_t clientAddressLength = sizeof(clientAddress);
        listen(serverSocket, 5);
        while (1)
        {
            int readyFds = poll(pollVector.data(), pollVector.size(), -1);
            if (readyFds > 0)
            {
                if (pollVector[0].revents & POLLIN)
                {
                    std::cout << pollVector.size();
                    int clientSocket = accept(serverSocket, NULL, NULL);
                    std::cout << "ffffffffffff"<< std::endl;
                    user example(clientSocket, "ismail", "hosname");
                    clients.push_back(example);
                    pollfd.fd = clientSocket;
                    pollfd.events = POLLIN;
                    pollfd.revents = 0;
                    pollVector.push_back(pollfd);
                }

                for (size_t i = 1; i < pollVector.size(); ++i)
                {
                    if (pollVector[i].revents & POLLIN)
                    {

                      int byte = recv(pollVector[i].fd, buffer, sizeof(buffer), 0);
                      if (byte <= 0)
                       {
                        close(pollVector[i].fd);
                        pollVector.erase(pollVector.begin()+i);
                       }
                        std::cout << buffer << std::endl;
                    }
                }
            }
            else if (readyFds == 0)
            {
                std::cout << "No file descriptors are ready.\n";
            }
            else
            {
                std::cerr << "Error in poll: " << strerror(errno) << "\n";
            }
        }
    }
};

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 3)
        std::cout << "\033[1;31m ./ircserv <port> <password>" << std::endl;
    Server server(3322);

    return (0);
}