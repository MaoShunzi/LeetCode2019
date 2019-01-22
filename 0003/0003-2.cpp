class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s==""||s.length()==0) 
            return 0;
        if(s.length()==1)
            return 1;
        int freq[256]={0};
        int left=0;
        int right=0;
        int res=0;
        int len=s.length();
        freq[s[left]]=1;
        while(left<len) {
            if(right+1<len&&freq[s[right+1]]==0) {
                right++;
                freq[s[right]]++;
            }
            else {
                freq[s[left]]--;
                left++;
            }
            res=max(res,(right-left+1));
        }
        return res;
    }
};
