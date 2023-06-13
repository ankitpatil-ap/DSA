#include<bits/stdc++.h>
using namespace std;

int main(){
    //Integer datatype
    int x, y, z;
    //cin >> x,y,z; //this is not right way to input this will just take and x value and addres of other variables
    cin>>x>>y>>z;
    cout << "Value of X is: " << x <<" Value of Y is : "<< y <<" Value of z is : "<< z << endl ;
    // this will print value of x y and z which gives in input

    // integer has certain restiction on storeing number within range -2,147,283,648 to 2,147,283,647 
    // 1 integer varible has 4 bytes
    // Range of long is 	-2,147,483,648 to 2,147,483,647 and 4 bytes
    long n = 10 ;
    cout<< "value of n is "<<n;

    //and integer can also be stored in double
    //size of double is 8 bytes and range is 1.7E - 308 to 1.7E + 308.

    double z = 103323.232332;
    cout<<z<<endl;
    //this will give output only 103323 only integer value.

    //to print the very large number we need to use long long
    //range of long long is 	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    
    long long a;
    cin>>a;
    cout<<"Value of A: is : "<<a;
    //long long uses 8 bytes to store the varible.

    


}