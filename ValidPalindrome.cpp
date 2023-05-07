/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase 
letters and removing all non-alphanumeric characters, it reads the same forward and 
backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/
#include<iostream>
#include<string>

bool isPalindrome(std::string s) {
    int left=0, right=s.length()-1;
    while(left<right) {
        if(!isalnum(s[left])) left++;
        else if(!isalnum(s[right])) right--;
        else if(tolower(s[left]) != tolower(s[right])) return false;
        else {left++; right--;}
    }
    return true;
}

int main()
{
    std::string s = "A man, a plan, a canal: Panama";
    bool isPal = isPalindrome(s);
    std::cout<<"Palindrome: "<<isPal<<std::endl;
    return 0;
}