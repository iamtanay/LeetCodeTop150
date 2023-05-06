/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
The order of the elements may be changed. Then return the number of elements in nums which are 
not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, 
you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which 
are not equal to val. The remaining elements of nums are not important as well as the size of nums.

Return k.
*/

#include<iostream>
#include<vector>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            int swap;
            swap = nums[i];
            nums[i] = nums[k];
            nums[k] = swap;
            k++;
        }
    }
    return k;
}

int main()
{
    std::vector<int> n1 = {0,1,2,2,3,0,4,2};
    int v = 2;
    int k = removeElement(n1,v);
    std::cout<<"Array after the number "<< v << " is pushed to the end: ";
    for(int i =0; i<k; i++) {
        std::cout << n1[i] << " ";
    }
    std::cout<<std::endl<<"The value of k is: "<<k<<std::endl;
    return 0;
}