#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int product(vector<int>& arr){

    //Brute force approach
    /*
    int maxproduct = arr[0];
    for(int i=0;i<arr.size();i++){
    int product=1;
    for(int j=i;j<arr.size();j++){
    product *= arr[i];
    maxProduct = max(maxProduct,product);
    }
    }
    return maxProduct;
    */

    //Optimal approach

        if(arr.size()==0) return 0;
        int result = arr[0];
        int maxProduct = arr[0];
        int minProduct = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            int current = arr[i];
            if (current<0)
            {
                swap(maxProduct,minProduct);
            }
            maxProduct = max(current,current*maxProduct);
            minProduct = min(current,minProduct*current);
            result = max(result,maxProduct);
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
    int final = x.product(arr);
    cout<<"The maximum product of subarray is : "<<final<<endl;
    
    return 0;
}