#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
     void rotate(vector<vector<int>>& matrix){
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }  
        }
        for (int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }  
     }
};

int main(){
    int order;
    cout<<"Enter the order of the square matrix : ";
    cin>>order;
    vector<vector<int>> matrix(order,vector<int>(order));
    cout<<"Enter the elements of the matrix : "<<endl;
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cin>>matrix[i][j];
        } 
    }

    solution x;
    x.rotate(matrix);
    cout<<"The matrix after rotating 90 degrees : "<<endl;
    for (auto order : matrix)
    {
        for (auto value : order)
        {
            cout<<value<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}