#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the elements : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    vector<int> temp = arr;
    sort(arr.begin(),arr.end());
    if (arr == temp)
    {
        cout<<"Yes, It is a sorted array.";
    }
    else
    {
        cout<<"No, It is not a sorted array.";
    }
     
    return 0;
}