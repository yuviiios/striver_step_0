class Solution {
public:
    bool isalnum(char c) {
        return ((c>='0' && c<='9')||(tolower(c)>='a'&&tolower(c)<='z'));

    }
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r) {
            if(!isalnum(s[l])) {
                l++;continue;
            }
            if(!isalnum(s[r])) {
                r--;continue;
            }
            if(tolower(s[l])!=tolower(s[r])) return false;

            l++;
            r--;
        }

        return true;
        
    }
};