#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class solution{
    public:
    bool possible(vector<int>& arr, int days, int m, int k){
       int count = 0;
       int bouquet = 0;
       for (int i = 0; i < arr.size(); i++)
       {
           if (arr[i]<=days)
           {
              count++;
           }
           else
           {
              bouquet += count/k;
              count=0;
           }   
       }
       bouquet += count/k;
       return bouquet >= m;
    }
    int flower(vector<int> arr, int r, int b){
        long long val = r * 1LL * b * 1LL;
        if(val>arr.size()) return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < arr.size(); i++)
        {
            mini = min(mini, arr[i]);
            maxi = max(maxi,arr[i]);
        }
        int low= mini, high = maxi;
        while (low<=high)
        {
            int mid = low+(high-low)/2;
            if (possible(arr,mid,r,b))
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

    int m;
    cout<<"Enter the number of bouquets : ";
    cin>>m;
    int k;
    cout<<"Enter the number of adjacent flowers : ";
    cin>>k;


    solution x;
    int value = x.flower(arr,m,k);
    cout<<"The number of days required to make "<<m<<" bouquets : "<<value<<endl;
    
    return 0;
}