#include<iostream>
#include<cstring>
using namespace std;
class solution{
    public:
    bool isomorphic(string str1, string str2){
       int m1[256] = {0}, m2[256] = {0};
       int n = str1.size();
       for (int i = 0; i < n; i++)
       {
         if (m1[str1[i]] != m2[str2[i]])
         {
            return false;
         }
         m1[str1[i]]=i+1;
         m2[str2[i]]=i+1;
       }
       return true;
    }
};

int main(){
    string str1;
    cout<<"Enter the string 1 : ";
    getline(cin,str1);
    string str2;
    cout<<"Enter the string 2 : ";
    getline(cin,str2);

    solution x;
    if (x.isomorphic(str1,str2))
    {
        cout<<"The given strings are isomorphic : True";
    }
    else
    {
        cout<<"The given strings are isomorphic : False";
    }
    
    return 0;
}