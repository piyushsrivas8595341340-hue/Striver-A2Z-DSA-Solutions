#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i <= 5; i++)
    {
       for (int j = i; j <= 5; j++)
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

*****
****
***
**
*

*/