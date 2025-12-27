#include<iostream>
using namespace std;

void printName(int N)
{
    if (N==0) return;
    cout<<"Piyush ";
    printName(N-1);
}

int main(){
    int N;
    cout<<"Enter a number by which no. of times displays the name : ";
    cin>>N;

    printName(N);
    return 0;
}