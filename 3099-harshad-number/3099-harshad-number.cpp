class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int t=x;
        if(x==0) {
            cout<<x;
            return 0;
        }

        int s=0;

        while(t>0) {
            int d=t%10;
            s+=d;
            t/=10;
        }
        if(x%s==0) return s;
        else return -1;
        
    }
};