#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cin >>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    //cout<<arr[3]; if we print it here the arr[3] += 10 will not do sum it will concatinate

    arr[3] += 10;
    cout<<arr[3];
    return 0;
}
/*array is stored at perticular consigative memmory location which points to 
0th position of an array.
array is collection of similar data types*/