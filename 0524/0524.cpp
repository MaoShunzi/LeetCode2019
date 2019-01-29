class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        int len[1000]={0}; 
        for(int k=0;k<d.size();k++) {
            int i=0;
            int j=s.length()-1;
            int m=0,n=d[k].length()-1;
            while(m<d[k].length()&&n>=m) {
                if(s[i]==d[k][m]) {
                    i++;
                    m++;
                }
                else if(s[j]==d[k][n]) {
                    j--;
                    n--;
                }
                else {
                    if(i>j+1)
                        break;
                    i++;
                    j--;
                }
            }
            if(i<=j+1) {
                len[k]=d[k].length();
            }
        }
        int maxlen=len[0];
        int max=0;
        double temp[1000]={0};
        for(int l=0;l<1000;l++) {
            if(len[l]>maxlen) {
                maxlen=len[l];
                max=l;
            }
        }
        if(maxlen<=0)
            return "";
        for(int l=0;l<d.size();l++) {
            if(len[l]==maxlen) {
                cout<<l<<" ";
                double p=0.1;
                temp[l]=1;
                for(int c=0;c<d[l].length();c++) {
                    temp[l]=temp[l]+(d[l][c]-'a')*p;
                    p=p*0.1;
                }
                cout<<temp[l]<<endl;
            }
        }
        double min=25000;
        int minid=0;
        for(int l=0;l<1000;l++) {
            if(temp[l]!=0&&temp[l]<min) {
                min=temp[l];
                minid=l;
            }
        }
        if(maxlen>0) {
            return d[minid];
        }
        return "";
    }
};
