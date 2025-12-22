#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 11-(2*i); j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= i-1; j++)
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
       [space, stars, space]
*********    [0,9,0]
 *******     [1,7,1]
  *****      [2,5,2]
   ***       [3,3,3]
    *        [4,1,4]

*/