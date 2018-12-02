//
//  main.cpp
//  test.cpp
//
//  Created by laura bliss on 02/12/2017.
//  Copyright © 2017 laura bliss. All rights reserved.
//

#include <iostream>
#include "MyCalendar.h"

int main()
{
    //    MyCalendarTwo* cal = new MyCalendarTwo();
    //    MyCalendar* cal = new MyCalendar();
    //    MyCalendarThree* cal = new MyCalendarThree();
    //    std::vector<std::vector<int>> vec;
    //    vec.clear();
    //    int array[10][2] ={24,40,43,50,27,43,5,21,30,40,14,29,3,19,3,14,25,39,6,19};
    //    int array2[][2] ={5,12,42,50,4,9,33,41,2,7,16,25,7,16,6,11,13,18,38,43,49,50,6,15,5,13,35,42,19,24,46,50,39,44,28,36,28,37,20,29,41,49,11,19,41,46,28,37,17,23,22,31,4,10,31,40,4,12,19,26};
    //    int array3[][2]={24,40,43,50,27,43,5,21,30,40,14,29,3,19,3,14,25,39,6,19};
    //    for(auto &arrayl : array3)
    //    {
    //        int canbook = cal->book(arrayl[0], arrayl[1]);
    //        std::cout << boolalpha << canbook <<endl;
    //    }
    
    //    vector<int> nums;
    //    nums.clear();
    //    nums.push_back(1);
    //    nums.push_back(7);
    //    nums.push_back(3);
    //    nums.push_back(6);
    //    nums.push_back(5);
    //    nums.push_back(6);
    //    Solution* s = new Solution();
    //    int index = s->pivotIndex(nums);
    SolutionSubString* s = new SolutionSubString();
    string sub = "pwwadbcwpd";
    int length = s->lengthOfLongestSubstring(sub);
    cout << length <<endl;
    return 0;
}
