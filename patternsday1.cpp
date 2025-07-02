#include <bits/stdc++.h>
using namespace std;

void print1(int n) {

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;

    }
}

void print3(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++){
            cout<<j<<"";
        }

        cout<<endl;

    }
}
void print4(int n) {

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++){
            cout<<i<<"";
        }

        cout<<endl;

    }
}

void print5(int n) {
    for(int i=1;i<n;i++) {
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }

        cout<<endl;

    }
}
void print6(int n) {
    for(int i=1;i<n;i++) {
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }

        cout<<endl;

    }
}

void print7(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i+1;j++){
            cout<<i<<"  ";
        }

        cout<<endl;

    }
}

void print8(int n ) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        
     for(int j=0;j<2*i+1;j++)   {
        cout<<"*";
     }
     for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }

        cout<<endl;
    }

}

void print9(int n ) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        
     for(int j=0;j<2*i+1;j++)   {
        cout<<j;
     }
     for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }

        cout<<endl;
    }

}


void print10(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++)  {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++) {
            cout<<"*";
        }
        for(int j=0;j<i;j++)  {
            cout<<" ";
        }
        cout<<endl;
    }
}


void print11(int n) {
    int start=1;
    for(int i=0;i<n;i++) {
        if(i%2==0) start=1;
        else start =0;
        for(int j=0;j<=i;j++) {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
        
    }
}


void pattern12(int n)
{
      // initial no. of spaces in row 1.
      int spaces = 2*(n-1);
      
      // Outer loop for the number of rows.
      for(int i=1;i<=n;i++){
          
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          // for printing spaces in each row
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          // for printing numbers in each row
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          
          // As soon as the numbers for each iteration are printed, we move to the
          // next row and give a line break otherwise all numbers
          // would get printed in 1 line.
          cout<<endl;
          
          // After each iteration nos. increase by 2, thus
          // spaces will decrement by 2.
          spaces-=2;
      }
}



void printstar13(int n) {
    int num=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<num<<"";
            num=num+1;

        }
        cout<< endl;
    }
}


void printstar14(int n) {

    for(int i=0;i<n;i++) {
        for(char w='A';w<='A'+i;w++)  {
            cout<<w<<" ";
        }
        cout<< endl;
    }
}

void printstar15(int n) {

    for(int i=0;i<n;i++) {
        for(char w='A';w<='A'+(n-i-1);w++)  {
            cout<<w<<" ";
        }
        cout<< endl;
    }
}

void printstar17(int n) {

    for(int i=0;i<n;i++) {
        char ch='A'+i;
        for(int j=0;j<=i;j++)  {
            cout<<ch<<" ";
        }
        cout<< endl;
    }
}

void printstar18(int n) {

    for(int i=0;i<n;i++) {
        char ch='A'+i;
        for(int j=0;j<=i;j++)  {
            cout<<ch<<" ";
        }
        cout<< endl;
    }
}

void printstar19(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;
        }

        // Print trailing spaces (optional here)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}


void printstar20(int n) {
    for(int i=0;i<n;i++) {
        for(char ch = 'E'-i; ch<='E';ch++) {
            cout<<ch<<" ";
        }

        cout<<endl;

     }

}


void pattern21(int n) {
    int inis=0;
    for(int i=0;i<n;i++) {
        for(int j=1;j<=n-i;j++) {
            cout<<"*";

        }

        for(int j=0;j<inis;j++) {
            cout<<" ";

        }
         for(int j=1;j<=n-i;j++) {
            cout<<"*";

        }

        inis+=2;
        cout<<endl;
    }
}


void printstar22(int n) {
    for(int i=0;i<2*n-1;i++) {
        for(int j=0;j<2*n-1;j++) {
            int top=i;
            int left =j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));

        }
        cout<<endl;
    }
}


int main() {
    int n;

    cin>>n;
    printstar22(n);


    
    
}