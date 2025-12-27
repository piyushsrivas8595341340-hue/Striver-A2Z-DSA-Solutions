#include<iostream>
using namespace std;

int print(int current, int n){
    if (current>n) return 0;
    cout<<current<<" ";
    return current + print(current+1, n);
}  

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"The numbers are : ";
    int sum = print(1,num);
    cout<<endl;
    cout<<"Sum of these numbers is : "<<sum<<endl;;
    return 0;
}