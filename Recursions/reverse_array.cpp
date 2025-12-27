#include<iostream>
using namespace std;

void printForward(int current, int n){
    if (current>n) return;
    cout<<current;
    if (current<n) cout<<",";
    printForward (current+1, n);
}

void printReverse(int current, int n){
    if (current<n) return;
    cout<<current;
    if (current>n) cout<<",";
    printReverse (current-1,n);
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"The forward array is : [";
    printForward(1,num);
    cout<<"]";
    cout<<endl;

    cout<<"The reverse array is : [";
    printReverse(num,1);
    cout<<"]";
    
    return 0;
}