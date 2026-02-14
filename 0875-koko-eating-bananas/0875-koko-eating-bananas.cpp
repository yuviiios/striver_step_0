class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int m=*max_element(piles.begin(),piles.end());
        
        while(l<=m) {
            int mid=(l+m)/2;
            long long totalH=0;
            for(int i=0;i<piles.size();i++) {
                totalH+=(piles[i]+mid-1)/mid;
            }
            if(totalH>h) {
                l=mid+1;
            }
            else m=mid-1;
        }

        return l;
        
        
    }
};