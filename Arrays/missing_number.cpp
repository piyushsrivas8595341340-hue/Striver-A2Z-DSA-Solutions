#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

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

    sort(arr.begin(), arr.end());
    cout<<"The missing element in the array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]!=i)
        {
            cout<<i;
            break;
        }    
    }
       
    return 0;
}