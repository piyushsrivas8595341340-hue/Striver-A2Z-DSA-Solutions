#include<iostream>
#include<algorithm>
using namespace std;

class solution{
    public:
/*
//Brute force approach
    string anagram(string& s1, string& s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        cout<<"The given strings are anagram : ";
        if (s1==s2)
        {
            cout<<"True";
        }
        else
        {
            cout<<"False";
        }   
    }
*/

//Optimal method
     bool anagram(string s1, string s2){
        if (s1.length() != s2.length())
        {
            return false;
        }
     int freq[26]={0};
     for (int i = 0; i < s1.length(); i++)
     {
         char c1 = tolower(s1[i]);
         char c2 = tolower(s2[i]);
         if(isalpha(c1)) freq[c1-'a']++;
         if(isalpha(c2)) freq[c2-'a']--;
     }
     for (int i = 0; i < 26; i++)
     {
        if (freq[i]!=0)
        {
            return false;
        }  
     }
     return true;
     }
};

int main(){
    string str1;
    cout<<"Enter the first string : ";
    getline(cin,str1);

    string str2;
    cout<<"Enter the second string : ";
    getline(cin,str2);

    // solution x;
    // string value = x.anagram(str1,str2);

    cout<<"The given strings are anagram : ";
    solution x;
    if (x.anagram(str1,str2))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    } 

    return 0;
}