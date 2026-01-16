#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
     int consecutive(vector<int>& arr){
        if (arr.empty())
        {
            return 0;
        }
        
         sort(arr.begin(),arr.end());
         int count = 1;
         int maxCount = 1;
         for (int i = 1; i < arr.size(); i++)
         {  
            if (arr[i]==arr[i-1])
            {
                continue;
            }
            
            else if (arr[i]==arr[i-1]+1)
            {
               count++;
               maxCount = max(maxCount,count);
            } 
            else
            {
                count = 1;
            }   
         }
         return maxCount;
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
    int final = x.consecutive(arr);
    cout<<"The number of consecutive elements in the array : "<<final;
 
    return 0;
}