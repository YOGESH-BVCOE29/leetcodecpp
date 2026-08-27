class Solution {
public:
    int maxArea(vector<int>& height) {
    int n = height.size(), mw = 0;
    int lp = 0;
    int rp = n - 1;
    while(lp < rp){
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);;
        int cw = w * ht;
        mw = max(mw, cw);
        if(height[lp] < height[rp]){
            lp++;
        } else{
            rp--;
        }
    }




return mw;
    } 
};