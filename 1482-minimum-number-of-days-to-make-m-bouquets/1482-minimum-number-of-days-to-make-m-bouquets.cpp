class Solution {
public:

    bool possible(vector<int>& bloomDay,int m,int k,int day) {
        int cnt=0;
        int nofB=0;
        for(int i=0;i<bloomDay.size();i++) {
            if(bloomDay[i]<=day) {
                cnt++;
            }
            else {
                nofB+=(cnt/k);  //boq required
                cnt=0; //resets the cnt to 0
            }
        }

        nofB+=(cnt/k);
        return nofB>=m;

    }



    int minDays(vector<int>& bloomDay, int m, int k) {   
        long long need = 1LL*m*k;
        if(need>bloomDay.size()) return -1;

        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;

        while(l<=h) {
            int mid = l+(h-l)/2; //for overflow values 

            if(possible(bloomDay,m,k,mid)) {
                ans=mid;
                h=mid-1;
            }
            else {
                l=mid+1;
            }
        }

        return ans;



        
    }
};