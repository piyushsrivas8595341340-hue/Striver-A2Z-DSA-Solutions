#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
     void sort(vector<int>& arr){
        int low=0,mid=0,high=arr.size()-1;
        while (mid<=high)
        {
            if (arr[mid]==0)
            {
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }
            else if (arr[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(arr[high],arr[mid]);
                high--;
            }
            
        }
        
     }
};

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array in 0,1 & 2 only : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    solution x;
    x.sort(arr);
    cout<<"Array after sorting : ";
    for(int value : arr)
    {
        cout<<value<<" ";
    }

    return 0;
}