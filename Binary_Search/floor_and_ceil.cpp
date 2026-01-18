#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    pair<int,int> element(vector<int>& arr, int target){
        int floor = -1, ceil = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i]==target)
            {
                floor=arr[i];
                ceil=arr[i];
                break;
            }
            else if(arr[i]<target)
            {
                floor=arr[i];
            }
            else if (arr[i]>target)
            {
                ceil=arr[i];
                break;
            } 
        }
        return {floor,ceil};
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
    auto final = x.element(arr,k);
    cout<<"The floor of "<<k<<" is : "<<final.first<<endl;
    cout<<"The ceil of "<<k<<" is : "<<final.second<<endl;
    
    return 0;
}