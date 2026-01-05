#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int toDec(const int &bin){
    int dec=0;
    int base=1;
    int bin_copy=bin;
    while(bin_copy>0){
        int last_digit=bin_copy%10;
        dec+=last_digit*base;
        base=base*2;
        bin_copy=bin_copy/10;
    }
    return dec;
}
int main(){
    int bin;
    cout<<"Enter a binary number: ";
    cin>>bin;
    cout<<"Decimal representation of "<<bin<<" is: "<<toDec(bin)<<endl;
    
}
/*===========================================
Enter a binary number: 1010 
Decimal representation of 1010 is: 10
================================================*/