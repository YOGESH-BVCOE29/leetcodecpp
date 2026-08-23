class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uni =0;
        for(int i : nums){
            uni = uni^i;
        } return uni;
        
    }
};