class Solution {
public:
         bool binarySearch(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h) {
            int mid=(l+h)/2;
            if(nums[mid]==target)return true;
            else if(target>nums[mid]) {
                l=mid+1;
            }
            else {
                h=mid-1;
            }

        }

        return false;
    }

    

    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n=matrix.size();
        for(int i=0;i<n;i++) {
            // int ind=binarySearch(matrix[i],target); 
            if(binarySearch(matrix[i],target)) {
                return true; 
             } 
        }
        return false;

    }
};