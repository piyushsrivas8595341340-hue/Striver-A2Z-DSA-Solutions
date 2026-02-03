#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class solution{
    public:
    string reverse1(string s){
        vector<string> words;
        string word = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]!=' ')
            {
                word+=s[i];
            }
            else if (!word.empty())
            {
                words.push_back(word);
                word="";
            }
        }
        if (!word.empty())
        {
            words.push_back(word);
        }

        reverse(words.begin(),words.end());
        string result="";
        for (int i = 0; i < words.size(); i++)
        {
            result += words[i];
            if (i<words.size()-1)
            {
                result+=" ";
            }    
        }
        return result;
    }
};

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin, str);
    //cout<<str;
    solution x;
    cout<<"Reverse string is : ";
    cout<<x.reverse1(str);

    return 0;
}