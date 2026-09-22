#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int best = 0;
        for (int price : prices) {
            min_price = min(min_price, price);
            best = max(best, price - min_price);
        }
        return best;
    }
};
