#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i < 5; i++)
    {     
        for (int j = 1; j <= i; j++)
        {
            cout<<j;    
        }
        for (int j = 1; j <= 8-(2*i); j++)
        {
            cout<<" ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }      
        cout<<endl;
    }   
}

int main(){
    print();
    return 0;
}
/*

1      1      [1,6,1]
12    21      [2,4,2]
123  321      [3,2,3]
12344321      [4,0,4]

*/