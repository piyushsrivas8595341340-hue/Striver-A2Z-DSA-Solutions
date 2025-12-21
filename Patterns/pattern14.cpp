#include<iostream>
using namespace std;

void print(){
    for (int i = 0; i < 5; i++)
    {
        char n = 'A';
        for (int j = 0; j <= i; j++)
        {
           cout<<n<<" ";
           n++;
        }
       cout<<endl; 
    }
    
}

int main(){
    print();

    return 0;
}
/*

A
A B
A B C
A B C D
A B C D E

*/