/*
***********************
Author : Mohamed Eraky
***********************
HW2B-isPrime! 
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool isprime =false; 

void isPrime(int n){
    if (n==0 || n==1){
        cout<< "The number " << n << " is: NOT PRIME " <<endl;

    }else if(n==2){
        cout<< "The number " << n << " is: PRIME " <<endl;
    }
    else{
        for (int i = 2; i< n;i++ ){
            if(n % i == 0){
                isprime =false;
                break;
                
            }else{
                isprime =true;
    
            }
        }
        if (isprime == true){
            cout<< "The number " << n << " is : PRIME " <<endl;
        }else if(isprime ==false){
            cout<< "The number " << n << " is : NOT PRIME " <<endl;
        }
  
    }

}
int main()
{
    int n=0;
  
    cout << " Enter a positive integer \n " ;
    cin>>n;  

    while (n <  0 ){
       
        cout << " NO!, Enter a positive integer \n " ;
        cin>>n;
        }
       
    while (floor (n)!=n ) {
        cout << " NO!, Enter a whole positive integer \n " ;
        cin >>n;  
        }

        isPrime(n);
    
  return 0;
}