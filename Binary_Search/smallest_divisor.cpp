#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class solution{
    public:
    /*
    //Brute force method
    int smallestDivisor(vector<int> &arr, int limit){
        int n = arr.size();
        int maxi = *max_element(arr.begin(),arr.end());
        for (int d = 1; d <= maxi; d++)
        {
            int sum=0;
            for (int i = 0; i < n; i++)
            {
                sum += ceil((double)arr[i]/(double)d);
            }
            if (sum<=limit)
            {
                return d;
            }
            
        }
        return -1;
    }
    */

    //Optimal approach method
    int sumByD(vector<int>& arr, int div){
        int sum = 0;
        for (int num : arr)
        {
            sum += ceil((double)num/div);
        }
        return sum;
    }
    int SmallestDivisor(vector<int>& arr, int limit){
        if(arr.size()>limit) return -1;
        int maxi = *max_element(arr.begin(),arr.end());
        int low=1;
        int high = maxi;
        while (low<=high)
        {
            int mid = low+(high-low)/2;
            if (sumByD(arr,mid)<=limit)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
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
    cout<<"Enter the threshold sum : ";
    cin>>k;

    solution x;
    int value = x.SmallestDivisor(arr,k);
    cout<<"The smallest divisor of this array to reach the threshold sum is : "<<value<<endl;

    return 0;
}