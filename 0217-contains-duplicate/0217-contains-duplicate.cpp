class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> f;
        for(auto it:nums) {
            f[it]++;
        }
        for(int i=0;i<nums.size();i++) {
            if(f[nums[i]]>=2)return true;
        }

        return false;
    }
};