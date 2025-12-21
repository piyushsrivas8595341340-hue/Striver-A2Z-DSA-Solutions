#include<iostream>
using namespace std;

void print(){
    for (int i = 1; i <= 5; i++)
    {   
        int n=1;
        for (int j = i; j <= 5; j++)
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

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/