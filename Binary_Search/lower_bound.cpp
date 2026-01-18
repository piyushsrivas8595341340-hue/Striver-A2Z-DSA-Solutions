#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int lower(vector<int>& arr, int target){
        int low = 0, high = arr.size();
        while (low<high)
        {
            int mid = low+(high-low)/2;
            if (arr[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high = mid;
            }   
        }
        return low;
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
    int value = x.lower(arr,k);
    cout<<"Lower bound index : "<<value<<endl;
    
    return 0;
}