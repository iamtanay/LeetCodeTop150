/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    std::string commonPrefix = "";
    sort(strs.begin(), strs.end());
    std::string fstring = strs[0];
    std::string lstring = strs[strs.size()-1];
    for(int i = 0; i < fstring.size(); i++) {
        if(fstring[i] == lstring[i])
            commonPrefix += fstring[i];
        else
            break;
    }
    return commonPrefix;
}

//Alternate Solution, bad time complexity
std::string longestCommonPrefixAlt(std::vector<std::string>& strs) {
    std::string commonPrefix = strs[0];
    for(int i = 1; i < strs.size(); i++) {
        for(int j=0; j < commonPrefix.size(); j++) {
            if(strs[i][j] != commonPrefix[j]) {
                commonPrefix[j] = '\0';
            }
        }
    }
    return commonPrefix;
}

int main() 
{
    std::vector<std::string> strings = {"flower","flow","flight"};
    std::string longestPrefix = longestCommonPrefix(strings);
    std::cout<<"The longest common prefix is: "<<longestPrefix<<std::endl;
    longestPrefix = longestCommonPrefixAlt(strings);
    std::cout<<"The longest common prefix is(Alt solution): "<<longestPrefix<<std::endl;
    return 0;
}