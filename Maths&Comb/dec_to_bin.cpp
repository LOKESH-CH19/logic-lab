#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
string toBin(int n){
    string res;
    while(n>0){
        res.push_back((n&1) + '0');
        n=n>>1;
    }
    reverse(res.begin(),res.end());
    return res;
    //int len =int(log2(n));
    //bitset<64>(n).to_string().substr(64-len-1);
}
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    cout<<"Binary representation of "<<n<<" is: "<<toBin(n)<<endl;
    
}