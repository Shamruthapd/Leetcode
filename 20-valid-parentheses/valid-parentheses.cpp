class Solution {
public:
    bool isValid(string s) {
        stack<int> k;
        for(int i=0;i<s.length();i++){
            if((!k.empty()) && ((s[i]==')' && k.top()=='(') || (s[i]=='}' && k.top()=='{') || (s[i]==']' && k.top()=='['))){
                k.pop();
            }
            else if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
                k.push(s[i]);
            }
            else{
                return false;
            }
        }
        if(k.empty()){
            return true;
        }
        return false;
    }
};