#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i < 6; i++)
    {
        char n = 'F' - i;
        for (int j = 1; j <= i; j++)
        {
            cout<<n++<<" ";
        }
        cout<<endl;
    }  
}

int main(){
    print();
    return 0;
}
/*

E
D E
C D E 
B C D E
A B C D E 

*/