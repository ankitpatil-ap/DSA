#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks >= 90){
        cout<<"A";
    }
    else if(marks >= 80 && marks <90){
        cout<<"B";
    }
    else if(marks >= 70 && marks <60){
        cout<<"C";
    }
    else if(marks >= 60 && marks <50){
        cout<<"D";
    }
    else if(marks >= 50 && marks <40){
        cout<<"F";
    }
    return 0;

}
/*if else if can have number conditions equal to number of statements.
so here once after putting 91 A is printed then program will close and none of the else statement
will be checked because condition satisfied at once.
if else if got terminated when statement is got executed.*/