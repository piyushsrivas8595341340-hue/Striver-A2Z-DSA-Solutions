#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
       int Stock(vector<int>& arr){
       int minPrice = INT_MAX;
       int maxProfit = 0;
       for (int price : arr)
       {
           minPrice = min(minPrice, price);
           maxProfit = max(maxProfit, price-minPrice);
       }
       return maxProfit;
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
    int final = x.Stock(arr);
    cout<<"The maximum profit is : "<<final<<endl;
    
    return 0;
}