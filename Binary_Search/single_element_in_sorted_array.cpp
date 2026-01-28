#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    /*
    void single(vector<int>& arr){
        for (int i = 0; i < arr.size(); i++){
        int count = 0;
        int x = arr[i];
            for (int j = 0; j < arr.size(); j++)
            {
                if (arr[j]==x)
                {
                    count++;
                }
            }
            if (count==1)
            {
                cout<<x<<" ";
            }
        }
    }
    */

    /*
    vector<int> single(vector<int>& arr){
       vector<int> result;
       int n = arr.size();
       if (n==1)
       {
         result.push_back(arr[0]);
         return result;
       }
       
       for (int i = 0; i < n; i++)
       {
         if (i==0)
         {
            if (arr[i]!=arr[i+1])
            {
                result.push_back(arr[i]);
            } 
         }
         else if (i==n-1)
         {
            if (arr[i]!= arr[i-1])
            {
                result.push_back(arr[i]);
            }            
         }
         else
         {
            if (arr[i]!=arr[i+1] && arr[i]!=arr[i-1])
            {
                result.push_back(arr[i]);
            }           
         }        
       }      
    return result;
    }
    */

    int single(vector<int>& arr){
        int n = arr.size();
        int low=1,high=n-2;
        if (n==1)
        {
            return arr[0];
        }
        if (arr[0]!=arr[1])
        {
            return arr[0];
        }
        if (arr[n-1]!=arr[n-2])
        {
            return arr[n-1];
        }
        while (low<=high)
        {
            int mid = low + (high-low)/2;
            if (arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
            {
                return arr[mid];
            }
            if ((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1]))
            {
                 low=mid+1; //eliminated left half
            }
            else
            {
                high=mid-1; //eliminated right half
            } 
        }
        return -1;
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
    int val = x.single(arr);
    cout<<"Single element present in the array : "<<val<<endl;
    // for(int y : val){
    //     cout<<y<<endl;
    // }
    
    return 0;
}