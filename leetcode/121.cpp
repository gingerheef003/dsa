// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min = INT_MAX;
      int diff = 0;
      int temp = 0;
      for(int i = 0; i < prices.size(); i++) {
        if (prices[i] < min) min = prices[i];
        temp = prices[i] - min;
        if (temp > diff) diff = temp;
      }
      return diff;
    }
};
