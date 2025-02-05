#include "PhoneBook.hpp"

void PhoneBook::add_new_contact(Contact new_contact)
{
    if(index_contact < 8)
        contact[index_contact] = new_contact;

    if(index_contact > 8)
        contact[(index_contact % 8) - 1] = new_contact;

    index_contact++;
}

PhoneBook::PhoneBook(int index_cotact){
    index_contact = 0;
}
