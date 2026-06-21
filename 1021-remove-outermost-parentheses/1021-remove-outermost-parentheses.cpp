class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                cnt++;
                if(cnt>1) {
                    res+='(';
                }
            }
            else {
                cnt--;
                if(cnt>0) {
                    res+=')';
                }
            }
        }
        return res;

    }
};