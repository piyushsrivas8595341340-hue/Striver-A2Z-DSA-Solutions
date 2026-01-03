#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    map <int,int> jk;
    for (int i = 0; i < n; i++)
    {
        jk[arr[i]]++;
    }
    
    /*
    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
        }
    }

    int hash[x+1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    */

    cout<<"Frequency of Elements : [ ";
    for (int i = 0; i <= n; i++)
    {
        if (jk[i]>0)
        {
            cout<<"("<<i<<","<<jk[i]<<")"<<" ";
        }
    }
    cout<<"]";

    return 0;
}
