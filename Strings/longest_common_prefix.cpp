#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    string common(vector<string>& str){
        if (str.empty()) return "";
        sort(str.begin(),str.end());
        string first = str[0];
        string last = str[str.size()-1];
        string ans = "";
        int minLength = min(first.size(),last.size());
        for (int i = 0; i < minLength; i++)
        {
            if (first[i]!=last[i])
            {
                break;
            }
            ans+=first[i];
        }
        return ans;
    }
};

int main(){
    int n;
    cout<<"Enter the number of strings : ";
    cin>>n;
    cin.ignore();
    vector<string> str(n);
    cout<<"String names : ";
    for (int i = 0; i < n; i++)
    {
       getline(cin,str[i]);
    }
    solution x;
    string value = x.common(str);
    cout<<"The longest common prefix is : "<<value<<endl;
    
    return 0;
}