class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int> f;
        for(int i=0;i<n;i++) {
            f[s[i]]++;
        }
        vector<pair<int,char>> v;

        for(auto it:f) {
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());

        string ans;

        for(auto it:v) {
            for(int i=0;i<it.first;i++) {
                ans+=it.second;
            }
         }

         return ans;





        
    }
};