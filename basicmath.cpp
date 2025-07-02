#include <bits/stdc++.h>
using namespace std;

void extractnum(int n) {
    cout<<"The digits are: "<<endl;
    while(n>0) {
        int digit=n%10;
        cout<<digit<<"";
        n=n/10;
    }

}
//T(C)= O(log10(N)) whenever there is divison by 10!!!!

//NOTE: if the no. of iterations is based on divison T.C will be logathrimic


int main() {
    int n;
    cin>>n;
    extractnum(n);
    return 0;
}