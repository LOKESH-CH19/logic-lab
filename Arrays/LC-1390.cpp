class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        // long long int sum=0;
        // for(auto ele : nums){
        //     int count=2;
        //     int ind_sum=1+ele;
        //     for(int i=2;i<=sqrt(ele);i++){
        //         if(ele%i==0 && i*i!=ele){
        //             count+=2;
        //             ind_sum+=i+ele/i;
        //         }
        //         if(i*i==ele)
        //             count++;
        //     }
        //     if(count==4){
        //         cout<<ele<<endl;
        //         sum+=ind_sum;
        //     }
        // }
        // return sum;
        int sum=0;
        int max=*max_element(nums.begin(),nums.end());
        vector<bool> isprime(max+1,true);
        vector<int> primes;
        isprime[0]=false,isprime[1]=false;
        for(int i=2;i*i<=max;i++){
            if(isprime[i]){
                for(int j=i*i;j<=max;j+=i)
                    isprime[j]=false;
            }
        }
        for(int k=2;k<max+1;k++){
            if(isprime[k]){
                
                primes.push_back(k);
            }
        }
        for(auto ele:nums){
            int count=2;
            int ind_sum=0;
          
            int k=round(cbrt(ele));
            for(auto pr:primes){
                if(pr==k && pr*pr*pr==ele){
                    ind_sum+=1+k+k*k+ele;
                    sum+=ind_sum;
                    break;
                }         
                if(sqrt(ele)<=pr)
                    break;
                if(ele%pr==0){
                    int qu=ele/pr;
                    if(binary_search(primes.begin(),primes.end(),qu)){
                        count+=2;
                        ind_sum+=1+pr+qu+ele;
                        }
                    break;
                }
            }
            if(count==4)
                sum+=ind_sum;
            
        }
        return sum;
    }
};