#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    void merge(vector<int>&arr1,int m, vector<int>&arr2,int n){
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while (i>=0 && j>=0)
        {
            if (arr1[i]>arr2[j])
            {
                arr1[k--]=arr1[i--];
            }
            else
            {
                arr1[k--]=arr2[j--];
            }
        }
       while (j>=0)
       {
          arr1[k--]=arr2[j--];
       } 
    }
};

int main(){
    int m;
    cout<<"Enter the size of the array 1 : ";
    cin>>m;
    int n;
    cout<<"Enter the size of the array 2 : ";
    cin>>n;
    vector<int> arr1(m+n);
    cout<<"Enter the elements of array 1 : ";
    for (int i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }
    vector<int> arr2(n);
    cout<<"Enter the elements of array 2 : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }

    solution x;
    x.merge(arr1,m,arr2,n);
    cout<<"The merged array is : ";
    for(int value : arr1){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}