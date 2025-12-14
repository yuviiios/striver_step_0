class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        int i=2;
         if (k <= 2) return k;
        for(int j=2;j<k;j++)
        if(nums[j]!=nums[i-2]) {
            nums[i++]=nums[j];
          
        }
        
        return i;
    }
};


       

