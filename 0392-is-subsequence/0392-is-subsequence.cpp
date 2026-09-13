class Solution {
public:
    bool isSubsequence(string s, string t) {

        int j = 0;
        for(int i= 0;i < s.size();i++) {
            bool found = false;
            for(; j < t.size();j++) {
                if(s[i] == t[j]) {
                    found = true;
                    j++;
                    break;
                }
            }     
            if ( found == false ) {
                return false;
                 }
        }
       return true;
    }
};