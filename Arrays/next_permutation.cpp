#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class permutation{
    public:
      vector<int> next(vector<int>& arr){
        if (next_permutation(arr.begin(),arr.end()))
        {
            return arr;
        }
        else
        {
            sort(arr.begin(),arr.end());
            return arr;
        }   
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
    cout<<"The next permutation is : ";
    permutation p;
    vector<int> final = p.next(arr);
    for (int j = 0; j < n; j++)
    {
        cout<<final[j]<<" ";
    }
    
    return 0;
}