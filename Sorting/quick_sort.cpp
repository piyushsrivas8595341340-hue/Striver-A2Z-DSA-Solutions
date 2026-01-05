#include<bits/stdc++.h>
using namespace std;

class Sort{
    public:
      void quick_sort(vector<int>& arr, int low, int high){
        if (low<high)
        {
        int index = partition(arr, low, high);
        quick_sort(arr,low,index -1);
        quick_sort(arr,index+1,high);
        }
      }

      int partition(vector<int>& arr, int low, int high){
        int pivot = arr[high];
        int i = low-1;
        for (int j = low; j < high; j++)
        {
            if (arr[j]<=pivot)
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
          swap(arr[i+1], arr[high]);
          return i+1; 
      }

};

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
    Sort X;
    X.quick_sort(arr,0,n-1);
    cout<<"The array in non-descending order : ";
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
   
    return 0;
}