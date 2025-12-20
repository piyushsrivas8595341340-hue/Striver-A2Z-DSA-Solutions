#include<iostream>
using namespace std;

int Prime(int n){
    if (n<=1) return 0;
    if (n==2) return 1;
    if (n%2 == 0) return 0;

    for (int i = 3; i*i <= n; i+=2)
    {
        if (n%i == 0) return 0;
    }
    return 1;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

        if (Prime(num) == 1)
        {
            cout<<"Yes, "<<num<<" is a prime number."<<endl;
        } 
        
        else 
        {
            cout<<"No, "<<num<<" is not a prime number."<<endl;
        } 
       
    return 0;
}