#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

    Contact contact[8];
    int index_contact;
    int sh7al_3ndi;
    
    public :
    
    PhoneBook();
    void add_new_contact(Contact new_contact);
    int get_index();
    Contact get_contact(int index);
};

#endif