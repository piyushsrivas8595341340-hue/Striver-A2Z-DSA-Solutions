#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string alpha;
    cout<<"Enter a word : ";
    cin>>alpha;

    string originalAlpha = alpha;
    string revAlpha = alpha;
    reverse (revAlpha.begin(), revAlpha.end());

    if (originalAlpha==revAlpha)
    {
        cout<<"Yes, it is a palindrome string.";
    }
    else
    {
        cout<<"No, it is not a palindrome string.";
    } 

    return 0;
}