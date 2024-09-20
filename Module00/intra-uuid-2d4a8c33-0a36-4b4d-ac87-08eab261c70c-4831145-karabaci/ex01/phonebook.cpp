#include "phonebook.hpp"
#include <cstdlib>
#include <stdio.h>

int phone::c_count = 0;
int phone::total_count = 0;

bool checkdigit(std::string input)
{
    for (int i = 0; i < (int)input.length(); i++)
    {
        if (input[i] < '0' || input[i] > '9')
            return (false);
    }
    return (true);
}

void phone::searchcommand(void)
{

    std::string input;
    if ( _contacts[0].get_name().empty())
    {
        std::cout << "NO FOUND" << std::endl;
        return ;
    }
   std::cout << "━━─━─━─━━─━─━━─━「CONTACTS」━━─━─━─━━─━─━━─━" << std::endl;
   std::cout << "|" << std::setw(10) << "Index"
   << "|" << std::setw(10) << "Name"
   << "|" << std::setw(10) << "SurName"
   << "|" << std::setw(10) << "NickName" << "|" << std::endl;
   for(int i = 0; i < total_count; i++)
   {
    std::cout << "|" << std::setw(10) << i;
    std::cout << "|" << std::setw(10) << (_contacts[i].get_name().size() > 10 ? _contacts[i].get_name().substr(0,9) + '.' : _contacts[i].get_name()); 
    std::cout << "|" << std::setw(10) << (_contacts[i].get_surname().size() > 10 ? _contacts[i].get_surname().substr(0,9) + '.' : _contacts[i].get_surname());
    std::cout << "|" << std::setw(10) << (_contacts[i].get_alias().size() > 10 ? _contacts[i].get_alias().substr(0,9) + '.' : _contacts[i].get_alias()) << "|" << std::endl;
   }
    std::getline(std::cin, input);
    while (input.empty() || !checkdigit(input) || (atoi(input.c_str()) < 0 || atoi(input.c_str()) > total_count-1))
    {
        std::cout << "Please enter a number 🔎" << std::endl;
        std::getline(std::cin, input);
    }
    
    std::cout << "『Name』      ➲ " << _contacts[atoi(input.c_str())].get_name() << std::endl;;
    std::cout << "『Surname』   ➲ " << _contacts[atoi(input.c_str())].get_surname() << std::endl;;
    std::cout << "『Nickname』  ➲ " << _contacts[atoi(input.c_str())].get_alias() << std::endl;;
    std::cout << "『Number』    ➲ " << _contacts[atoi(input.c_str())].get_phonenumber() << std::endl;;
    std::cout << "『Darksecret』➲ " << _contacts[atoi(input.c_str())].get_darksecret() << std::endl << std::endl;;
}

void phone::addcommand(void)
{
    std::string input;
    come:
    std::cout << "Enter name 🎫 ";
    getline(std::cin,input);
    if (input == "\n" || input == "\0")
     {
        
        std::cout << "  Invalid Name ❕ " << std::endl << std::endl;
        goto come;
     }
    _contacts[c_count].set_name(input);

    coming:
    std::cout << "Enter surname 🎫 ";
    getline(std::cin,input);
    if (input == "\n" || input == "\0")
    {
        std::cout << "  Invalid Surname ❕ " << std::endl << std::endl;
        goto coming;
    }
    _contacts[c_count].set_surname(input);

    winter_is_coming:
    std::cout << "Enter alias 🎫 ";
    getline(std::cin,input);
    if (input == "\n" || input == "\0" )
    {
        std::cout << "  Invalid Alias ❕ " << std::endl << std::endl;
        goto winter_is_coming;
    }
    _contacts[c_count].set_alias(input);

    i_will_go:
    std::cout << "Enter number 🎫 ";
    getline(std::cin,input);
    if (input == "\n" || input == "\0" )
    {
        std::cout << "  Invalid Number ❕ " << std::endl << std::endl;
        goto i_will_go;
    }
    _contacts[c_count].set_phonenumber(input);

    returning:
    std::cout << "Enter darksecret 🎫 ";
    getline(std::cin,input);
    if (input == "\n" || input == "\0")
    {
        std::cout << "  Invalid Secret ❕ " << std::endl << std::endl;
        goto returning;
    }
    _contacts[c_count].set_darksecret(input);

    c_count++;
    if (total_count < 8)
        total_count++;
    if (c_count == 8)
        c_count = 0;
}