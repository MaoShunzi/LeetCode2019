class Solution {
public:
    string reverseString(string s) {
        stack<string> stk;
        int i=0;
        while(i<=s.length()) {
            string tmp=s.substr(i,1);
            stk.push(tmp);
            i++;
        }
        string res;
        while(!stk.empty()) {
            string tmp=stk.top();
            res=res+tmp;
            stk.pop();
        }
        return res;
    }
};
