#include<iostream>;
#include<cmath>
using namespace std;
 int sqrt(int n){
    int low=1;
    int high=n;
    int res=1;
    while(low<=high){
        int mid=(high+low)/2;
        if(mid*mid==n)
            return mid;
        else if(mid*mid<n){
            res=mid;
            low=mid+1;
        }
        else
            high=mid-1;//time complexity O(log n) space O(1)

        return res;
        //return int(sqrt(n)); //using inbuilt function time complexity O(log n) space O(1)
        //int res=exp(0.5*log(n));
        //if((res+1)*(res+1)<=n)
        //    return res+1;
        //return res; //using log and exp time complexity O(1) space O(1)
    }
 }
    int main(){
        int n;
        cout<<"Enter a number: ";
        cin>>n;
        cout<<"Square root of "<<n<<" is: "<<sqrt(n)<<endl;
        return 0;
    }