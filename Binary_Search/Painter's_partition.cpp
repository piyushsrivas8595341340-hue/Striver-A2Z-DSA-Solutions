#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

class solution{
    public:
    int paintCount(vector<int>& arr, int time){
        int n = arr.size();
        int painter=1;
        long long board = 0;
        for (int i = 0; i < n; i++)
        {
            if (board + arr[i]<=time)
            {
                board += arr[i];
            }
            else
            {
                painter++;
                board = arr[i];
            }
        }
        return painter;
    }

    int findTime(vector<int>& arr, int n, int m){
        if(m>n) return -1;
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        while (low<=high)
        {
            int mid = low+(high-low)/2;
            if (paintCount(arr,mid)>m)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
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
    cout<<"Enter the target value : ";
    cin>>k;

    solution x;
    int value = x.findTime(arr,n,k);
    cout<<"The minimum time required to paint is : "<<value<<endl;
    
    return 0;
}