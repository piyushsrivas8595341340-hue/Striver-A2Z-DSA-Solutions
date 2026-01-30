#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int element(vector<int>& arr){
        int n = arr.size();
        int low=0, high=n-1;
        while (low<=high)
        {
            int mid = low+(high-low)/2;
            if (arr[0]>arr[1])
            {
                return 0;
            }
            if (arr[n-1]>arr[n-2])
            {
                return n-1;
            }
            if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else
            {
                if ((arr[mid]<arr[mid-1] || arr[mid]<arr[mid+1]))
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
    solution x;
    int final = x.element(arr);
    cout<<"The peak element in the array : "<<final<<endl;

    return 0;
}