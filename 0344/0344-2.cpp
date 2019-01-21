class Solution {
public:
    string reverseString(string s) {
        stack<char> stk;
        int i=0;
        if(s==""||s.length()==0) {
            return s;
        }
        while(i<=s.length()-1) {
            stk.push(s[i]);
            i++;
        }
        string res="";
        while(!stk.empty()) {
            char tmp=stk.top();
            int i=res.length();
            res.insert(i,1,tmp);
            stk.pop();
        }
        return res;
    }
};
