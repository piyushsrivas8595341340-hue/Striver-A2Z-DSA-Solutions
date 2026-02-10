#include<iostream>
using namespace std;
class solution{
    public:
    bool rotate(string s, string goal){
        if (s.length() != goal.length())
        {
            return false;
        }

//Brute force approach
/*
        for (int i = 0; i < s.size(); i++)
        {
            string rotated = s.substr(i)+s.substr(0,i);
            if (rotated==goal)
            {
                return true;
            }    
        }
        return false;
*/

//Optimal approach
    string doubledS = s+s;
    return doubledS.find(goal) != string::npos;
    //   != string::npos means goal was found as a substring
    }
};

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    string goal;
    cout<<"Enter the goal string : ";
    getline(cin,goal);

    solution x;
    if (x.rotate(str,goal))
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
    
    return 0;
}