#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array in 0 and 1 only : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]==1)
        {
            count++;
        }    
    }
    cout<<"Number of 1s in array : "<<count;
  
    return 0;
}