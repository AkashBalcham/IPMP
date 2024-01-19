#include <bits/stdc++.h>
using namespace std;

int profit(vector<int> &prices) {
    int buy = 0, sell = 0, profit = 0;
    int n = prices.size();
    while(buy < n) {
        if (prices[buy] < prices[buy + 1]) {
            int flag = 0;
            sell = buy + 1;
            while(sell < n) {
                if (prices[sell] > prices[buy]) {
                    profit += prices[sell] - prices[buy];
                    buy = sell - 1;
                    flag = 1;
                    break;
                }
            }
            if (!flag) break;
        }
        buy++;
    }
    return profit;
}

int main() {
    vector<int> prices {7,1,5,3,6,4};
    cout << profit(prices) << endl;
}