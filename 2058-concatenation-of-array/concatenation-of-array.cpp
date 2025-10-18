class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> n(nums.size()*2);
        for(int i=0;i<nums.size();i++){
            n[i]=nums[i];
            n[nums.size()+i]=nums[i];
        }
        return n;
    }
};