#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    /*
    //Brute-force method
    int missing(vector<int>&arr, int target){
        for(int num:arr){
            if (num<=target)
            {
                target++;
            }
            else
            {
                break;
            }  
        }
        return target;
    }
    */

    //Optimal approach method
    int missing(vector<int>& arr, int k){
        int low=0, high=arr.size()-1;
        while (low<=high)
        {
            int mid = low+(high-low)/2;
            int miss= arr[mid]-(mid+1);
            if (miss<k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }   
        }
        return k+high+1;
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
    cout<<"Enter the target missing index : ";
    cin>>k;

    solution x;
    int value = x.missing(arr,k);
    cout<<"The "<<k<<"th missing element is : "<<value<<endl;
    
    return 0;
}