class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maximum = 0;
        
        while (j > i) {
        
        int width = j - i;
        int h = min(height[i],height[j]);
        int area = width* h;

        if( area > maximum) {
            maximum = area;
        } 
        if( height[i] < height[j]){
            i++;
        }
        else {
            j--;
        }
        
        
        }

return maximum;





    }
};