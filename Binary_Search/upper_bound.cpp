#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int upper(vector<int>& arr, int target){
        int low=0,high=arr.size();
        while(low<high){
            int mid = low+(high-low)/2;
            if (arr[mid]<=target)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
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
    int final = x.upper(arr,k);
    cout<<"Upper bound index : "<<final<<endl;
    return 0;
}