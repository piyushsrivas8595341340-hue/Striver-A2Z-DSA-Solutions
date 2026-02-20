#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    vector<vector<int>> overlap(vector<vector<int>>& arr){
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;

        //Brute force approach
        /*
        for (int i = 0; i < n; i++)
        {
            int start = arr[i][0];
            int end = arr[i][1];
            if (!ans.empty() && end <= ans.back()[1])
            {
                continue;
            }
        for (int j = i+1; j < n; j++)
        {
            if (arr[j][0] <= end)
            {
                end = max(end,arr[j][1]);
            }
            else
            {
                break;
            }
        }
        ans.push_back({start,end});
        }
        return ans;
        */

        //Optimal approach
        for (int i = 0; i < n; i++)
        {
            if (ans.empty() || arr[i][0] > ans.back()[1])
            {
                ans.push_back(arr[i]);
            }
            else
            {
                ans.back()[1] = max(ans.back()[1],arr[i][1]);
            }   
        }
        return ans;
    }
};

int main(){
    solution x;
    vector<vector<int>> intervals = {{5,7},{1,3},{4,6},{8,10}};
    vector<vector<int>> result = x.overlap(intervals);
    for (auto merge : result)
    {
        cout<<"["<<merge[0]<<","<<merge[1]<<"]";
    }
    
    
    return 0;
}