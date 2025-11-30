#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int lcm(int a,int b){
    cout<<"gcd is "<<__gcd(a,b)<<endl;
    return (a*b)/__gcd(a,b);
}   

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm(a,b)<<endl;
    return 0;
}