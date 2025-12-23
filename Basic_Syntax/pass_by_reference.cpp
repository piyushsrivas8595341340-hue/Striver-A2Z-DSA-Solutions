#include<iostream>
using namespace std;

void modify(int &a){
    a=a+15;
}

int main(){
    int x=5;
    modify(x);
    cout<<"The value of x  is : "<<x<<endl;
    return 0;
}