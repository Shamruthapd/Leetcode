class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*for(int i=0;i<nums.size();i++){
            int f=count(nums.begin(),nums.end(),nums[i]);
            if(f==1){
                return nums[i];
            }
        }
        return 0;*/
        int ans = 0;
        for(int x : nums){
            ans ^= x;   // XOR all elements
        }
        return ans;
    }
};