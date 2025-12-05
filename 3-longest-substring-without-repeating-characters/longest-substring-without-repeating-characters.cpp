class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> t;
        int l=0;
        int r=0;
        int n=s.length();
        int c=0;
        while(r<n){
            if(!t.count(s[r])){
                t.insert(s[r]);
                c=c>t.size()?c:t.size();
            }
            else{
                while(l<r && t.count(s[r])){
                    t.erase(s[l]);
                    l++;
                }
                t.insert(s[r]);
                c=c>t.size()?c:t.size();
            }
            r++;
        }
        return c;
    }
};