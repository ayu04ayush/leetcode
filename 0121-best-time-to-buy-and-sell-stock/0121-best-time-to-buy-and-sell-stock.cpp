class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int maximum =0;
     int minimum = prices[0]; 
      for(int i = 1 ; i < prices.size();i++) {
         int profit = prices[i] - minimum; 
             if(profit > maximum) {
            maximum = profit;
            
             }
        if(prices[i] < minimum) {
                minimum = prices[i];
            }

        
      }  
   return maximum;
    }
};