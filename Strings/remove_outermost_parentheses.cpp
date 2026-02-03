#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    string remove(string s){
        string ans="";
        int count=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]==')')
            {
                count--;
            }
            if (count!=0)
            {
                ans.push_back(s[i]);
            }
            if (s[i]=='(')
            {
                count++;
            }
        }
        return ans;
    }
};

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    solution x;

    string val = x.remove(str);
    cout<<"String after removing outermost parentheses : "<<val<<endl;
    
    return 0;
}
