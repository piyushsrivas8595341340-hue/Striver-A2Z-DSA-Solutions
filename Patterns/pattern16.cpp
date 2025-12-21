#include<iostream>
using namespace std;

void print(){
    for (int i = 0; i <= 4; i++)
    {
        char n = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
          cout<<n<<" ";  
        }
      cout<<endl; 
    }   
}

int main(){
    print();

    return 0;
}