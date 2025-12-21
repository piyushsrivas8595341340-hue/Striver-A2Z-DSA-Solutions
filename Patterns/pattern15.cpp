#include<iostream>
using namespace std;

void print(){
    for (int i = 0; i <= 5; i++)
    {
       char n = 'A';
       for (int j = i; j <= 4; j++)
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

A B C D E
A B C D
A B C
A B 
A

*/