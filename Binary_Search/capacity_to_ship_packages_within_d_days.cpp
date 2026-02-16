#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

class solution{
    public:
    int capacityShip(vector<int>&weights, int capacity){
        int days=1, load=0;
        for (int i = 0; i < weights.size(); i++)
        {
            if (load+weights[i]>capacity)
            {
                days=days+1;
                load=weights[i];
            }
            else
            {
                load+=weights[i];
            }
        }
       return days; 
    }

//Brute force approach
/*
    int daysReq(vector<int>& weights, int limit){
        int left = *max_element(weights.begin(),weights.end());
        int right = accumulate(weights.begin(),weights.end(),0);
        for (int capacity = left; capacity <= right; capacity++)
        {
            int required = capacityShip(weights,capacity);
            if (required<=limit)
            {
                return capacity;
            } 
        }
        return right;
    }
*/
 
//Optimal Approach
int daysReq(vector<int>& weights, int limit){
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);
    while (low<high)
    {
        int mid = low+(high-low)/2;
        int required = capacityShip(weights,mid);
        if (required<=limit)
        {
            high=mid;
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
    cout<<"Enter the number of days : ";
    cin>>k;
    
    solution x;
    int value = x.daysReq(arr,k);
    cout<<"The minimum capacity of ship to transport the packages within the days limit : "<<value<<endl;
    return 0;
}