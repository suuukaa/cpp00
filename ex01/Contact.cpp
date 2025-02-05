#include "PhoneBook.hpp"

void Contact::set_value(std::string f_n, std::string l_n, std::string n_n, std::string d_s, std::string p_n)
{
    first_name = f_n;
    last_name = l_n;
    nickname = n_n;
    dark_secret = d_s;
    phone_number = p_n;
}
