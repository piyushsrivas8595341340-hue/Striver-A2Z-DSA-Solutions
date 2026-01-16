#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
     void zeros(vector<vector<int>>& matrix){
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> row(m,0);
        vector<int> column(n,0);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j]==0)
                {
                    row[i] = 1;
                    column[j] = 1;
                }   
            }   
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (row[i]==1 || column[j]==1)
                {
                    matrix[i][j]=0;
                }     
            }    
        }   
     }
};

int main(){
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout<<"Enter the elements of the matrix in "<<m<<"*"<<n<<" order : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }  
    }
    cout<<"The new matrix is : "<<endl;
    Solution x;
    x.zeros(matrix);
    for (auto m : matrix)
    {
        for (auto value : m)
        {
            cout<<value<<" ";
        } 
        cout<<endl; 
    }

    return 0;
}