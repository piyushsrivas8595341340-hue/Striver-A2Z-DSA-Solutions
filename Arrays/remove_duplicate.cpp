#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    set<int> s(arr.begin(), arr.end());
    vector<int> New(s.begin(), s.end());
    cout<<"Array after removing the duplicates : ";
    for (int array : New)
    {
        cout<<array<<" ";
    }
    
    return 0;
}