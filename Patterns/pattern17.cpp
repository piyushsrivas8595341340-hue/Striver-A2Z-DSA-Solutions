#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i <= 4; i++)
    {
        char n = 'A';
        for (int j = 1; j <= 4-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<n++;
        }
        n--;
        for (int j = i-1; j >= 1; j--)
        {  
            cout<<--n;
        }
        for (int j = 1; j <= 4-i; j++)
        {
            cout<<" ";
        }
        cout<<endl; 
    }   
}

int main(){
    print();

    return 0;
}
/*

   A       [3,1,0,3]
  ABA      [2,2,1,2]
 ABCBA     [1,3,2,1]
ABCDCBA    [0,4,3,0]

*/