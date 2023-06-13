#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Ankit";
    int len = s.size();
    s[len-1] = 'k'; 
    cout<<s[len -1]; //it will print k as we have updated t to k above.
    //cout<<len; //it will print 5 total size of string.
    //cout<<s[2]; //it will print k as k is on 2nd index
}