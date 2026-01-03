#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for (int i = n-1; i >= 0; i--)
    {
        int no_swap = 0;
        for (int j = 0; j <= i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                no_swap = 1;
            }   
        } 

        if(no_swap == 0){
        break; 

        }
        //Analyzing time complexity:
        cout<<"checking\n";   
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
    
    bubble_sort(arr,n);
    cout<<"The array in non-descending order : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}