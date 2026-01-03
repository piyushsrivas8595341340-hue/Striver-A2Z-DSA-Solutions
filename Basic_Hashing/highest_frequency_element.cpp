#include<iostream>
#include<vector>
using namespace std;

class frequency{
    public:
      void counter(int arr[], int n){
        vector<bool> visited(n, false);
        int maxFreq = 0, minFreq = n;
        int maxEle = 0, minEle = 0;

        for (int i = 0; i < n; i++)
        {
            if (visited[i] == true)
            continue;

            int count = 1;
            for (int j = i+1; j < n; j++)
            {
                if (arr[i]==arr[j])
                {
                    visited[i] = true;
                    count++;
                }   
            }
            
            if (count>maxFreq)
            {
                maxEle = arr[i];
                maxFreq = count;
            }

            if (count<minFreq)
            {
                minEle = arr[i];
                minFreq = count;
            }
            
        }
        cout<<"The highest frequency element is : "<<maxEle;
        
      }
};

int main(){
    int m;
    cout<<"Enter the size of the array : ";
    cin>>m;

    int arr[m];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }

    frequency x;
    int n = sizeof(arr)/sizeof(arr[0]);
    x.counter(arr,n);

    return 0;
}