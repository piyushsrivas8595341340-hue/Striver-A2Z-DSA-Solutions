#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= 6-i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= (2*i)-2; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 6-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 6; i < 11; i++)
    {
        for (int j = 1; j <= i-5; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 20-(2*i); j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i-5; j++)
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
**********     [5,0,5]
****  ****     [4,2,4]
***    ***     [3,4,3]
**      **     [2,6,2]
*        *     [1,8,1]
*        *     [1,8,1]
**      **     [2,6,2]
***    ***     [3,4,3]
****  ****     [4,2,4]
**********     [5,0,5]

*/