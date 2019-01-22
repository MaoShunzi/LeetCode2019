class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lens;
        if(s==""||s.length()==0)
            return 0;
        for(int i=0;i<s.length();i++) {
            string str="";
            str=str+s[i];
            bool repeat=false;
            for(int j=i+1;j<s.length()&&repeat==false;j++) {
                int len=str.length();
                for(int k=0;k<len;k++) {
                    if(s[j]==str[k]) {
                        repeat=true;
                        break;
                    }
                }
                if(repeat==false) {
                    str=str+s[j];
                }
            }
            lens.push_back(str.length());
        }
        if(lens.size()!=0) {
            return *max_element(lens.begin(),lens.end()); 
        }
        return 1;
    }
};
