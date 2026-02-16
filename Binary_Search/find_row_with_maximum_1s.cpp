#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:

//Brute-force method
    //int row(vector<vector<int>>& matrix, int n,int m){
        // int count =0 ;
        // int index =-1;
        // for (int i = 0; i < n; i++)
        // {
        //     int cnt_ones = 0;
        //     for (int j = 0; j < m; j++)
        //     {
        //          cnt_ones += matrix[i][j];
        //     }
        //     if (cnt_ones>count)
        //     {
        //         count=cnt_ones;
        //         index=i;
        //     }    
        // }
        // return index;

//Optimal approach
        int lower(vector<int>& arr, int n, int m){
        int low=0, high=n-1;
        while (low<=high)
        {     
            int mid = low+(high-low)/2;
            if (arr[mid] >= m)
            {
                n=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }   
        }
        return n-1;
    }
    int row(vector<vector<int>> matrix, int n, int m){
        int count=0;
        int index=-1;
        for (int i = 0; i < n; i++)
        {
         int cnt_ones = m-lower(matrix[i],m,1);
         if (cnt_ones>count)
         {
            count=cnt_ones;
            index=i;
         }
        }
        return index;
    }
};

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns : ";
    cin>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
    }
    solution x;
    int value = x.row(matrix,n,m);
    cout<<"The row which has maximum ones : "<<value<<endl;

    return 0;
}