#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    int n1;
    cout<<"Enter the size of the array 1 : ";
    cin>>n1;
    vector<int> arr1(n1);
    cout<<"Enter the elements of the array 1 : ";
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter the size of the array 2 : ";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"Enter the elements of the array 2 : ";
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }

    set<int> s;
    for(int x : arr1) s.insert(x);
    for(int x : arr2) s.insert(x);

    cout<<"The union of two arrays : ";
    for ( int x : s)
    {
        cout<<x<<" ";
    }
    
    return 0;
}