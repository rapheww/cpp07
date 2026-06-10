/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchaumei <rchaumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 14:53:15 by rchaumei          #+#    #+#             */
/*   Updated: 2026/06/10 18:11:15 by rchaumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void capitalize(char& c){
    c = std::toupper(c);
}

int main(){
    std::string testArray[] = {"salut", "test", "oui"};
    int intArray[] = {1, 2, 3, 4};
    const char constcharTest [] = {'a', 'b', 'c'};
    char charTest [] = {'a', 'b', 'c'};
    
    size_t size2 = 4;
    size_t size = 3;
    
    iter<std::string>(testArray, size, print<std::string>);
    
    std::cout<<"\n---INTARRAY---"<<std::endl;
    printArray<int>(intArray, size2);
    std::cout<<"___Iter___\n";
    iter<int>(intArray, size2, increment<int>);
    printArray<int>(intArray, size2);
    
    std::cout<<"\n---CHARARRAY---"<<std::endl;
    iter<const char>(constcharTest, size, print<const char>);
    // iter<const char>(constcharTest, size, capitalize);
    iter<char>(charTest, size, capitalize);
    iter<char>(charTest, size, print<char>);
    
    return 0; 
}