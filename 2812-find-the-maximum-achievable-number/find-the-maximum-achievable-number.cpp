class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        /*int p=num+t;
        int q=num-t;
        int i=num+2*t;
        int j=num-2*t;
        int x=i>j?i:j;*/
        return num+2*t>num-2*t ? num+2*t :num-2*t;
        

    }
};