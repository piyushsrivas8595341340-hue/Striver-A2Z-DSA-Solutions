#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to search in array : ";
    cin>>x;
 
    bool found = false;
    for (int i = 0; i < n; i++)
    {
      if (x == arr[i])
      {
        cout<<"Element "<<x<<" is present at index : "<<i<<endl;
        found = true;
        break;
      }
    }

    if (!found)
    {
        cout<<"Element "<<x<<" is not present in the array = -1";
    }
    
    return 0;
}