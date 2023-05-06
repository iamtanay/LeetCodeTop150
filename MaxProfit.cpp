/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a 
different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any 
profit, return 0.
*/
#include<iostream>
#include<vector>
#include <algorithm>

int maxProfit(std::vector<int>& prices) {
    int maxprofit = 0;
    int minele = INT32_MAX;
    for(int i = 0; i < prices.size(); i++) {
        minele = std::min(minele,prices[i]);
        maxprofit = std::max(maxprofit,prices[i]-minele);
    }
    return maxprofit;
}

int main()
{
    std::vector<int> n1 = {7,1,5,3,6,4};
    int k = maxProfit(n1);
    std::cout<<std::endl<<"Max Profit is: "<<k<<std::endl;
    return 0;
}