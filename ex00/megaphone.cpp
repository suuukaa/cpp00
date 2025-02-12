/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:27:33 by sel-bouy          #+#    #+#             */
/*   Updated: 2025/01/25 19:49:29 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    std::string str;
    
    if (ac > 1){
        for(int i = 1; av[i]; i++){
            str = av[i];
            for(int j = 0; str[j]; j++){
                str[j] = toupper(str[j]);
                std::cout << str[j];
            }
        }
        std::cout<<std::endl;
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
