#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int trades; cin >> trades;
        string op,tmp; int numShares,priceShares;
        int tradePrice = -1;
        map<int,int,greater<int>> buyPrices;
        map<int,int> sellPrices;
        for (int i = 0; i < trades; i++) {
            cin >> op >> numShares >> tmp >> tmp >> priceShares;
            if (op == "buy") buyPrices[priceShares] += numShares;
            else sellPrices[priceShares] += numShares;

            while (buyPrices.size() && sellPrices.size() && buyPrices.begin()->first >= sellPrices.begin()->first) {
                tradePrice = sellPrices.begin()->first;
                int transactionAmount = min(sellPrices.begin()->second,buyPrices.begin()->second);
                sellPrices.begin()->second -= transactionAmount;
                if (sellPrices.begin()->second == 0) sellPrices.erase(sellPrices.begin());
                buyPrices.begin()->second -= transactionAmount;
                if (buyPrices.begin()->second == 0) buyPrices.erase(buyPrices.begin());
            }
            if (sellPrices.size()) cout << sellPrices.begin()->first << " ";
            else cout << "- ";
            if (buyPrices.size()) cout << buyPrices.begin()->first << " ";
            else cout << "- ";
            if (tradePrice != -1) cout << tradePrice << "\n";
            else cout << "-\n";
        }
    }
    return 0;
}
