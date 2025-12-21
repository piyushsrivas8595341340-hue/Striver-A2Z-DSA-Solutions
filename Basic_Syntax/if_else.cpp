#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    if (100 >= marks && marks >= 90)
    {
        cout<<"You have achieved grade : A";
    }

    else if (90 > marks && marks >= 70 )
    {
        cout<<"You have achieved grade : B";
    }

    else if (70 > marks && marks >= 50)
    {
        cout<<"You have achieved grade : C";
    }

    else if (50 > marks && marks >= 35)
    {
        cout<<"You have achieved grade : D";
    }

    /*
    if (35 > marks)
    {
        cout<<"You are failed in your exams.";
    }
    */
    else if (35 > marks && marks >= 0)
    {
        cout<<"You are failed in your exams.";
    }

    else
    {
       cout<<"Invalid marks format";
    }
    
           
    return 0;
}
