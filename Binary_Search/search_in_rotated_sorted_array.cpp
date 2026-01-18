#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int search(vector<int>& arr, int target){
      int low = 0, high = arr.size()-1;
      while (low<=high)
      {
          int mid = low+(high-low)/2;
          if (arr[mid]==target) 
          {
             return mid;
          }
          
          if (arr[mid]>=arr[low])
          {
             if (target>arr[low] && target<arr[mid])
             {
                high=mid-1;
             } 
             else
             {
                low=mid+1;
             }
             
          }
         else
         {
            if (target>arr[mid] && target <= arr[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }  
         }  
      }
      return -1;
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
    int k;
    cout<<"Enter the target value : ";
    cin>>k;

    solution x;
    int final = x.search(arr,k);
    if (final!=0)
    {
    cout<<"Element "<<k<<" is present at index : "<<final<<endl;
    }
    else
    {
    cout<<"Element is not found in the array."<<endl;
    }
    
    return 0;
}