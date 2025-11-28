#include <iostream>
using namespace std;
void printPattern(int n) {
    for(int i=1;i<=n;i++){
      for(int j=1;j<=(n-i+1);j++){
        cout<<"*"<<" ";
      }
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

/*================================================================
Enter number of rows: 5
* * * * * 
* * * *
* * *
* *
*
==================================================================*/