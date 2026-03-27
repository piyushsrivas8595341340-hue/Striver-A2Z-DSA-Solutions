#include<iostream>
using namespace std;

class Solution {
    public:
        bool isHappy(int n) {
            int sum=0;
            while(n!=1 && n!=4){
            sum=0;
            while(n>0){
            int digit = n%10;
            sum += digit*digit;
            n /= 10;
           }
           n=sum; 
        }
           if(n==1) return true;
           else return false;
        }
    };

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    Solution x;
    if (x.isHappy(num))
    {
        cout<<"Yes, It is a happy number.";
    }
    else
    {
        cout<<"No, It is not a happy number.";
    }
    
    return 0;
}