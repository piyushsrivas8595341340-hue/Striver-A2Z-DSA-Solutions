#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    bool canPlace(vector<int>& arr, int d, int cows){
        int count=1;
        int last=arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i]-last>=d)
            {
                count++;
                last=arr[i];
            }
            if (count>=cows)
            {
                return true;
            }
        }
        return false;
    }
    /*
    
    //Brute force method using linear search
    int aggressiveCows(vector<int>&arr, int cows){
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int maxDistance = arr[n-1] - arr[0];
        int ans=0;
        for (int d = 1; d <= maxDistance; d++)
        {
            if (canPlace(arr,d,cows))
            {
                ans=d;
            }    
        }
        return ans;
    }
    */

    //Optimal approach method using binary search
    int aggressiveCows(vector<int>& arr, int cows){
        sort(arr.begin(),arr.end());
        int low=1,high=arr.back()-arr.front();
        int ans=0;
        while (low<=high)
        {
            int mid = low+(high-low)/2;
            if (canPlace(arr,mid,cows))
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
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
    cout<<"Enter the number of cows : ";
    cin>>k;

    solution x;
    int value = x.aggressiveCows(arr,k);
    cout<<"The maximum possible minimum distance between any two cows is : "<<value<<endl;

    return 0;
}