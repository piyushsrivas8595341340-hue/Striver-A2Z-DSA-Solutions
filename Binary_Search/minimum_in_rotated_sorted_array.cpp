#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    int minimum(vector<int>& arr){
        int low=0,high=arr.size()-1;
        while (low<high)
        {
            int mid = low+(high-low)/2;
            if (arr[mid]>arr[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return arr[low];
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
    solution x;
    int final = x.minimum(arr);
    cout<<"The minimum element of the array : "<<final<<endl;
    
    return 0;
}