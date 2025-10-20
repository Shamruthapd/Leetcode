class Solution {
public:
    int addDigits(int num) {
        int r;
        int s=0;
        int temp=num;
        while(temp>=10){
            s=temp%10;
            temp=temp/10;
            temp=s+temp;
        }
        return temp;
    }
};