#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

class Contact{
    
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string dark_secret;
    std::string phone_number;
    
    public:
    
    void set_value(std::string f_n, std::string l_n, std::string n_n, std::string d_s, std::string p_n);
    std::string get_f_n();
    std::string get_l_n();
    std::string get_n_n();
    std::string get_p_n();
};

#endif