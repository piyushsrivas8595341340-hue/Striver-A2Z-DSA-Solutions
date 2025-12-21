#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the value of number : ";
    cin>>num;

    cout<<"All divisors of "<<num<<" are : ";
    for (int i = 1; i <= num; i++)
    {
       if (num%i == 0)
       {
         cout<<i<<" ";
       } 
    }
    return 0;
}
