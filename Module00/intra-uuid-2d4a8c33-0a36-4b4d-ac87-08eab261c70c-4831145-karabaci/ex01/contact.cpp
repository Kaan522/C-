#include "contact.hpp"

void contact::set_name(std::string name)
{
    this->_name = name;
}

void contact::set_surname(std::string surname)
{
    this->_surname = surname;
}

void contact::set_alias(std::string alias)
{
    this->_aLias = alias;
}

void contact::set_phonenumber(std::string phonenumber)
{
    this->_phonenumber = phonenumber;
}

void contact::set_darksecret(std::string darksecret)
{
    this->_darkSecret = darksecret;
}

std::string contact::get_name(void)
{
    return (this->_name);
}

std::string contact::get_surname(void)
{
    return (this->_surname);
}

std::string contact::get_alias(void)
{
    return (this->_aLias);
}

std::string contact::get_phonenumber(void)
{
    return (this->_phonenumber);
}

std::string contact::get_darksecret(void)
{
    return (this->_darkSecret);
}