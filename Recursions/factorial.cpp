#include<iostream>
using namespace std;

long long factorial(int n1){
    if (n1==0  || n1==1) 
    return 1;
    else 
    return n1*factorial(n1-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Factoral of "<<n<<" : "<<factorial(n);
    
    return 0;
}