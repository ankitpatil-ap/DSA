#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int age;
    cin>>age;
    if(age>=20){
        cout<<"Age is Above 20";
    }
}*/
//this program will print Age is above 20 whenever we enter number above 20 
//if we enter number below 20 then it will print nothing.

/*If statement is used when their is only 1 condition and one 1 statement need to print
 If statement 1 condition 1 statement*/

 //we can also specify multiple statement and multiple condition usnig if as follows

int main(){
    int marks;
    cin>>marks;
    if(marks >= 90){
        cout<<"A";
    }
    if(marks >= 80 && marks <90){
        cout<<"B";
    }
    if(marks >= 70 && marks <60){
        cout<<"C";
    }
    if(marks >= 60 && marks <50){
        cout<<"D";
    }
    if(marks >= 50 && marks <40){
        cout<<"F";
    }
    return 0;
}
/* Here program is running fine print A when enter 90 above 
but this is not a right approch to write the code
because it will check all the if statements suppose we enter 91 A will be printed 
but still it will go and check all other statements
   So thats why we use else to terminate unnecessary exeguation of if statements.*/