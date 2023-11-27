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
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include "channel.hpp"

class user
{
    
public:
    std::string nickname;
    std::string hostname;
    int socket_fd;
    std::vector<std::string> channel_invited;
    user(int fd , std::string nick, std::string host);
    void displayInfo();
    void join_chanel(std::string chanelname, std::vector<Channel> &Channels);
    void create_chanel(std::string chanelname,std::string chanel_topic,std::vector<Channel> &Channels);
};
