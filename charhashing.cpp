#include <bits/stdc++.h>
using namespace std;

int main() {

//     Humne string use kiya kyunki:

// Usme har character ko array ki tarah access kar sakte hain
    string s;
    cin>>s;

//     Agar hum char use karte (yaani C-style string), toh array lena padta.
// Usmein manually sab kuch handle karna padta — jaise input lena, length check karna, loop chalana, etc.

    //pre-compute for all characters
    int hash[256]={0}; //for lowercase take 26
    for(int i=0;i<s.size();i++) {
        hash[s[i]]++; //hash[s[i]-'a']++ for lower case
    }

    int q;
    cin>>q;
    while(q--) {
        char c;
        cin>>c;
        cout<<hash[c]<<endl;//hash[c-'a'] for lower case
    }

    return 0;

}
