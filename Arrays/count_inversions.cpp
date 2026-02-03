#include<iostream>
#include<vector>
using namespace std;

//Brute-force method

/*
class solution{
    public:
    int inversion(vector<int>& arr){
        int count = 0;
        for (int i = 0; i < arr.size()-1; i++)
        {
            for (int j = i+1; j < arr.size(); j++)
            {
                if (arr[i]>arr[j])
                {
                    count++;
                }  
            }
        }
        return count; 
    }
};
*/

//Optimal method

int merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    int count = 0;
    while (left<=mid && right<=high)
    {
        if (arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            count += mid-left+1;
            right++;
        } 
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i]=temp[i-low];
    }
    return count;
}

int mergeSort(vector<int>&arr, int low, int high){
    int count=0;
    if (low>=high)  return count;
    int mid = low + (high-low)/2;
    count += mergeSort(arr,low,mid);
    count += mergeSort(arr,mid+1,high);
    count += merge(arr,low,mid,high);
    return count;
}

int numberOfInversions(vector<int>& arr, int n){
    return mergeSort(arr,0,n-1);
}

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

    int value = numberOfInversions(arr,n);
    cout<<"The number of inversions are : "<<value<<endl;

    return 0;
}