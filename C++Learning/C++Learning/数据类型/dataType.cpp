//
//  dataType.cpp
//  C++Learning
//
//  Created by Tian,Nan on 2017/12/12.
//  Copyright © 2017年 Tian,Nan. All rights reserved.
//

#include "dataType.hpp"
#include <iostream>
using namespace std;

int show_dataType(){
    bool isSuccess = true; //1字节
    std:: cout << "size of bool is : " << sizeof(bool) << endl;
    std:: cout << "the bool is : " << isSuccess << endl;

    char name = 'Y'; //1字节
    std::cout << "size of char is : " << sizeof(char) << endl;
    std::cout << "ths char is : " << name << endl;
    
    unsigned char sex = 'C'; //1字节
    std::cout << "size of char is : " << sizeof(unsigned char) << endl;
    std::cout << "ths char is : " << sex << endl;
    
    int m = 40 ; //4字节
    std::cout << "size of int is : " << sizeof(int) << endl;
    std::cout << "ths int is : " << m << endl;
    
    short int test_m = 90; //2字节
    std::cout << "size of short int is : " << sizeof(short int) << endl;
    std::cout << "ths short int is : " << test_m << endl;
    
    float m_value = 9.9; //4字节
    std::cout << "size of float is :" << sizeof( float ) << endl;
    std::cout << "ths short float is : " << m_value << endl;
 
    double pappa = 9.23; //8字节
    std::cout << "size of double is :" << sizeof( double ) << endl;
    std::cout << "ths short double is : " << pappa << endl;
    
    long double nameLong = 0.000; //8字节
    std::cout << "size of long double is :" << sizeof( long double ) << endl;
    std::cout << "ths short long double is : " << nameLong << endl;
    
    wchar_t asdf = {L's'};
    std::cout << "size of wchar_t is :" << sizeof(wchar_t) << endl;
    std::cout << "ths short wchar_t is : " << asdf << endl;
    
    
    return 1;
    
}
