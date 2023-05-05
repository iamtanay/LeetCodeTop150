/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside 
the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements 
denote the elements that should be merged, and the last n elements are set to 0 and should 
be ignored. nums2 has a length of n.
*/

#include<iostream>
#include<vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        
        int i = m-1, j = n-1, k= m+n-1;
        while(i>=0 && j>=0) {
            if(nums1[i] >= nums2[j]) {
                nums1[k] = nums1[i];
                i--;
                k--;
            } else {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0) {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        while(j>=0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
}

int main()
{
    std::vector<int> n1 = {1,5,7,9,11,0,0,0,0};
    std::vector<int> n2 = {2,4,6,8};
    merge(n1,5,n2,4);
    std::cout<<"Merged and Sorted array elements are: ";
    for(int i =0; i<9; i++) {
        std::cout << n1[i] << " ";
    }
    std::cout<<std::endl;
    return 0;
}