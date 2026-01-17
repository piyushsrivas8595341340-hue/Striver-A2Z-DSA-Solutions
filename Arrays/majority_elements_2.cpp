#include<iostream>
#include<vector>
using namespace std;

class Majority{
    public:
    vector<int> element(vector<int>& arr){
      int n = arr.size();
      int count1=0, count2=0;
      int candidate1=-1, candidate2=-1;
      for (int num : arr)
      {
        if (candidate1==num)
        {
            count1++;
        }
        else if (candidate2==num)
        {
            count2++;
        }
        else if (count1==0)
        {
            candidate1=num;
            count1=1;
        }
        else if (count2==0)
        {
            candidate2=num;
            count2=1;
        }
        else
        {
            count1--;
            count2--;
        }
      }

      count1=count2=0;
      for(int num : arr) {
        if (num==candidate1)
        {
            count1++;
        }
        else if (num==candidate2)
        {
            count2++;
        }
      }
      vector<int> result;
      if (count1>n/3)
      {
        result.push_back(candidate1);
      }
      if (count2>n/3 && candidate2 != candidate1)
      {
        result.push_back(candidate2);
      }
      return result;
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
    Majority x;
    vector<int> final = x.element(arr);
    cout<<"The majority element is : ";
    for(int num : final){
        cout<<num<<" ";
    }
    
    return 0;
}