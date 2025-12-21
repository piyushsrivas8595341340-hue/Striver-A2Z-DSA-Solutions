#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num;
    int revNum = 0;
    cout<<"Enter the number "<<setw(20)<<": ";
    cin>>num;
    cout<<"Your given number is "<<setw(16)<<": "<<num<<endl;
    
    while (num>0)
    {
        int digit = num%10;                  //using modulo to extract last digit
        revNum = revNum*10 + digit;          //Building reverse number
        num = num/10;                        //Removing last digit
    }
    cout<<"The reverse of the given number is : "<<revNum<<endl;

    return 0;
}
