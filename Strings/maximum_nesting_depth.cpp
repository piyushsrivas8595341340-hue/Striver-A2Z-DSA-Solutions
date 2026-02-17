#include<iostream>
using namespace std;

class solution{
    public:
    int maxDepth(string str){
        int count=0;
        int ans=0;
        for(char x : str){
            if (x=='(')
            {
                count++;
            }
            else if (x==')')
            {
                count--;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    solution x;
    int value = x.maxDepth(str);
    cout<<"The length of maximum nesting depth is : "<<value<<endl;

    return 0;
}