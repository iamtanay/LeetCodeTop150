/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
*/

#include<iostream>
#include<string>

int lengthOfLastWord(std::string s) {
    int lenOfWord = 0;
    for(int i = s.size()-1; i >= 0; --i) {
        if(s[i] == ' ' && lenOfWord > 0) return lenOfWord;
        if(s[i] != ' ') lenOfWord++;        
    }
    return lenOfWord;
}

//Alternate Solution
int lengthOfLastWordAlt(std::string s) {
    int lenOfWord = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ' && s[i+1] != ' ' && i < s.size() - 1) 
            lenOfWord = 0;
        if(s[i] != ' ') 
            lenOfWord++;        
    }
    return lenOfWord;
}

int main() {
    std::string s = "   fly me   to   the moon  ";
    int lengthOfWord = lengthOfLastWord(s);
    std::cout<<"The length of the last word is: "<<lengthOfWord<<std::endl;
    lengthOfWord = lengthOfLastWordAlt(s);
    std::cout<<"The length of the last word is(Alternate solution): "<<lengthOfWord<<std::endl;
    return 0;
}