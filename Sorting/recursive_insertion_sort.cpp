#include<iostream>
using namespace std;

void insertion_sort(int arr[], int i, int n){
    if (i==n)
    {
        return;
    }
    int j=i;
    while (j>0 && arr[j-1]>arr[j])
    {
        int temp = arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertion_sort(arr,i+1,n);
}

int main(){
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    insertion_sort(arr,0,n);
    cout<<"The array in non-descending order : ";
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    return 0;
}