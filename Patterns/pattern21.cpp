#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j <= 3-i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= (2*i)-2; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 3-i; j++)
        {
            cout<<"*";
        }
      cout<<endl;  
    }
    for (int i = 3; i < 5; i++)
    {
        for (int j = 1; j <= i-2; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 8-(2*i); j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i-2; j++)
        {
            cout<<"*";
        }
      cout<<endl; 
    }
}

int main(){
    print();
    return 0;
}
/*
   [stars,space,stars]
****    [2,0,2]
*  *    [1,2,1]
*  *    [1,2,1]
****    [2,0,2]

*/