#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    vector<vector<int>> sum(vector<int>& arr, int target){
        sort(arr.begin(),arr.end());
        vector<vector<int>> result;
        int n = arr.size();
        for (int i = 0; i < n-3; i++)
        {
            if (i > 0 && arr[i]==arr[i-1])
            {
                continue;
            }
            for (int j = i+1; j < n-2; j++)
            {
                if (j>i+1 && arr[j]==arr[j-1])
                {
                    continue;
                }    
            
            int left=j+1,right=n-1;
            while (left<right)
            {
                long long sum = (long long)arr[i]+arr[j]+arr[left]+arr[right];
                if (sum==target)
                {
                    result.push_back({arr[i],arr[j],arr[left],arr[right]});
                
                while (left<right && arr[left]==arr[left+1])
                {
                    left++;
                }
                while (left<right && arr[right]==arr[right-1])
                {
                    right--;
                }
                left++;
                right--;
            }
            else if (sum<target)
            {
                left++;
            }
            else
            {
                right--;
            }
          } 
        }     
        }
        return result;
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
    cout<<"Enter the target sum : ";
    cin>>k;

    solution x;
    vector<vector<int>> final = x.sum(arr,k);
    cout<<"All possible subarrays whose sum is equal to "<<k<<" : "<<endl;
    for(auto &quadrupled : final){
        for(auto &value : quadrupled){
            cout<<value<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}