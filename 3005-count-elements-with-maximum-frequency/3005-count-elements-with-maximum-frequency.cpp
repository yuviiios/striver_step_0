class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int m=INT_MIN;
        int ans=0;
        unordered_map<int,int> f;
        for(auto it:nums) {
            f[it]++;
        }

       for(auto it:f) {
        if(it.second>m) {
            m=it.second;
        }
       }
          for(int i=0;i<nums.size();i++) {
            if(f[nums[i]]==m) {
                ans++;
            }
          }

        return ans;


        
    }
};