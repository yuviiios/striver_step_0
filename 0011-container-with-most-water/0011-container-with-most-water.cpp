class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxW=0;
        int lp=0,rp=n-1;
       while(lp<rp) {
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        int currW=w*h;
        maxW=max(currW,maxW);
        height[lp]<height[rp]?lp++:rp--;
       }
        return maxW;
        
    }
};