class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //already sorted "non decreasing order"
        int i=0;
        int j = numbers.size()-1;
        while(i<j) {
            int sum = numbers[i]+numbers[j];
            if(sum==target)return {i+1,j+1}; //1 based indexing thats why we added +1
            else if(sum>target)j--;
            else i++;
        }

        return {};
        
    }
};