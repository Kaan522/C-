#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <iomanip>



class phone
    {
    private:
        contact _contacts[8];
        static int c_count;
        static int total_count;
    public:
        void searchcommand(void);
        void addcommand(void);
    };

    #endif