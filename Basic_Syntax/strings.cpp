#include<iostream>
#include<string>
using namespace std;
string s = "Hello Piyush...";

int main(){

    cout<<"String name is : "<<s<<endl;

    cout<<"Using index : ";
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    cout<<endl;

    cout<<"Using range-based for loops : ";
    for (char p : s)
    {
        cout<<p;
    }
    cout<<endl;

    cout<<"Using iterator : ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl;

    cout<<"Size of string : "<<s.size()<<endl;

    cout<<"Length of string : "<<s.length()<<endl;

    cout<<"First Character : "<<s[0]<<endl;

    cout<<"Last Character : "<<s[14]<<endl;

    cout<<"Character at 7th place : "<<s.at(6)<<endl;

    s.push_back('@');
    cout<<"Adding @ symbol in last : "<<s<<endl;

    s.pop_back();
    cout<<"Removing @ symbol from last : "<<s<<endl;

    s.insert(5," Mr.");
    cout<<"Inserting Mr. before Piyush : "<<s<<endl;

    s.erase(5,4);
    cout<<"Erasing Mr. from the line : "<<s<<endl;

    string s1 = s.substr(0,5);
    cout<<"Substring 1 : "<<s1<<endl;
    string s2 = s.substr(6,6);
    cout<<"Substring 2 : "<<s2<<endl;
    string s3 = s.substr(12,3);
    cout<<"Substring 3 : "<<s3<<endl;

    size_t find = s.find("Piyush");
    if (find < s.size());
    cout<<"Piyush found at index : "<<find<<endl;

    return 0;
}