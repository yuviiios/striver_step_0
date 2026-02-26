class Solution {
public:
    bool binarySearch(vector<int>& nums, int target) {
        int n= nums.size();
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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++) {
            if(matrix[i][0]<=target && target<=matrix[i][m-1]) {
                return binarySearch(matrix[i],target);
            }
        }
        
        return false;



        
        
    }
};