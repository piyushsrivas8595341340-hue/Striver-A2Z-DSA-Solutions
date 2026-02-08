#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
/*
//Brute force method--Time complexity -> O(n*max(a[]))
class solution{
    public:
    int calculateTotalHours(vector<int>& arr, int hourly){
        int totalHours = 0;
        for(int pile : arr){
            totalHours += (pile+hourly-1)/hourly;
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>&arr, int target){
        int maxVal = *max_element(arr.begin(),arr.end());
        for (int i = 1; i <= maxVal; i++)
        {
            int hours = calculateTotalHours(arr,i);
            if (hours <= target)
            {
                return i;
            }    
        }
        return maxVal;
    }
};
*/

//Optimal method -- Time complexity -> O(n*log(max(a[])))
class solution{
    public:
    long long calculateTotalHours(vector<int>& piles, int speed){
        long totalHours = 0;
        for(int bananas : piles){
           // totalHours += ceil((double)bananas/speed); //it gives floating point operations
            totalHours += (bananas+speed-1)/speed;
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int target){
        int maxVal = *max_element(piles.begin(),piles.end());
        int low =1, high = maxVal;
        int ans = maxVal;
        while (low<=high)
        {
            int mid = low+(high-low)/2;
            long long totalHours = calculateTotalHours(piles,mid);
            if (totalHours<=target)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
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
    int value= x.minEatingSpeed(arr, k);
    cout<<"The rate of eating banana by koko per hour is : "<<value<<endl;
    
    return 0;
}