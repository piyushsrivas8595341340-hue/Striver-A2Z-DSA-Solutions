#include<iostream>
using namespace std;

class solution{
    public:
    int function(int mid, int n,int m){
        long long ans=1;
        for (int i = 1; i <= n; i++)
        {
            ans=ans*mid;
            if (ans>m)
            {
                return 2;
            }
        }
        if (ans==m)
        {
            return 1;
        }
        return 0;
    }
    int root(int n, int m){
         int low=1, high=m;
         while (low<=high)
         {
            int mid= low+ (high-low)/2;
            int val = function(mid,n,m);
            if (val==1)
            {
                return mid;
            }
            else if (val==0)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
         }
         return -1;
    }
};

int main(){
    int m;
    cout<<"Enter the Nth root for the number : ";
    cin>>m;
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    solution x;
    int final = x.root(m,n);
    cout<<"The "<<m<<"th root of "<<n<<" is : "<<final<<endl;    
    return 0;
}