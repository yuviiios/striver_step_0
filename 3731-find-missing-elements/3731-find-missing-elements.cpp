class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;

        for(int i=0;i<nums.size()-1;i++) {
            int c=nums[i];
            int n=nums[i+1];

            if(n>c+1) {
                for(int i=c+1;i<n;i++) {
                   ans.push_back(i);
                    
                }
            }
        }
        return ans;

        
    }
};