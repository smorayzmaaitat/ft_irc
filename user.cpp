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

 user::user(int fd , std::string nick, std::string host) :nickname(nick), hostname(host),socket_fd(fd)
    {
    }

    // Member function to display user information
    void user::displayInfo()
    {
        std::cout << "Nickname: " << nickname << "\n";
        std::cout << "Hostname: " << hostname << "\n";
    }




    void user::create_chanel(std::string chanelname,std::string chanel_topic,std::vector<Channel> &Channels)
    {

        for(std::vector<Channel>::iterator it = Channels.begin() ; it != Channels.end(); it ++)
        {
            if(it->name == chanelname)
            throw "existe channel";
        }
        Channel channel(chanelname,chanel_topic,this->socket_fd);
        Channels.push_back(channel);
    }