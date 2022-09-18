#include <iostream>
#include<iomanip>
using namespace std; 
int main(){
    for (float x=0;x<20;x+=0.1){
        cout<<setprecision(8)<<endl; 
        cout<<x<<' ';

        //Disaster, look at the output!

    }
    float sum =0; 
    for (int i=1; i<=5;i++){
        sum =sum+1.0/i;  // make either left side one float or int is a float
        cout<< "sum = " << sum<<endl; 
    }

   //  use float and double

    return 0; 
}