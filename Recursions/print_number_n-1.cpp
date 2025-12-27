#include<iostream>
using namespace std;

void print(int current, int n){
    if (current < n) return;
    cout<<current<<" ";
    print(current-1, n);
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    print(num,1);
    return 0;
}