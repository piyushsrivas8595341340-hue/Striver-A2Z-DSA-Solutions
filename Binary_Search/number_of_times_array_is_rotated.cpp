#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int rotated(vector<int>& arr){
        int n = arr.size();
        int low=0, high=n-1;
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
    solution x;
    int final = x.rotated(arr);
    cout<<"Number of times an array is rotated : "<<final<<endl;

    return 0;
}