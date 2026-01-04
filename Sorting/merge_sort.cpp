#include<bits/stdc++.h>
using namespace std;

class Sort{
    public:
      void merge(vector<int>& arr, int low, int mid, int high){
        vector<int> temp;
        int left = low, right = mid+1;
        while (left<=mid && right<=high)
        {
            if (arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }    
        }
        while (left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while (right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i-low];
        }  
      }

      void mergeSort(vector<int>& arr,int low, int high){
        if (low>=high)
        {
            return;
        }
        int mid = low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
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
    X.mergeSort(arr, 0, arr.size()-1);
    cout<<"The array in non-decreasing order : ";
    for (int j = 0; j < arr.size(); j++)
    {
        cout<<arr[j]<<" ";
    }
    
    cout<<endl;

    return 0;
}