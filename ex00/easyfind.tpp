/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:24:18 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/23 18:54:13 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int num) {
    typename T::iterator it = std::find(container.begin(), container.end(), num);
    if (it == container.end())
        throw std::runtime_error("Value not found ...");
    return (it);
}

#endif