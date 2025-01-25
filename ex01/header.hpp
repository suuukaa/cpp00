/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:31:38 by sel-bouy          #+#    #+#             */
/*   Updated: 2025/01/25 20:14:21 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class MyClass {
	private:
		std::string	nick_name;
		std::string user_name;
		int			age;
		MyClass();
		~MyClass();
	public:
		void	setName(std::string Name);
		std::string getName(void);
};