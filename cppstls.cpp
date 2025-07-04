#include  <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(22);
    v.emplace_back(24);

     
    //for printing vector
    for(vector<int>::iterator it=v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" "<<endl;



    }

    //using auto 
    for(auto it = v.begin(); it!=v.end(); it++) {
        cout<<*(it)<<" "<<endl;

    }

    //for each loop

    for(auto it:v) {
        cout<<it<<" ";

    }

   
}