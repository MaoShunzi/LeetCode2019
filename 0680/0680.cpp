class Solution {
public:
    bool validPalindrome(string s) {
        long long i=0;
        long long j=s.length()-1;
        long long cout=0;
        while(i<j) {
            if(s[i]==s[j]) {
                i++;
                j--;
            }
            else {
                if((i+1)==j) {
                    cout++;
                    break;
                }
                else if(s[i+1]==s[j]||s[i]==s[j-1]) {
                    cout++;
                    if(s[i+1]==s[j]&&s[i+2]==s[j-1]) {
                        i++;
                    }
                    else if(s[i]==s[j-1]&&s[i+1]==s[j-2]) {
                        j--;
                    }
                    else {
                        return false;
                    }
                }
                else {
                    return false;
                }
            }
        }
        if(cout>1) {
            return false;
        }
        return true;
    }
};
