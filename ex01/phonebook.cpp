#include "PhoneBook.hpp"

void PhoneBook::add_new_contact(Contact new_contact)
{
    if(index_contact < 8){
        contact[index_contact] = new_contact;
        index_contact++;
    }
    if(index_contact > 8){
        contact[(index_contact % 8) - 1] = new_contact;
        index_contact++;
        index_contact = (index_contact % 8) - 1;
    }
    if (sh7al_3ndi < 8)
        sh7al_3ndi++;
}

PhoneBook::PhoneBook(){
    index_contact = 0;
    sh7al_3ndi = 0;
}

int PhoneBook::get_index(){
    return sh7al_3ndi;
}

Contact PhoneBook::get_contact(int index){
    return (contact[index]);
}
