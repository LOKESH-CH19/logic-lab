#include <iostream>
#include<string>
using namespace std;
void printPattern(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
          cout<<" ";
        }
      for(char j='A';j<='A'+2*(i-1);j++){
        if(j<='A'+i-1){
            cout<<j;
        }
        else{
            cout<<char('A'+2*(i-1)- (j - 'A'));
        }
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


/*=======================================================
Enter number of rows: 5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
========================================================*/