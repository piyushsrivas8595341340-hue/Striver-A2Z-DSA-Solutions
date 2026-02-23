#include<iostream>
#include<vector>
#include<map>
using namespace std;

class solution{
    public:
    int subarrray(vector<int>& arr,int k){
        int count=0;

        //Brute force approach
        /*
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i; j < arr.size(); j++)
            {
                int xorVal = 0;
                for (int k = i; k <= j; k++)
                {
                    xorVal=xorVal^arr[k];
                }  
                if (xorVal==k)
                {
                    count++;
                }   
            } 
        }
        */

        //Better approach
        /*
        for (int i = 0; i < arr.size(); i++)
        {
            int xorVal = 0;
            for (int j = i; j < arr.size(); j++)
            {
                xorVal = xorVal^arr[j];
                if (xorVal==k)
                {
                    count++;
                }   
            } 
        }
        */

        //Optimal approach
        int xorVal=0;
        map<int,int> mpp;
        mpp[xorVal]++;
        for (int i = 0; i < arr.size(); i++)
        {
            xorVal = xorVal^arr[i];
            int x = xorVal^k;
            count += mpp[x];
            mpp[xorVal]++;
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
    cout<<"Enter the target value : ";
    cin>>k;

    solution x;
    int final = x.subarrray(arr,k);
    cout<<"The number of subarrays with given xor k : "<<final<<endl;
    
    return 0;
}