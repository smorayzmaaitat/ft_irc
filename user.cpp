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

#include "./inc/ft_irc.hpp"

user::user(int fd, std::string nick, std::string host) : nickname(nick), hostname(host), socket_fd(fd)
{
}

// Member function to display user information
void user::displayInfo()
{
    std::cout << "Nickname: " << nickname << "\n";
    std::cout << "Hostname: " << hostname << "\n";
}

void user::create_chanel(std::string chanelname, std::string chanel_topic, std::vector<Channel> &Channels)
{

    for (std::vector<Channel>::iterator it = Channels.begin(); it != Channels.end(); it++)
    {
        if (it->name == chanelname)
            throw "existe channel";
    }
    Channel channel(chanelname, chanel_topic, this->socket_fd);
    Channels.push_back(channel);
}

void user::join_chanel(std::string chanelname, std::vector<Channel> &Channels)
{
    std::vector<std::string>::iterator invites = std::find(channel_invited.begin(), channel_invited.end(), chanelname);
    for (std::vector<Channel>::iterator it = Channels.begin(); it != Channels.end(); it++)
    {
        if (it->name == chanelname)
        {
            if (it->invite == 1)
            {
                if (invites != channel_invited.end())
                {
                    std::map<int, int>::iterator exits = it->user_end_Permissions.find(this->socket_fd);
                    //chek the user is not joined this channel 39al zaml 
                    if (exits == it->user_end_Permissions.end())
                        it->user_end_Permissions.insert(std::make_pair(this->socket_fd, 0));
                    else
                        throw "u are in channel";
                }
                else
                    throw "u are not inveted";
            }
            else
            {
                std::map<int, int>::iterator exits = it->user_end_Permissions.find(this->socket_fd);
                if (exits == it->user_end_Permissions.end())
                    it->user_end_Permissions.insert(std::make_pair(this->socket_fd, 0));
                else
                    throw "u are in channel";
            }
        }
    }
}