class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        int m=0;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        unordered_set<int> p;
        for(int i:s){
            int k=i;
            int c=1;
            if(!p.count(k-1)){
                while(s.count(k-1)==1){
                    p.insert(k-1);
                    c+=1;
                    k-=1;
                }
            }
            
            k=i;
            if(!p.count(k+1)){
                while(s.count(k+1)==1){
                    p.insert(k+1);
                    c+=1;
                    k+=1;
                }
            }
            
            m=max(c,m);
            
        }
        return m;
    }
};