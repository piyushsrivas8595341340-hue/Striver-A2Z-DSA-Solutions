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

    sort(arr.begin(),arr.end());
    cout<<"The array in ascending order : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    int largest = arr[n-1];
    int secondlargest = -1;
    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i]!= largest)
        {
            secondlargest = arr[i];
            break;
        }   
    }
    
    if (secondlargest == -1)
    {
        cout<<"\nThere is no second largest element = -1";
    }
    else
    {
        cout<<"\nThe second largest element of the array : "<<secondlargest<<endl;
    }
    

    return 0;
}