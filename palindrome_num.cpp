#include<iostream>
using namespace std;

int main(){
    int num;
    int revNum=0;
    cout<<"Enter the number : ";
    cin>>num;

    int originalNum = num;

    while(num>0)
    {
    int digit = num%10;
    revNum = revNum*10 + digit;
    num = num/10;
    }

    if (originalNum == revNum)
    {
        cout<<"Yes, It is a palindrome number.";
    }

    else 
    {
        cout<<"No, It is not a palindrome number.";
    }
    
    return 0;
}