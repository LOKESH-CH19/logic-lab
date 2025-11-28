#include <iostream>
using namespace std;
void printPattern(int n) {
    int temp=1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<temp<<" ";
        temp++;
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
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
========================================================*/