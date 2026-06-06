/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchaumei <rchaumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:33:10 by rchaumei          #+#    #+#             */
/*   Updated: 2026/06/05 17:45:07 by rchaumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    Array<char> a;
    Array<char> b(4);
    
    b[0] = 'a';
    b[1] = 'b';
    try{
        std::cout<<"a[0] : "<<a[0]<<std::endl;
        std::cout<<"a[1] : "<<a[1]<<std::endl;
    }
    catch(std::exception& e){
        std::cout<<"Exception :"<<e.what()<<std::endl;
    }
    a = b;
    b[0] = 'z';
    b[1] = 'x';
    try{
        std::cout<<"a[0] : "<<a[0]<<std::endl;
        std::cout<<"a[1] : "<<a[1]<<std::endl;
    }
    catch(std::exception& e){
        std::cout<<"Exception :"<<e.what()<<std::endl;
    }
    std::cout<<"size a : "<<a.size()<<std::endl;
    return 0;
}