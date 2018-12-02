//
//  MyCalendar.h
//  test.cpp
//
//  Created by laura bliss on 05/12/2017.
//  Copyright © 2017 laura bliss. All rights reserved.
//

#ifndef MyCalendar_h
#define MyCalendar_h

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
////729
class MyCalendar
{
public:
    vector<vector<int>> vec;
    MyCalendar();
    bool book(int start, int end);
};
///731
class MyCalendarTwo
{
public:
    vector<vector<int>> vecCal;
    vector<vector<int>> vecCal2;
public:
    MyCalendarTwo();
    bool book(int start, int end);
};

class MyCalendarThree
{
public:
    vector<vector<int>> vecCal;
    vector<vector<int>> vecCal2;
    int k = 1 ;
public:
    MyCalendarThree();
    int book(int start, int end);
};

///724
class Solution
{
public:
    int pivotIndex(vector<int>& nums);
};
class SolutionSubString
{
    
public:
    int lengthOfLongestSubstring(string s);
};
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    
};
class SolutionLink
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
class SolutionPalindrome
{
public:
    string longestPalindrome(string s);
    bool isLongestPalindrome(string s);
    
};



#endif /* MyCalendar_h */
