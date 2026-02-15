class Solution {
public:
    int mySqrt(int x) {
        int l=1,h=x;
        while(l<=h) {
            long long mid=l+(h-l)/2; //in the case of overflow always take mid=l+(h-l)/2
            long long value=(mid*mid);
            if(value<=x) {
                l=mid+1;
            }
            else {
                h=mid-1;
            }

        }
        return h;
        
    }
};