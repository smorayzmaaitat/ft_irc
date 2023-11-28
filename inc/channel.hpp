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
#include <string>
#include <vector>
#include "ft_irc.hpp"


class user;

class Channel
{
public:
    // Attributes
    std::string name;
    std::string topic;
    int t;
    int k;
    std::vector<int> users_fd;
    std::map<int, int> user_end_Permissions;
    std::string passowrd ;
    unsigned long long limit ;
    int invite; 

    // Constructor
    Channel( std::string &n,  std::string &t,int user_fd);
    void displayInfo();
    void setTopic(const std::string &newTopic);
    void set_topic(std::string topic);
    void set_pass();
    void set_limit();
    void set_permestion(std::string pir,  int user_fd);
    int  inter_passowrd();
    void user_oparator(int this_user ,int user_fd);
    void remove_user(int this_user ,int fd);
    void send_msg(const char *bufer);
};

