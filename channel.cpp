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

Channel::Channel( std::string &n, std::string &t,int user_fd )
    : name(n), topic(t)
{
    user_end_Permissions.insert(std::make_pair(user_fd, 1));
}

void Channel::displayInfo()
{
    std::cout << "Channel Name: " << name << "\n";
    std::cout << "Topic: " << topic << "\n";
}

void Channel::setTopic(const std::string &newTopic)
{
    topic = newTopic;
}

void Channel::set_topic(std::string topic)
{

    this->topic = topic;
}
void Channel::set_pass()
{
    std::cout << "passowrd : ";
    std::cin >> this->passowrd;
}
void Channel::set_limit()
{
    std::cout << "limit of users : ";
    std::cin >> this->limit;
}

void Channel::set_permestion(std::string pir, int user_fd)
{

    std::map<int, int>::iterator it = user_end_Permissions.find(user_fd);
    if (it != user_end_Permissions.end() && it->second)
    {

        if (invite == 1 && pir == "+i")
            this->invite = 0;
        else if (invite == 0 && pir == "+i")
        {
            this->invite = 1;
        }
        if (t == 1 && pir == "+t")
            this->t = 0;
        else if (t == 0 && pir == "+t")
        {
            this->t = 1;
        }

        if (k == 1 && pir == "+k")
            this->k = 0;
        else if (k == 0 && pir == "+k")
        {
            set_pass();
            this->k = 1;
        }
        if (limit >= 0 && pir == "+l")
            this->k = -1;
        else if (k == -1 && pir == "+l")
        {
            set_limit();
        }
    }
    else
        throw "u not operator :";
}

int Channel::inter_passowrd()
{
    std::string pass;
    std::cin >> pass;
    if (pass == passowrd)
        return 1;
    return 0;
}

void Channel::remove_user(int this_user ,int user_fd)
{
    std::map<int, int>::iterator thi_user = user_end_Permissions.find(this_user);

    std::map<int, int>::iterator it = user_end_Permissions.find(user_fd);

    if (it != user_end_Permissions.end() && thi_user->second)
    {
        user_end_Permissions.erase(it);
    }
     else
        throw " u not operator";
}

void Channel::user_oparator(int this_user ,int user_fd)
{
    //this_user = user who want to give operator

    std::map<int, int>::iterator thi_user = user_end_Permissions.find(this_user);

    std::map<int, int>::iterator it = user_end_Permissions.find(user_fd);

    if (it != user_end_Permissions.end() && thi_user->second)
    {
        if (it->second == 0)
        it->second = 1;
        else
            it->second = 0;
    }
    else
        throw " u not operator";
}

void Channel::send_msg(const char *bufer)
{
    for (std::vector<int>::iterator it = this->users_fd.begin(); it != this->users_fd.end(); it++)
    {
        send(*it,bufer,strlen(bufer),0);
    }
}