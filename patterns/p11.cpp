#include <iostream>
using namespace std;
void printPattern(int n) {
    int temp=0;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        if(temp==1){
          cout<<0<<" ";
          temp=0;
        }
        else{
          cout<<1<<" ";
          temp=1;
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
1 
0 1
0 1 0
1 0 1 0
1 0 1 0 1
========================================================*/