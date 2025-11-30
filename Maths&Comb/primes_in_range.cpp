#include<iostream>
#include<vector>
using namespace std;

vector<int> sieveOfEratosthenes(int n){
    vector<bool> isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    vector<int> primes;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    vector<int> primes=sieveOfEratosthenes(n);
    cout<<"Prime numbers upto "<<n<<" are: "<<endl;
    for(int prime : primes){
        cout<<prime<<" ";
    }
    cout<<endl;
    return 0;
}

/*=================================================
Enter the range: 100
Prime numbers upto 100 are: 
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
===================================================*/