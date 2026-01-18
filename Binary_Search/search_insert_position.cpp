#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int insert(vector<int>& arr,int target){
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i]==target)
            {
                return i;
                break;
            }
            else if(arr[i]>target)
            {
                return i;
                break;
            } 
        }
        return arr.size();
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
    int final = x.insert(arr,k);
    cout<<"This value should be present at index : "<<final<<endl;
    return 0;
}