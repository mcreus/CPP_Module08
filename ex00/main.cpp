/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:13:42 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/30 15:04:35 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"



int main() 
{
    std::list<int> listContainer;
    listContainer.push_back(10);
    listContainer.push_back(20);
    listContainer.push_back(30);
    listContainer.push_back(40);
    listContainer.push_back(50);
	
    int value1 = 30;
    int value2 = 60;

	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "------------------Test ONE------------------" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::endl;
	easyFind(listContainer, value1);//it's ok
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "------------------Test TWO------------------" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::endl;
    easyFind(listContainer, value2);//it's not ok, exception called
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::endl;

    return 0;
}