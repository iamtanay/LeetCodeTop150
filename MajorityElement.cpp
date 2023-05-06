/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority 
element always exists in the array.
*/

#include<iostream>
#include<vector>
#include <bits/stdc++.h>

int majorityElement(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for(int i =0; i<nums.size(); i++) {
            std::cout << nums[i] << " ";
        }
        int val = nums[0];
        int count = 0;
        int max = 0; 
        int maxnum = val;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                                val = nums[i];
                count = 1;
            } else {
                count++;
                if(count > max) {
                    max = count;
                    maxnum = val;
                }
            }
        }
        return maxnum;
    }

int main()
{
    std::vector<int> n1 = {2,2,1,1,1,2,2};
    int k = majorityElement(n1);
    std::cout<<std::endl<<"Majority element is: "<<k<<std::endl;
    return 0;
}