#include<bits/stdc++.h>
using namespace std;

void Rotate(vector<int>& arr, int n){
    int temp[n];
    for (int j = 0; j < n-1; j++)
    {
        temp[j] = arr[j+1];
    }
    temp[n-1] = arr[0];

    cout<<"Array after rotating one place in left : ";
    for (int k = 0; k < n; k++)
    {
       cout<<temp[k]<<" ";
    }   
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    Rotate(arr,n);

    return 0;
}