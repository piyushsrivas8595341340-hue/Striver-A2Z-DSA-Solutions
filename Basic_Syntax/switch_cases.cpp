#include<iostream>
using namespace std;

int main(){
    int date;
    cout<<"Enter the date (ranging between 1 and 7 only) : ";
    cin>>date;

    switch (date)
    {
    case 1:
        cout<<"It is Monday.";
        break;
    
    case 2:
        cout<<"It is Tuesday.";
        break;
    
    case 3:
        cout<<"It is Wednesday.";
        break;

    case 4:
        cout<<"It is Thursday.";
        break;

    case 5:
        cout<<"It is Friday.";
        break;

    case 6:
        cout<<"It is Saturday.";
        break;

    case 7:
        cout<<"It is Sunday.";
        break;

    default:
        cout<<"Invalid date.";
        break;

    }
    return 0;
}
