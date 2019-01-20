class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j=sqrt(c);
        while(i<=j) {
            long long temp=i*i+j*j;
            if(temp==c) {
                return true;
            }
            else if(temp>c) {
                j--;
            }
            else {
                i++;
            }
        }
        return false;
    }
};
