#include "PhoneBook.hpp"

void Contact::set_value(std::string f_n, std::string l_n, std::string n_n, std::string d_s, std::string p_n)
{
    first_name = f_n;
    last_name = l_n;
    nickname = n_n;
    dark_secret = d_s;
    phone_number = p_n;
}

std::string Contact::get_f_n()
{
    return (first_name);
}
std::string Contact::get_l_n()
{
    return (last_name);
}
std::string Contact::get_n_n()
{
    return (nickname);
}
std::string Contact::get_p_n()
{
    return (phone_number);
}
