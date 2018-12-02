//
//  MyCalendar.cpp
//  test.cpp
//
//  Created by laura bliss on 05/12/2017.
//  Copyright © 2017 laura bliss. All rights reserved.
//

#include "MyCalendar.h"

MyCalendar::MyCalendar()
{
    vec.clear();
}
bool MyCalendar::book(int start, int end)
{
    for(auto vecl: vec)
    {
        if(vecl.at(0)< end && vecl.at(1) > start)
        {
            return false;
        }
    }
    vector<int> ve;
    ve.clear();
    ve.push_back(start);
    ve.push_back(end);
    vec.push_back(ve);
    return true;
}
/////////////////////////////////////////////////////////////////////
MyCalendarTwo::MyCalendarTwo()
{
    vecCal.clear();
    vecCal2.clear();
}
bool MyCalendarTwo::book(int start, int end)
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

//////////////////////////////////////////////////////////////////
MyCalendarThree::MyCalendarThree()
{
    vecCal.clear();
    vecCal2.clear();
    
}
int MyCalendarThree::book(int start, int end)
{
    int n = 1;
    
    for (auto iv: vecCal2)
    {
        if (iv[0] < end && start < iv[1])
            n += 1;
    }
    for (auto iv: vecCal)
    {
        if (iv[0] < end && start < iv[1])
        {
            k += 1;
            std::vector<int> vec;
            vec.clear();
            vec.push_back(max(start, iv[0]));
            vec.push_back(min(end, iv[1]));
            vecCal2.push_back(vec);
        }
    }
    if (n>=k)
    {
        k=n;
    }
    std::vector<int> vec2;
    vec2.clear();
    vec2.push_back(start);
    vec2.push_back(end);
    vecCal.push_back(vec2);
    return k;
}

int Solution::pivotIndex(vector<int>& nums)
{
    for(int i = 0; i < nums.size() ;i++)
    {
        int sumleft = 0;
        int sumright = 0;
        for(int j =0;j<i;j++)
        {
            sumleft = sumleft + nums.at(j);
        }
        for(int j = i+1; j < nums.size(); j++)
        {
            sumright = sumright + nums.at(j);
        }
        
        if(sumleft == sumright) return i;
    }
    return -1;
}
int SolutionSubString::lengthOfLongestSubstring(string s)
{
    int length = 0;
    int lengthpre = 0;
    int beginnum = 0;
    if(s.length() == 0 || s.length() == 1)
    {
        length = (int)s.length();
        return length;
    }
    for(int i = 0;i < s.length(); i++)
    {
        if(i==0)
        {
            length = length+1;
        }
        else if(i!=0 && s[i]==s[i-1])
        {
            beginnum = i;
            lengthpre = max(length,lengthpre);
            length =1;
        }
        else
        {
            for(int j = beginnum;j < i; j++)
            {
                if(s[i] == s[j])
                {
                    beginnum = j+1;
                    lengthpre = max(length,lengthpre);
                    length =i-j;
                    break;
                }
                else if(j == i-1 && s[i] != s[j])
                {
                    length += 1;
                }
            }
        }
        
    }
    length = max(length,lengthpre);
    return length;
}

ListNode* SolutionLink::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* l = nullptr;
    return l;
}
string SolutionPalindrome::longestPalindrome(string s)
{
    
    return s;
}
bool SolutionPalindrome::isLongestPalindrome(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != s.at(s.length()-1-i))
        {
            return false;
        }
    }
    return true;
}

