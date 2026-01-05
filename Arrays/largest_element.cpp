#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr, int n){
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    } 
    return largest;  
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array : ";
    for (int j = 0; j < n; j++)
    {
        cin>>arr[j];
    }
    cout<<"The largest element of the array : "<<largestElement(arr,n)<<endl;
    return 0;
}
