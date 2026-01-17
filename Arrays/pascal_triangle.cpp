#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
      vector<vector<long long>> triangle(int num){
        vector<vector<long long>> pascal;
        for (int j = 0; j < num; j++)
        {
          vector<long long> row;
          long long value = 1;
          row.push_back(value);
        for (int i = 1; i <= j; i++)
          {
            value = value*(j-i+1)/i;
            row.push_back(value);
          } 
          pascal.push_back(row);
        } 
        return pascal;
      }
};

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    solution x;
    vector<vector<long long>> result = x.triangle(n);
    for (auto row : result)
    {
        for (auto final : row)
        {
            cout<<final<<" ";
        }
        cout<<endl;
    }  
   
    return 0;
}