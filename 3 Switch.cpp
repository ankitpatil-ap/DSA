#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Sunday";
        break;
    case 2:
        cout<<"Monday";
        break;
    case 3:
        cout<<"Tuesday";
        break;
    case 4:
        cout<<"Wednesday";
        break;
    case 5:
        cout<<"Thrusday";
        break;
    case 6:
        cout<<"Friday";
        break;
    case 7:
        cout<<"Saterday";
        break;
    
    default:
        cout<<"Invalid";
        break;
    }
}
/*In switch statement whatever you specify in varible data type it should match with switch case
Switch is used when we have 1 condition need to print 1 statement from multiple statements
Here break is used to break the case else if we chose 5 thrusday will print along with
than all the below cases will be printed default is used when none of the casee follow the criteria.*/
