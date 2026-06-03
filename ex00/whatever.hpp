/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchaumei <rchaumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:50:24 by rchaumei          #+#    #+#             */
/*   Updated: 2026/06/03 16:56:20 by rchaumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
T swap(T a, T b){
    T tmp;
    
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b){
    if (a == b)
        return a;
    return ((a < b) ? a : b);
}

template <typename T>
T max(T a, T b){
    if (a == b)
        return a;
    return ((a > b) ? a : b);
}
