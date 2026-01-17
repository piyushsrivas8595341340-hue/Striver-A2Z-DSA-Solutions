#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class subArray{
    public:
    int length(vector<int>& arr){
        int n = arr.size();
        unordered_map<int,int> x;
        int maxi=0;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum==0)
            {
                maxi=i+1;
            }
            else if (x.find(sum) != x.end())
            {
                maxi = max(maxi,i-x[sum]);
            }
            else
            {
                x[sum]=i;
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
    subArray p;
    int value = p.length(arr);
    cout<<"The length of the longest subarray with sum 0 is : "<<value<<endl;
    
    return 0;
}