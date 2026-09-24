class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i = 0; i < arr.size();i++) {
           int maximum = -1;
            for(int j = i+1; j < arr.size();j++) {
                if(  arr[j] > maximum ) {
                    maximum = arr[j];
                }
            }
          arr[i] = maximum;
        }
     return arr;
    }
};