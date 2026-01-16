#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<int> leader(vector<int>& arr){
        vector<int> leader;
        int n = arr.size();
        int max = arr[n-1];
        leader.push_back(max);
        for (int i = n-2; i >= 0; i--)
        {
            if (arr[i]>=max)
            {
                leader.push_back(arr[i]);
                max = arr[i];
            }  
        }
        reverse(leader.begin(),leader.end());
        return leader;
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
    vector<int> final = x.leader(arr);
    cout<<"The leaders in an array is : ";
    for (int j = 0; j < final.size(); j++)
    {
        cout<<final[j]<<" ";
    }
    

    return 0;
}