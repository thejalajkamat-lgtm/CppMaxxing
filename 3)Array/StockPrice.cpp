#include <bits/stdc++.h> //always use this because it covers all func. of cpp
using namespace std;

int maxProfit(int prices[], int n){
    int bestBuy[10000]; // in question
    bestBuy[0] = prices[0];
    for(int i=1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);  
    }
     int maxProfit = 0;
     for(int i=0; i<n; i++) {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit= max(maxProfit, currProfit);
     }
    //  cout << "Best price to buy is : "<< bestBuy[i] << endl;
    //  cout << "Best price to sell is : "<< bestBuy[i] << endl;
          cout << "max Profit = " << maxProfit << endl;
}

int main() {
       int prices[6] = {7, 1, 5, 3, 6, 4};
       int n = sizeof(prices) / sizeof(int);
       maxProfit(prices, n);
       return 0;
}