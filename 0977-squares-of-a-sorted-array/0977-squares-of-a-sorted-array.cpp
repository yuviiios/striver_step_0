class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=n-1;
        vector<int> res(n);
        int ind=n-1;
        while(i<=j) {
            if(abs(nums[i])>abs(nums[j])) {
                res[ind--]=nums[i]*nums[i];
                i++;
            }

            else {
                res[ind--]=nums[j]*nums[j];
                j--;
            }
        }
        return res;
        
    }
};