#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int index1(vector<int>& arr, int target){
        int low = 0,high=arr.size()-1,value=-1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if (target==arr[mid])
            {
                value=mid;
                high = mid-1;
            }
            else if (arr[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }   
        }
        return value;
    }
    int index2(vector<int>& arr,int target){
        int low=0,high=arr.size()-1,value=-1;
        while (low<=high)
        {
            int mid = low+(high-low)/2;
            if (target==arr[mid])
            {
                value=mid;
                low=mid+1;
            }
            else if (arr[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return value;  
    }
    vector<int> search(vector<int>& arr, int target){
        return {index1(arr,target),index2(arr,target)};
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
    vector<int> final = x.search(arr,k);
    cout<<"The first and last occurence of element "<<k<<" is : ["<<final[0]<<","<<final[1]<<"]"<<endl;
    
    return 0;
}