#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    bool search(vector<int>& arr, int target){
        int n = arr.size();
        int low=0, high=n-1;
        while (low<=high)
        {
            int mid = low + (high-low)/2;
            if (arr[mid]==target)
            {
                return true;
            }
            if (arr[low]==arr[mid] && arr[mid]==arr[high])
            {
                low++;
                high--;
                continue;
            }
            if (arr[low]<=arr[mid])
            {
                if (arr[low]<=target && target<=arr[mid])
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
                if (arr[mid]<=target && target<=arr[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }    
            }            
        }
        return false;
    }
};

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the target value : ";
    cin>>k;

    solution x;
    bool final = x.search(arr,k);
    if(final){
    cout<<"The element "<<k<<" is present in the array."<<endl;
    }
    else
    {
        cout<<"The element "<<k<<" is not present in the array."<<endl;
    }
    
    return 0;
}