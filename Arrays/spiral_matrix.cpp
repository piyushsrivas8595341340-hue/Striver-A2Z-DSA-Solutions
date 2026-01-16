#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int> spiral(vector<vector<int>>& matrix){
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int bottom = m-1;
        int left = 0;
        int right = n-1;
        while (top <= bottom && left <= right)
        {
            for (int j = left; j <= right; j++)
            {
                result.push_back(matrix[top][j]);
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom)
            {
                for(int j = right; j >= left; j--)
                {
                result.push_back(matrix[bottom][j]);
            }
            bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    result.push_back(matrix[i][left]);
                }   
                left++;
            }  
        }
        return result; 
    }
};

int main(){
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    cout<<"Enter the elements of "<<m<<"*"<<n<<" order : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"The spiral matrix is : "<<endl;
    solution x;
    vector<int> spiral = x.spiral(matrix);
    for (auto val : spiral)
    {
        cout<<val<<" ";
    }
    
    return 0;
}