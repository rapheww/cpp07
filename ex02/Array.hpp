/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchaumei <rchaumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:29:35 by rchaumei          #+#    #+#             */
/*   Updated: 2026/06/10 18:19:42 by rchaumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T = int>
class Array{
    public:
        Array() : _array(NULL), _size(0){}
        Array(unsigned int n) : _array(new T[n]), _size(n){}
        Array(const Array& src) : _array(new T[src._size]), _size(src._size) {
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = src._array[i];
		}
        Array& operator=(const Array& source){
            if (this != &source){
                delete[] _array;
                _array = NULL;
                _size = source._size;
                if (_size > 0)
                    _array = new T[source._size];
                for (size_t i = 0; i < _size; i++)
                    _array[i] = source._array[i];
            }
            return *this;
        }
        ~Array(){delete[] _array;}
        
        class OutOfBounds : public std::exception{
            public:
                const char* what() const throw(){
                    return "Index is out of bounds";
                }  
        };

        T& operator[](unsigned int index){
            if (index >= _size)
                throw(OutOfBounds());
            return _array[index];
        }
        
        unsigned int size() const{
            return _size;
        }
    private:
        T* _array;
        unsigned int _size;
};