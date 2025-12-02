class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s;
        int r=strs[strs.size()-1].length();
        int l=strs[0].length();
        int k= l<r?l:r;
        for (int i=0;i<k;i++){
            if(strs[0][i]!=strs[strs.size()-1][i]){
                break;
            }
            s+=strs[0][i];
        }
        return s;
        
    }
};