class Solution {
public:
    string reverseWords(string s) {
        int l=0;
        for(int i=0;i<=s.length();i++) {
            if(s[i]==' '||i==s.length()) {
                int r=i-1;
                while(l<r) {
                    swap(s[l],s[r]);
                    l++,r--;
                    

                }

                l=i+1;
            }
           
        }

        return s;
        
        
        


    }
};