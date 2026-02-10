#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class solution{
    public:
//Brute-force approach
/*
    int element(vector<int>&a, vector<int>&b, int k){
        vector<int> merged;
        merged.reserve(a.size()+b.size());
        merge(a.begin(),a.end(),b.begin(),b.end(),back_inserter(merged));
        return merged[k-1];
    }
*/

    int element(vector<int>& arr1, vector<int>& arr2, int k){
        if(arr2.size()<arr1.size()) return element(arr2,arr1,k);
        int n1 = arr1.size();
        int n2 = arr2.size();
        int low = max(0,k-n2), high = min(k,n1);
        int left = k;
        while (low<=high)
        {
            int cut1 = (low+high)>>1;
            int cut2 = left-cut1;
            int left1 = (cut1==0) ? INT_MIN : arr1[cut1-1];
            int left2 = (cut2==0) ? INT_MIN : arr2[cut2-1];
            int right1 = (cut1==n1) ? INT_MAX : arr1[cut1];
            int right2 = (cut2==n2) ? INT_MAX : arr2[cut2];
            if (left1<=right2 && left2<=right1)
            {
                return max(left1,left2);
            }
            else if (left1>right2)
            {
                high=cut1-1;
            }
            else
            {
                low=cut1+1;
            } 
        }
        return -1;
    }
};

int main(){
    int m;
    cout<<"Enter the size of array 1 : ";
    cin>>m;
    vector<int> arr(m);
    cout<<"Enter the elements of the array 1 : ";
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    int n;
    cout<<"Enter the size of array 2 : ";
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter the elements of the array 2 : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    int k;
    cout<<"Enter the target index : ";
    cin>>k;

    solution x;
    int value = x.element(arr,arr1,k);
    cout<<"The element present at index "<<k<<"th is : "<<value<<endl;
    
    return 0;
}