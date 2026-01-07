#include<bits/stdc++.h>
using namespace std;

void Rotate(vector<int>& arr, int n){
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    k=k%n;
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[i]=arr[(i+k)%n];
    }

    cout<<"Array after rotating "<<k<<" places in left : ";
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
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