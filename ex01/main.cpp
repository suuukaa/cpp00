/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:30:51 by sel-bouy          #+#    #+#             */
/*   Updated: 2025/02/05 20:45:03 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    add(PhoneBook *phonebook)
{
    std::string f_n, l_n, n_m, d_s, p_n;
    std::cout << "First Name : ";
    std::getline(std::cin, f_n);
    if (std::cin.eof()) exit(0);
    while(f_n.empty()){
        std::cout << "you didn't enter anything"<<std::endl;
        std::cout << "First Name : ";
        std::getline(std::cin, f_n);
        if (std::cin.eof()) exit(0);
}
    
    std::cout << "Last Name : ";
    std::getline(std::cin, l_n);
    if (std::cin.eof()) exit(0);
        while(l_n.empty()){
        std::cout << "you didn't enter anything"<<std::endl;
        std::cout << "First Name : ";
        std::getline(std::cin, l_n);
        if (std::cin.eof()) exit(0);
        }

    std::cout << "Nick Name : ";
    std::getline(std::cin, n_m);
    if (std::cin.eof()) exit(0);
        while(n_m.empty()){
        std::cout << "you didn't enter anything"<<std::endl;
        std::cout << "First Name : ";
        std::getline(std::cin, n_m);
        if (std::cin.eof()) exit(0);
        }
    
    std::cout << "Dark Secret : ";
    std::getline(std::cin, d_s);
    if (std::cin.eof()) exit(0);
        while(d_s.empty()){
        std::cout << "you didn't enter anything"<<std::endl;
        std::cout << "First Name : ";
        std::getline(std::cin, d_s);
        if (std::cin.eof()) exit(0);
        }
    
    std::cout << "Phone Number : ";
    std::getline(std::cin, p_n);
    if (std::cin.eof()) exit(0);
        while(p_n.empty()){
        std::cout << "you didn't enter anything"<<std::endl;
        std::cout << "First Name : ";
        std::getline(std::cin, p_n);
        if (std::cin.eof()) exit(0);
    }
    
    Contact contact;
    contact.set_value(f_n, l_n, n_m, d_s, p_n);
    phonebook->add_new_contact(contact);
}

void    search(PhoneBook *PhoneBook)
{
    Contact contact;
    int i = 0;
    if(!PhoneBook->get_index()){
        std::cout<<"No data to display"<<std::endl; 
        return;
    }
    std::cout<<"---------------------------------------------"<<std::endl;
    std::cout<<"|     Index|First name| Last name|  nickname|"<<std::endl;
    std::cout<<"---------------------------------------------"<<std::endl;
    while(i < PhoneBook->get_index()){
        contact = PhoneBook->get_contact(i);
        std::cout<<'|'<< std::setw(10) << i+1;

        std::string first = contact.get_f_n();
        if(first.length() >= 10)
            first = first.substr(0, 9) + '.';
        std::cout<<'|'<< std::setw(10) << first;
        
        std::string last = contact.get_l_n();
        if(last.length() >= 10)
            last = last.substr(0, 9) + '.';        
        std::cout<<'|'<< std::setw(10) << last;
        
        std::string nickname = contact.get_n_n();
        if(nickname.length() >= 10)
            nickname = nickname.substr(0, 9) + '.';
        std::cout<<'|'<< std::setw(10) << nickname<< '|'<<std::endl;
        
        std::cout<<"---------------------------------------------"<<std::endl;
        i++;
    }
    std::cout<<"Enter Index : ";
    std::string in;
    std::getline(std::cin,in);
    if (std::cin.eof()) exit(0);
    int a = atoi(in.c_str());

    if (a <= 0 || a > PhoneBook->get_index()){
        std::cout<< "Invalid Index" << std::endl;
        return ;
    }
    contact = PhoneBook->get_contact(a - 1);
    std::cout<< "First name : "<< contact.get_f_n() << std::endl;
    std::cout << "Last name : " << contact.get_l_n() << std::endl;
    std::cout << "Nickname : " << contact.get_n_n() << std::endl;
    std::cout << "Phone Number : " << contact.get_p_n() << std::endl;
}

int main(int ac, char **av)
{
    (void)av;
    if (ac == 1)
    {
        PhoneBook phonebook;
        std::string get_line;
        while (1)
        {
            std::cout<< "chose a command : ADD or SEARCH or EXIT"<<std::endl;
            std::getline(std::cin, get_line);
            if (std::cin.eof()) exit(0);
            if(get_line == "EXIT")
                exit(0);
                else if(get_line == "ADD")
                    add(&phonebook);
                else if(get_line == "SEARCH")
                    search(&phonebook);
        }
    }
    return 0;
}

