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

#include "./inc/server.hpp"

Server::Server(int port) : port(port)
{
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddress.sin_port = htons(port);
    int reuse = 1;
    setsockopt(serverSocket, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse));
    // init server
    pollfd.fd = serverSocket;
    pollfd.events = POLLIN;
    pollfd.revents = 0;
    pollVector.push_back(pollfd);
    // bind
    bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress));
    socklen_t clientAddressLength = sizeof(clientAddress);
    listen(serverSocket, 10);
    while (1)
    {

        int readyFds = poll(pollVector.data(), pollVector.size(), -1);
        if (readyFds > 0)
        {
            if (pollVector[0].revents & POLLIN)
            {
                client_fd = accept(serverSocket, (struct sockaddr *)&clientAddress, &clientAddressLength);
                pollfd.fd = client_fd;
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
                        pollVector.erase(pollVector.begin() + i);
                    }
                    // std::cout << buffer << std::endl;
                    commands(buffer);
                    memset(buffer, 0, sizeof(buffer));
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

void Server::commands(char *buffer)
{
    example.socket_fd = client_fd;

  std::cout <<"-------->  "<< buffer << std::endl;
// hadchi akher push khdam jerb clients li 3ndk 
    if (!strncmp(buffer, "NICK", 4))
    {
        std::string comand = buffer + 5;
        comand = comand.substr(0, comand.size() - 2);
        example.nickname = comand;
    }

    if (!strncmp(buffer, "USER", 4))
    {
        std::string comand = buffer + 5;
        comand = comand.substr(0, comand.size() - 2);
        example.username = comand;
        this->clients.push_back(example);
    }

    if (!strncmp(buffer, "PRIVMSG", 7))
    {
        std::string comand = buffer + 8;    
        size_t pos = comand.find(' ');
        std::string name = comand.substr(0, pos);
        std::string msg = comand.substr(pos + 1, comand.size() - name.size());
        for (std::vector<user>::iterator it = clients.begin(); it != clients.end(); it++)
        {
            if (it->socket_fd == client_fd)
            {
                it->direct_message(name, &msg, clients, &clientAddress);
            }
        }
    }
}
