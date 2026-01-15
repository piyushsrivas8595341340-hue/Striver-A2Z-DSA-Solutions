#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    void sign(vector<int>& arr){
        vector<int> pos,neg;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i]>0)
            {
                pos.push_back(arr[i]);
            }
            else
            {
                neg.push_back(arr[i]);
            }    
        }
        if (pos.size()>neg.size())
        {
            for (int i = 0; i < neg.size(); i++)
            {
                arr[2*i] = pos[i];
                arr[2*i+1] = neg[i];
            }  
            int index = neg.size()*2;
            for (int i = neg.size(); i < pos.size(); i++)
            {
                arr[index] = pos[i];
                index++;
            }
        }
        else
        {
            for (int i = 0; i < pos.size(); i++)
            {
                arr[2*i] = pos[i];
                arr[2*i+1] = neg[i];
            }  
            int index = pos.size()*2;
            for (int i = pos.size(); i < neg.size(); i++)
            {
                arr[index] = neg[i];
                index++;
            }    
        }
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
    x.sign(arr);
    cout<<"Elements after rearranging alternately by sign : ";
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    return 0;
}