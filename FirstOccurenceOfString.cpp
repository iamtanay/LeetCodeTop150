/*
Given two strings needle and haystack, return the index of the first occurrence of needle 
in haystack, or -1 if needle is not part of haystack.
*/
#include<iostream>
#include<string>

int strStr(std::string haystack, std::string needle) {
    int index = haystack.find(needle);
    if(index != std::string::npos) return index;
    else return -1;
    
}

int main() {
    std::string haystack = "sabutsabuuuutsad";
    std::string needle = "sad";
    int firstOccur = strStr(haystack, needle);
    std::cout<<"The first occurence of "<<needle<<" in the "<<haystack<<" is: "<<firstOccur<<std::endl;
    return 0;
}