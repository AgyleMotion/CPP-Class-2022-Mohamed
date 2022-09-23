/*
***********************
Author : Mohamed Eraky
***********************
HW1E-nFactorial n! 
*/

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std; 

int main()
{
    double n=0;
    
    long double fact =1 ; 
    
    cout << " Enter a positive integer \n " ;
    cin>>n;  

    while (n <  0 ){
       
        cout << " NO!, Enter a positive integer \n " ;
        cin>>n;
        }
       
    while (floor (n)!=n ) {
        cout << " NO!, Enter a whole positive integer \n " ;
        cin>>n;  
        }

    if (n >=  0 && floor(n)==n){
       

        for (double i=1; i<=n;i++ ){
            fact *=i; 
           
        }
         cout <<"Factorial n = "<< (int)n <<"! = "<< fact<<endl; 
    }
       

  return 0;
}