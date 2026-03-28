#include<iostream>
using namespace std;

int countNumberOfUniqueDigits(int n){
    if (n==0)
    {
        return 1;
    }
    int ans=10;
    int unique=9;
    int available=9;
    while (n>1 && available>0)
    {
        unique=unique*available;
        ans = ans+unique;
        available--;
        n--;
    }
    return ans;
}

int main(){
    int x;
    cout<<"Enter the value of n: ";
    cin>>x;
    cout<<"The count of number of unique digits for n="<<x<<" is: "<<countNumberOfUniqueDigits(x);
    
    return 0;
}