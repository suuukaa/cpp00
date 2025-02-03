/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:30:51 by sel-bouy          #+#    #+#             */
/*   Updated: 2025/01/25 20:22:47 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac)
{
    if (ac == 1)
    {
        std::string get_line;
        while (1)
        {
            std::getline(std::cin, get_line);
            if(get_line == "EXIT")
                exit(0);
                // else if()
        }
        
    }
    return 0;
}