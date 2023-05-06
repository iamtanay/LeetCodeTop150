/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place 
such that each unique element appears only once. The relative order of the elements should 
be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the 
following things:

Change the array nums such that the first k elements of nums contain the unique elements in 
the order they were present in nums initially. The remaining elements of nums are not important 
as well as the size of nums.

Return k
*/
#include<iostream>
#include<vector>

int removeDuplicates(std::vector<int>& nums) {
    int val = nums[0];
    int k = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] != val) {
            val = nums[i];
            nums[k++] = nums[i]; 
        }         
    }
    return k;
}

int main()
{
    std::vector<int> n1 = {0,1,1,2,2,2,2,3,3,4};
    int k = removeDuplicates(n1);
    std::cout<<"Array after the duplicates are removed from the beginning: ";
    for(int i =0; i<k; i++) {
        std::cout << n1[i] << " ";
    }
    std::cout<<std::endl<<"The value of k is: "<<k<<std::endl;
    return 0;
}