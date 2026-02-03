#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    string largest(string& s){
        int ind = -1;
        int i;
        for (int i = s.size()-1; i >= 0; i--)
        {
            if ((s[i]-'0')%2==1)
            {
                ind=i;
                break;
            }  
        }
        i=0;
        while (i<=ind && s[i]=='0')
        {
            i++;
        }
        return s.substr(i, ind-i+1); 
    }
};

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    solution x;
    string result = x.largest(str);
    cout<<"The largest odd number in string is : "<<result<<endl;

    return 0;
}