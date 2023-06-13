#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18 ){
        cout<<"You are not eligible for Job ";
    }
    else if(age <57){
        cout<<"You are eligible for Job ";
        if(age > 54){
            cout<<"But retirement soon ";
        }
    }
    else{
        cout<<"Retire Now.";
    }
    return 0;
}
/*Yes we can use ifelse inside ifelse statement when we have multiple condition and
need to print multiple statements we can use nestedifelse.*/