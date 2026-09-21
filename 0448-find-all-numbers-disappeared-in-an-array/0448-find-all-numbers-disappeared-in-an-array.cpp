class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> freq(nums.size() + 1, 0); 
           vector<int> ans(nums.size());
            int k = 0;
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;}
         for(int i = 1; i <= nums.size(); i++){
         if( freq[i] == 0) {
            ans[k] = i;
            k++;
         }
        }
   ans.resize(k);
   return ans;
    }
};