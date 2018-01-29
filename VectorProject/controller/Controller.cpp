//
//  Controller.cpp
//  VectorProject
//
//  Created by Stout, Zachary on 1/29/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>
#include <vector>
//typedef std::vector<int> int_vec_t;
//using namespace std;
//int_vec_t v;
//size_t size = 10;
//std::vector<int> array(size);
//for(int i=0; i<size; i++)
//{
//    array[i] = i;
//}



int main()
{
    std::vector<int> vec { 0, 1, 2, 3, 4, 5 } ;
    vec.reserve( vec.size() * 2 ) ;
    
    auto n = vec.size() ;
    
    for( auto iter = std::begin(vec) ; n-- ; ++iter )
        iter = vec.insert( iter+1, 99 ) ;

    for( int v : vec ) std::cout << v << ' ' ;
    std::cout << '\n' ;
}

int oldmain ()
{
    std::vector<int> myvector;
    for (int i=1; i<=5; i++) myvector.push_back(i);
    
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    
    return 0;
}
