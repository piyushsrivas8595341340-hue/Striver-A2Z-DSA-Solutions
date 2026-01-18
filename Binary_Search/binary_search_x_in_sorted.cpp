#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int search(vector<int>& arr, int target){
        cout<<target<<" is present at index : ";
        for (int i = 0; i < arr.size(); i++)
        {
            if (target==arr[i])
            {
                cout<<i;
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
    int k;
    cout<<"Enter the target value : ";
    cin>>k;
    solution x;
    x.search(arr,k);
    //cout<<k<<" is present at index : "<<index<<endl;
    
    return 0;
}
