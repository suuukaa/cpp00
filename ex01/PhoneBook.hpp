#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

    Contact contact[8];
    int index_contact;
    
    public :
    
    void add_new_contact(Contact new_contact);
    PhoneBook();
    int get_index();
};

#endif