#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i <= 5; i++)
    {
      int x;
      if ((i/2)*2 == i)
      {
        x= 0;
      }
      else
      {
        x=1;
      }
      
      int n=x;
      for (int j = 1; j <= i; j++)
      {
          cout<<n<<" ";
          n=1-n;
      }
      cout<<endl;
    } 
}

int main(){
    print();
    return 0;
}