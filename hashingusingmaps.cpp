#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i]; //map stores value in sorted order  
    }

    //precompute
    map<int,int>mpp;     
    // map<int, int> ka matlab: key → number, value → frequency (kitni baar aaya)
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++; 
    }

    int q;
    cin>>q;
    while(q--) {
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    return 0;

}