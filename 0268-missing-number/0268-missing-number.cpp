class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n =nums.size();
       int sum = 0;
      for(int i = 0;i < nums.size();i++) {
        sum = sum + nums[i];
      }
        int actualsum = 0;
        actualsum = n*(n+1)/2;
            actualsum = actualsum - sum;
            return actualsum;  
       
    }
};