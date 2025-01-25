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

#include "header.hpp"

MyClass::MyClass(){}
void MyClass::setName(std::string Name) {
    nick_name = Name;    
}
std::string MyClass::getName(void){
    return nick_name;
}
