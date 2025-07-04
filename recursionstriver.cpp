#include <iostream>
using namespace  std;

//Printing name N times 
//TIME COMPLEXITY O(n)

void printname(int i,int n,string name) {
    if(i>n) return;
    cout<<name<<endl;
    printname(i+1,n,name);
}

void printnum(int i,int n) {
    if(i>n) return ;
    cout<<i<<endl;
    printnum(i+1,n);
}

void printnum1(int i,int n) {
    if(i<1) return ;
    cout<<i<<endl;
    printnum1(i-1,n);
}

//Print 1 to N using backtracking 

void printback(int i, int n) {
    if(i<1) return ;
    printback(i-1,n);
    printf(i);
}


//Sum of first N natural nums
void natnum(int i, int sum) {
    if(i<1) {
        cout<<sum;
        return ;
    }

    natnum(i-1,sum+i)
}


int main() {
    // string name;

    int n;
    // cout<<"Apna naam daal: ";
    // cin>>name;
    cout<<"Number : ";
    cin>>n;
    // printnum1(n,n); for reverse number printing



    return 0;
}