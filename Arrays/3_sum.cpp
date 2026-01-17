#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
     vector<vector<int>> sum(vector<int>& arr){
        sort(arr.begin(),arr.end());
        vector<vector<int>> result;
        int n = arr.size();
        for (int i = 0; i < n-2; i++)
        {
            if (i>0 && arr[i]==arr[i-1])
            {
                continue;
            }
            int left = i+1,right=n-1;
            while (left<right)
            {
                int sum = arr[i]+arr[left]+arr[right];
                if (sum==0)
                {
                    result.push_back({arr[i],arr[left],arr[right]});
                while (left<right && arr[left]==arr[left+1]){
                    left++;
                }
                while (left<right && arr[right]==arr[right-1])
                {
                    right--;
                }
                left++; right--;
            }
           else if (sum<0)
           {
             left++;
           }
           else
           {
            right--;
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
    solution x;
    vector<vector<int>> final = x.sum(arr);
    cout<<"All possible unique triplets possible whose sum is zero are : "<<endl;
    for (auto &triplet : final)
    {
        for (auto &num : triplet)
        {
            cout<<num<<" ";
        }   
        cout<<endl;
    }

    return 0;
}