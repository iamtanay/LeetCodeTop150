/*
Given a roman numeral, convert it to an integer.
*/

#include<iostream>
#include<unordered_map>
#include<string>

int romanToInt(std::string s) {
    int intNumber = 0;
    std::unordered_map<char, int> romans{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };

    for(int i=0; i<s.size(); i++) {
        if(romans[s[i]] < romans[s[i+1]]) {
            intNumber -= romans[s[i]];
        } else {
            intNumber += romans[s[i]];
        }
    }
    return intNumber;
}

int main()
{
    std::string roman = "MCMXCIV";
    int number = romanToInt(roman);
    std::cout<<"The integer number is:"<<number<<std::endl;
    return 0;    
}