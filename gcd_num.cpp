#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    for (int i = min(num1, num2); i > 0; i--)
    {
        if (num1%i == 0 && num2%i == 0)
        {
            return i;
        }
        
    }   
}

int main(){
    int num1, num2;
    cout<<"Enter the value of first number : ";
    cin>>num1;
    cout<<"Enter the value of second number : ";
    cin>>num2;

    int GCD = gcd(num1, num2);
    cout<<"GCD of "<<num1<<" and "<<num2<<" is : "<<GCD<<endl;

 
    return 0;
}