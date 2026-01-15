#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>& arr){
      long long maxi = INT_MIN;
      long long sum = 0;

      for(int i = 0; i < arr.size(); i++)
      {
        sum += arr[i];
        if (sum>maxi)
        {
            maxi=sum;
        }
        if (sum<0)
        {
            sum = 0;
        }
      }
     return maxi; 
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
    Solution x;
    int final = x.maxSubArray(arr);
    cout<<"The maximum subarray sum is : "<<final<<endl;
    
    return 0;
}