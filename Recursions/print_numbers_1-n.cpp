#include<iostream>
using namespace std;

void print(int current, int n){
    if(current > n) return;
    cout<<current<<" ";
    print(current+1, n);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    print(1,n);
    return 0;
}
