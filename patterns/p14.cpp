#include <iostream>
using namespace std;
void printPattern(int n) {
    for(int i=1;i<=n;i++){
      for(char j='A';j<='A'+i-1;j++){
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
A 
A B
A B C
A B C D
A B C D E
========================================================*/