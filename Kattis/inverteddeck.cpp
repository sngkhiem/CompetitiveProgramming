#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    vector<int> cards;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        cards.push_back(tmp);
    }
    auto sortedCards = cards;
    sort(sortedCards.begin(),sortedCards.end());

    int left = 0, right = cards.size()-1;
    while (left < n && cards[left] == sortedCards[left]) left++;

    if (left == n) left = right = n/2;
    else {
        while (cards[right] == sortedCards[right]) right--;
    }
    reverse(cards.begin()+left,cards.begin()+right+1);
    if (cards != sortedCards) {
        cout << "impossible";
        return 0;
    }
    cout << left+1 << " " << right+1;
    return 0;
}
