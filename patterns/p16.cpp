#include <iostream>
using namespace std;
void printPattern(int n) {
    for(int i=1;i<=n;i++){
        int k=n-i;
      for(char j='A'+k;j<='A'+n-1;j++){
        cout<<j<<" ";
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
E 
D E
C D E
B C D E
A B C D E
========================================================*/