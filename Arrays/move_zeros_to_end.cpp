#include<bits/stdc++.h>
using namespace std;

void zeros(vector<int>& arr){
    int n = arr.size();
    int position = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[position++] = arr[i];
        }  
    }
    while (position < n)
    {
        arr[position++] = 0;
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
    
    zeros(arr);
    cout<<"Array after moving zeros to end : ";
    for (int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}