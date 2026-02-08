#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

class solution{
    public:
    int countStudents(vector<int>& arr, int pages){
       int n = arr.size();
       int students=1;
       long long pagesStudents = 0;
       for (int i = 0; i < n; i++)
       {
          if (pagesStudents+arr[i]<=pages)
          {
              pagesStudents += arr[i];
          }
          else
          {
              students++;
              pagesStudents = arr[i];
          }
       }
        return students;
    }
/*
//Brute-force approach
    int findPages(vector<int>&arr, int n, int m){
        if(m>n)  return -1;
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        for (int pages = low; pages <= high; pages++)
        {
            if (countStudents(arr,pages)==m)
            {
                return pages;
            }     
        }
        return low;
    }
*/

//Optimal approach
    int findPages(vector<int>&arr, int n,int m){
        if(m>n) return -1;
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        while (low<=high)
        {
            int mid  = low+(high-low)/2;
            int students = countStudents(arr,mid);
            if (students>m)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }   
        }
        return low;
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
    cout<<"Enter the number of students : ";
    cin>>k;

    solution x;
    int value = x.findPages(arr,n,k);
    cout<<"The minimum of maximum pages allocated to a student is : "<<value<<endl;
    
    return 0;
}