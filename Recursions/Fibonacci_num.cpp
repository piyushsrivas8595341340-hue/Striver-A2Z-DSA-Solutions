#include<iostream>
using namespace std;

int fib(int n){
    if (n<=2){ 
    return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int n;
    cout<<"Enter the position of fibonacci series : ";
    cin>>n;
    cout<<"The number at position "<<n<<" of fibonacci series is : "<<fib(n);

    return 0;
}