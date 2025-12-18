class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos,neg;
        for(int i=0;i<n;i++) {
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        for(int i=0;i<n/2;i++) { //n/2 interation for pos and neg vector
            nums[2*i]=pos[i]; //iterates upto n/2 from pos vector stores into even nums
            nums[2*i+1]=neg[i];
        }

        return nums;
    }
};