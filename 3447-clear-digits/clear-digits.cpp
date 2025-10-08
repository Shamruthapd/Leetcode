class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string r="";
        for(int i=0;i<s.length();i++){
            st.push(s[i]);
            r.push_back(s[i]);
            if(isdigit(s[i])){
                st.pop();
                r.pop_back();
                if(!st.empty()){
                    st.pop();
                    r.pop_back();
                }
            }
        }
        return r;
    }
};