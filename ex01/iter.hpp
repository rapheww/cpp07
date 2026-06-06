/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchaumei <rchaumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 14:53:37 by rchaumei          #+#    #+#             */
/*   Updated: 2026/06/05 15:50:42 by rchaumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t len, F function){
    for (size_t i = 0; i < len; i++)
        function(array[i]);
}

template <typename T>
void print(const T& str){
    std::cout<<str<<std::endl;
}

template<typename T>
void increment(T& param){
    param += 1;
}

template<typename T>
void printArray(T* array, size_t len){
    for (size_t i = 0; i < len; i++)
        std::cout<<array[i]<<std::endl;
}