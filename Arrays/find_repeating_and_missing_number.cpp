#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

class solution{
    public:
    vector<int> number(vector<int>& arr){
        vector<int> repeat;
        int count = 1;
        sort(arr.begin(),arr.end());
        for (int i = 0; i < arr.size()-1; i++)
        {
            if (arr[i]==arr[i+1])
            {
                count++;
                if(count==2){
                repeat.push_back(arr[i]);}
            }
            else
            {
                count=1;
            } 
        }
        return repeat;
    }

        set<int> number1(vector<int>& nums){
        set<int> missing;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i+1]-nums[i]==2)
            {
                missing.insert(nums[i+1]-1);
            }
        }
        return missing;
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

    solution x;

    cout<<"The repeating element is : ";
    vector<int> rep = x.number(arr);
    for(int x : rep){
        cout<<x<<" ";
    }

    cout<<"\nThe missing element is : ";
    set<int> mis = x.number1(arr);
    if (mis.empty())
    {
        cout<<arr.size();
    }
    for(int y : mis){
        cout<<y<<" ";
    }
    
    return 0;
}