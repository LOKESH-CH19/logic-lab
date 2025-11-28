#include <iostream>
#include<string>
using namespace std;
void printPattern(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
          cout<<" ";
        }
      for(int j=1;j<=(2*i-1);j++){
        cout<<"*";
      }
      // cout<<string((n-i),' ');
    // cout<<string((2*i-1),'*');instead this we use for loop because strings have same complexity and high space complexity compared to for loop
      cout<<endl;
    }
}
int main() 
{
    int t;
    cout<<"Enter number of rows: ";
    cin>>t;
    printPattern(t);
    return 0;
}

/*======================================
Enter number of rows: 5
    *
   ***
  *****
 *******
*********
=====================================*/