#include<bits/stdc++.h>
using namespace std;
int main(){
    //size std::string	24 bytes
    //string s1,s2;
    //cin >> s1;
    //here will give input as Hello Ankit.
    //cout<<s1;
    /*but it prints only Hello
    because string only picks up anything before the space thats why it print only hello */
   //cin>> s1>> s2;
   //cout<<s1 <<s2;
   // Now this print HelloAnkit 
   //but what if we need to print all word in line for that we need to define string and use getline function
   string str;
   getline(cin,str);
   cout<<str;
   //Now this will print complete line we define "Hello Ankit Welcome to C++"
   //

}