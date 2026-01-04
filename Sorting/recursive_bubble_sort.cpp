#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    if (n==1)
    {
        return;
    }
    for (int j = 0; j <= n-2; j++)
    {
        if (arr[j]>arr[j+1])
        {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }   
    }
    bubble_sort(arr,n-1);
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,n);
    cout<<"The array in non-descending order : ";
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    return 0;
}