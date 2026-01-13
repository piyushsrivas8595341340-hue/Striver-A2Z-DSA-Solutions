#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array : ";
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    unordered_map<int,int> freq;
    for (int x : arr)
    {
        freq[x]++;
        if (freq[x]>n/2)
        {
            cout<<"The element which is available greater than n/2 times : "<<x<<" ";
            return 0;
        }    
    } 
    cout<<"No majority element found.";

    return 0;
}