#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int countSubArray(vector<int>& arr,int k){
        int count = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                if (sum==k)
                {
                    count++;
                }
            }    
        }
        return count;
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
    int final = x.countSubArray(arr,k);
    cout<<"Number of subarray with sum equals "<<k<<" is : "<<final<<endl;
    
    return 0;
}