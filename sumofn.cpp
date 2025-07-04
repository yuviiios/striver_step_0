#include <iostream>
using namespace std;

//paramterised way

void parasum(int i,int sum) {
    if(i<1) {
        cout<<sum;
        return;
    }

    parasum(i-1,sum+i);
}
//functioned way

int funsum(int n) {
    if(n==0) return 0;
    return n+funsum(n-1);
}

//factorial
int fact(int n) {
    if(n==0) return 1; //here The factorial of 0 is defined as 1 (0! = 1), so the recursion stops here.
    
    return n*fact(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}