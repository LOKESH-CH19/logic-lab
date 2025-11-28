#include <iostream>
#include<string>
using namespace std;
void printPattern(int n) {
    for(int i=n;i>=1;i--){
        for(int j=1;j<=2*(n-i);j++){
          cout<<" ";
        }
      for(int j=1;j<=(2*i-1);j++){
        cout<<"* ";
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

/*=================================================

Enter number of rows: 5
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        * 
=========================================================*/