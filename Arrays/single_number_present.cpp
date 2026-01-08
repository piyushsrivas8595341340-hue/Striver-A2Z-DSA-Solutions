#include<iostream>
#include<vector>
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

    cout<<"The element which is present only one time : ";
    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];
        int count = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j]==x)
        {
            count++;
        }  
        
    } 
    if (count == 1)
        {
        cout<<x<<" ";
        }         
} 

    return 0;
}