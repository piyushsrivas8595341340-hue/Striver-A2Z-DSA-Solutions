#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i < 8; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
           int top = i-1;
           int left = j-1;
           int right = 7-j;
           int bottom = 7-i;

           cout<<(4- min(min(top, bottom), min(left,right)))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    print();
    return 0;
}
/*

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/