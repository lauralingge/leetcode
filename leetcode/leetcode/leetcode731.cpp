//
//  main.cpp
//  test.cpp
//
//  Created by laura bliss on 02/12/2017.
//  Copyright © 2017 laura bliss. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class MyCalendarTwo
{
public:
    std::vector<std::vector<int>> vecCal;
    std::vector<std::vector<int>> vecCal2;
public:
    MyCalendarTwo()
    {
        vecCal.clear();
        vecCal2.clear();
    }
    
    bool book(int start, int end)
    {
        
        for (auto iv: vecCal2)
        {
            if (iv[0] < end && start < iv[1])
                return false;
        }
        for (auto iv: vecCal)
        {
            if (iv[0] < end && start < iv[1])
            {
                std::vector<int> vec;
                vec.clear();
                vec.push_back(max(start, iv[0]));
                vec.push_back(min(end, iv[1]));
                vecCal2.push_back(vec);
            }
        }
        std::vector<int> vec2;
        vec2.clear();
        vec2.push_back(start);
        vec2.push_back(end);
        vecCal.push_back(vec2);
        return true;
    }
};


//int main()
//{
//    MyCalendarTwo* cal = new MyCalendarTwo();
//    std::vector<std::vector<int>> vec;
//    vec.clear();
//    //    int array[10][2] ={24,40,43,50,27,43,5,21,30,40,14,29,3,19,3,14,25,39,6,19};
//    //    int array2[][2] ={5,12,42,50,4,9,33,41,2,7,16,25,7,16,6,11,13,18,38,43,49,50,6,15,5,13,35,42,19,24,46,50,39,44,28,36,28,37,20,29,41,49,11,19,41,46,28,37,17,23,22,31,4,10,31,40,4,12,19,26};
//    int array3[][2]={12,26,70,85,55,67,2,13,3,18,91,100,13,26,17,27,41,55,15,26,50,68,34,52,95,100,23,33,89,100,27,43,80,95,97,100,28,47,45,58,76,93,56,75,91,100,61,77,36,49,18,32,96,100,96,100,67,86,46,64,95,100,17,35,8,27,4,14,30,43,74,89,77,95,98,100,31,41,35,53};
//    for(auto &arrayl : array3)
//    {
//        bool canbook = cal->book(arrayl[0], arrayl[1]);
//        std::cout << boolalpha << canbook <<endl;
//    }
//    return 0;
//}
