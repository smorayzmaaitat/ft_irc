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

#pragma once
#include "ft_irc.hpp"

class Server
{
public:
    int port;
    int serverSocket;
    user example;
    std::vector<user> clients;
    std::vector<Channel> Channels;
    struct pollfd pollfd;
    std::vector<struct pollfd> pollVector;
    char buffer[1024];
    Server(int port);
    int client_fd;
    struct sockaddr_in clientAddress;
    void commands(char *buffer);
};