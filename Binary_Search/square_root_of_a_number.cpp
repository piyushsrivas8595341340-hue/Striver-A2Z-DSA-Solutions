#include<iostream>
#include<cmath>
using namespace std;

class solution{
    public:
    int root(int num){
        if (num<2)
        {
            return num;
        }
        int left=1, right=num/2, ans=0;
        while (left<=right)
        {
            long long mid = left+(right-left)/2;
            if (mid*mid<=num)
            {
                ans=mid;
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }            
        }
        return ans;
    }
};

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    //cout<<"It's square root nearest to an integer : "<<int(sqrt(n))<<endl;

    solution x;
    int final = x.root(n);
    cout<<"Square root (in integer) of "<<n<<" is : "<<final<<endl;

    return 0;
}