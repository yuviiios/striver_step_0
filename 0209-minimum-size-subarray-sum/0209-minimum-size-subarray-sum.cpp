class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,s=0,ml=INT_MAX;
        int n=nums.size();
        while(r<n) {
            s+=nums[r];
            while(s>=target) {
                ml=min(ml,r-l+1);
                s-=nums[l];
                l++;
            }
            r++;
        }

        if(ml==INT_MAX) return 0;

        return ml;
        
    }
};