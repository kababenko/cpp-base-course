#include <iostream>
#include <array>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int function(int prices[]) {
    int purchase = prices[0];
    int  profit = 0;
        for (int i = 1; i < sizeof(prices); i++) {
            if (prices[i] < purchase) {
                purchase = prices[i];

            }
            else profit = max(profit, prices[i] - purchase);
        }
    return profit;
}

int main(){
    int n;
    int prices[8]{ 3,3,5,0,0,3,1,4 };
    std::cout << function(prices);
}