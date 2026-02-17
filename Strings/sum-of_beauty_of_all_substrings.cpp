#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;

class solution{
    public:
    int sumBeauty(string str){
        int sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            unordered_map<char,int> freq;
            for (int j = i; j < str.length(); j++)
            {
                freq[str[j]]++;
                int mini = INT_MAX;
                int maxi = INT_MIN;
                for(auto it : freq){
                    mini = min(mini,it.second);
                    maxi = max(maxi,it.second);
                }
                sum += (maxi-mini);
            }
        }
        return sum;
    }
};

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    solution x;
    int value = x.sumBeauty(str);
    cout<<"The sum of beauty of all substrings : "<<value<<endl;
    
    return 0;
}