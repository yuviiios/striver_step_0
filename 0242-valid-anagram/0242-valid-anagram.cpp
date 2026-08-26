class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char,int> f;
        unordered_map<char,int> k;
        for(auto ch:s) {
            f[ch]++;
        }
        
        for(auto ch:t) {
            k[ch]++;
        }

        if(f==k)return true;
        else return false;
    }
};