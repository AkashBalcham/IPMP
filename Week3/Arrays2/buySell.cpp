#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
    int profit = 0;
    int buy = 0, sell = 1;
    while(sell < prices.size()) {
        if (prices[buy] > prices[sell]) {
            buy = sell;
        } else {
            profit = max(profit, prices[sell] - prices[buy]);
        }
        sell++;
    }
    return profit;
}

int main() {
    vector<int> prices { 7,6,4,3,1 };
    cout << maxProfit(prices) << endl;
}