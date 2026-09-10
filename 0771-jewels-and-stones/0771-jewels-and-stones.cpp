class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int freq[256] = {0};
        for(int i = 0; i < jewels.size(); i++) {
        freq[jewels[i]]++;
        }
           int count = 0;
            for(int i = 0; i < stones.size(); i++) {
                if ( freq[stones[i]] > 0) {
                      count ++;
                }
            }
                
                 return count;   
          
    }
};