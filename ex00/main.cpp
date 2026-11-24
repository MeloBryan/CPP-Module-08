/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:45:58 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/24 15:05:51 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
    int raw[] = {135, 54, 684763, 696, 11, 65};
    size_t size = sizeof(raw) / sizeof(raw[0]);
    std::vector<int> vec(raw, raw + size);
    std::list<int> lst(raw, raw + size);
    std::deque<int> deq(raw, raw + size);
    try {
        std::vector<int>::iterator it = easyfind(vec, 11);
        std::cout << "Found : " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try {
        std::list<int>::iterator it = easyfind(lst, 54);
        std::cout << "Found : " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try {
        std::deque<int>::iterator it = easyfind(deq, 0);
        std::cout << "Found : " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    deq.push_back(0);
    try {
        std::deque<int>::iterator it = easyfind(deq, 0);
        std::cout << "Found : " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}