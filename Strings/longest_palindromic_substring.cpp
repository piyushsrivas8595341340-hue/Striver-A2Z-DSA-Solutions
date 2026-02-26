#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class solution{
    public:
    string longestPalindrome(string s){
        string str = "";
        if(s.size()<=1){
            return s;
        }
        for(int center=0;center<s.size();center++){
            int left=center;
            int right=center;
            while(left>=0 && right<s.size() && s[left]==s[right]){
                if(right-left+1>str.size())
                    str=s.substr(left,right-left+1);
                    left--;
                    right++;
            }
            left=center;
            right=center+1;
            while(left>=0 && right<s.size() && s[left]==s[right]){
                if(right-left+1>str.size())
                str=s.substr(left,right-left+1);
                left--;
                right++;
            }
        }
        return str;
    }
};

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    solution a;
    string final = a.longestPalindrome(str);
    cout<<"The longest palindromic substring is : "<<final<<endl;

    return 0;
}