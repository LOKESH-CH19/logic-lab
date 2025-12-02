#include<iostream>
#include<cmath>
using namespace std;
int ncr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res+=log(n-i)-log(i+1);
        return round(exp(res));
    }
    }
int main(){
    int n,r;
    cout<<"enter n aand r : ";
    cin>>n>>r;
    cout<<"ncr ="<<ncr(n,min(r,n-r))<<endl;
    return 0;
}
/*============================================
enter n aand r : 10 4
ncr =20
=============================================*/