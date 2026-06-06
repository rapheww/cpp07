/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchaumei <rchaumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:45:30 by rchaumei          #+#    #+#             */
/*   Updated: 2026/06/05 15:20:33 by rchaumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(){

    std::cout<<"---INT---"<<std::endl;
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout<<"SWAP"<<std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::cout<<"\n---STRING---"<<std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout<<"SWAP"<<std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout<<"\n---CHAR---"<<std::endl;
    char e = 'e';
    char f = 'f';
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout<<"SWAP"<<std::endl;
    ::swap( e, f );
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl; // Implicit instance
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl; // Same

    std::cout<<"\n---FLOAT---"<<std::endl;
    float g = 458456.8f;
    float h = 896235.5f;
    std::cout << "g = " << std::fixed<< std::setprecision(1)<< g << ", h = " << h << std::endl;
    std::cout<<"SWAP"<<std::endl;
    ::swap( g, h);
    std::cout << "g = " << std::fixed<< std::setprecision(1)<< g << ", h = " << h << std::endl;
    std::cout << "min( g, h) = " << min<float>( g, h) << std::endl; //Explicit instance
    std::cout << "max( g, h) = " << max<float>( g, h) << std::endl; //Same
    return 0;
}