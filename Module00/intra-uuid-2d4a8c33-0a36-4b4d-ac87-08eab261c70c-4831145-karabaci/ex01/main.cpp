#include "phonebook.hpp"
#include <ctime>

int get_time()
{
    std::time_t    time;
    time = std::time(NULL);
   return ( std::localtime(&time)->tm_hour);
}

std::string print_message()
{
 if (get_time() >= 0 && get_time() < 5)
    return ("bu saatte ne isin var");
 if (get_time() > 5 && get_time() <= 15)
    return ("iyi oglenler");
  return ("iyi aksamlar");
}

int main()
{
    int status;
    std::string input;
    phone phoneBook;

    status = 0;

    while (status == 0)
    {
        std::cout << "    ❛ ━━━━━━･❪ Nokıa Connectıng People 🤝 ❫ ･━━━━━━ ❜  " << std::endl << " ┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉    ┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉    ┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << std::endl;
        std::cout << "〈Your commands〉📞 ➡️『SEARCH』 ➡️『ADD』 ➡️『EXIT』 🎟 %❹❷ " << std::endl;
        std::cout << ">>>  :";
        getline(std::cin,input);

        if (input == "ADD")
        {
            phoneBook.addcommand();
        }
        else if (input == "SEARCH")
        {
            phoneBook.searchcommand();
        }
        else if (input == "EXIT")
        {
            std::cout << "Phone book exited.." << print_message() << std::endl;
            break;
        }
        else
        {
            std::cout << " invalid command❗️ " << std::endl << std::endl;
            
        }
            
    }
}