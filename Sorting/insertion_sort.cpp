#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            cout<<"checking"<<endl;   //Analyzing time complexity
        }    
    }    
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
    
    insertion_sort(arr, n);
    cout<<"The array in non-descending order : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}