#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <iomanip>

class contact
    {
    private:
        std::string _name;
        std::string _surname;
        std::string _aLias;
        std::string _phonenumber;
        std::string _darkSecret;
    public:
        void set_name(std::string name);
        void set_surname(std::string surname);
        void set_alias(std::string alias);
        void set_phonenumber(std::string phonenumber);
        void set_darksecret(std::string darksecret);
        std::string get_name(void);
        std::string get_surname(void);
        std::string get_alias(void);
        std::string get_phonenumber(void);
        std::string get_darksecret(void);
    };

#endif