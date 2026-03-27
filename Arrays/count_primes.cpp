#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        // bool divisor(int x){
        //     if(x <= 1) return false;
        //     for(int i=2;i*i<=x;i++){
        //         if(x%i==0) return false;
        //     }
        //     return true;
        // }
        // int countPrimes(int n) {
        //     if(n==0 || n==1) return 0;
        //     int count=0;
        //     for(int i=2;i<n;i++){
        //         if(divisor(i)) count++;
        //     }
        //     return count;
    //}
    
            int countPrimes(int n){
            if(n<=2) return 0;
            vector<bool> isPrime(n,true);
            isPrime[0]=isPrime[1]=false;
            for(int i=2;i*i<n;i++){
                if(isPrime[i]){
                    for(int j=i*i;j<n; j+=i){
                        isPrime[j]=false;
                    }
                }
            }
           
            int cnt=0;
            for(int i=2;i<n;i++){
                if(isPrime[i]) cnt++;
            }
            return cnt;
        }
    };

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    Solution x;
    cout<<"Count of Prime numbers less than "<<num<<": "<<x.countPrimes(num);
    
    return 0;
}