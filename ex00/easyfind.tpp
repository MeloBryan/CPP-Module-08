/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:24:18 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/24 14:57:41 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <stdexcept>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int num) {
    typename T::iterator it = std::find(container.begin(), container.end(), num);
    if (it == container.end())
        throw std::runtime_error("Value not found ...");
    return (it);
}

template <typename T>
typename T::const_iterator easyfind(const T &container, int num) {
    typename T::iterator it = std::find(container.begin(), container.end(), num);
    if (it == container.end())
        throw std::runtime_error("Value not found ...");
    return (it);
}

#endif