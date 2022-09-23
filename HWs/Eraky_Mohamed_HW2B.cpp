/*
***********************
Author : Mohamed Eraky
***********************
HW2B-isPrime! 
*/

#include <iostream>
#include <cmath>


using namespace std;



bool isPrime(int n){
    if (n==0 || n==1){
        return false;

    }else if(n==2){
        return true;
    }
    else{
        for (int i = 2; i< n;i++ ){
            if(n % i == 0){
                return false;}

        }
  
    }
    return true;
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

       
        isPrime(n) ? cout<< "The number " << n << " is : PRIME ":cout << "The number " << n << " is: Not PRIME " <<endl;
  return 0;
}