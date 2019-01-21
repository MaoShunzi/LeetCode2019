class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j) {
            if(s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='O'||s[i]=='E'||s[i]=='I'||s[i]=='U') {
                if(s[j]=='a'||s[j]=='o'||s[j]=='e'||s[j]=='i'||s[j]=='u'||s[j]=='A'||s[j]=='O'||s[j]=='E'||s[j]=='I'||s[j]=='U') {
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }
            else {
                i++;
            }
            
        }
        return s;
    }
};
