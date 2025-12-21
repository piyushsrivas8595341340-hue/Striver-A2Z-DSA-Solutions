#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int originalNum = num;
    int count = 0;
    int temp = num;
    while (temp!=0)
    {
        count++;
        temp=temp/10;
    }

    int sum = 0;
    temp=num;
    while (temp>0)
    {
        int digit = temp%10;
        sum += (int)round(pow(digit, count));
        temp = temp/10;
    }
   
    if (originalNum == sum)
    {
       cout<<"Yes, it is an armstrong number";
    }
    
    else
    {
        cout<<"No, it is not an armstrong number";
    }

    return 0;
}
