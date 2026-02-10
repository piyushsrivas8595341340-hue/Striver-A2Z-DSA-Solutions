#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class solution{
    public:
    double median(vector<int> arr1, vector<int> arr2){
        if(arr2.size()<arr1.size())  return median(arr2,arr1);
        int n1 = arr1.size();
        int n2 = arr2.size();
        int low=0,high=n1;
        while (low<=high)
        {
            int cut1 = (low+high)>>1;
            int cut2 = (n1+n2+1)/2-cut1;

            int left1 = (cut1==0) ? INT_MIN : arr1[cut1-1];
            int left2 = (cut2==0) ? INT_MIN : arr2[cut2-1];
            int right1 = (cut1==n1) ? INT_MAX : arr1[cut1];
            int right2 = (cut2==n2) ? INT_MAX : arr2[cut2];
            if (left1<=right2 && left2<=right1)
            {
                if ((n1+n2)%2==0)
                {
                    return (max(left1,left2)+min(right1,right2))/2.0;
                }
                else
                {
                    return max(left1,left2);
                }
            }
            if (left1>right2)
            {
                high=cut1-1;
            }
            else
            {
                low=cut1+1;
            }   
        }
        return 0.0;
    }
};

int main(){
    int m;
    cout<<"Enter the size of array 1 : ";
    cin>>m;
    vector<int> arr1(m);
    cout<<"Enter the elements of the array 1 : ";
    for (int i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }
    int n;
    cout<<"Enter the size of array 2 : ";
    cin>>n;
    vector<int> arr2(n);
    cout<<"Enter the elements of the array 2 : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }

    solution x;
    double value = x.median(arr1,arr2);
    cout<<"The median of 2 sorted arrays is : "<<value<<endl;
    return 0;
}