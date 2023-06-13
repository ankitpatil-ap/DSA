#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3]; // this is the array of 2 rows and 3 coloums.
    arr[1][1]= 1;
    cout<<arr[1][1]<<endl;
    cout<<arr[1][2];
    return 0;    

}
/*Output of this is 1  4201051 here 1 is printed because we declared it on that location
but rest of location can't be empty so 4201051 is garbage value which is autoassigned.*/


/* In 2d Array 1st bracket denote number of rows and 2nd denote number of colum of matrix
2d array is used in solving complex problem such as graph and matrix.*/