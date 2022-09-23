/*
***********************
Author : Mohamed Eraky
***********************
HW1F! 
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
    float n=0;
    float sum1 =0 ; 
    float result1=0.0;
    double sum2 = 0.0;
    double sum3 = 0.0;
    double result2=0.0; 
    double result3=0.0;
 
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
        for (float i=1; i<=n;i++ ){
            sum1 =sum1 + 1/(i*i);          
        }
        result1 = sqrt(6 * sum1);
        cout <<"result1 = " << result1<<endl;
         
    }
    double nn=50000*n;
   
    
        for (double i=1; i<=nn;i++ ){
            sum2 =sum2 + 1/(i*i);          
        }
        result2 = sqrt(6 * sum2);
        cout << setprecision(20) <<"result2 = " << result2<<endl;

        for (double i=nn; i>=1;i-- ){
            sum3 =sum3 + 1/(i*i);          
        }
        result3 = sqrt(6 * sum3);
        cout << setprecision(20)<<"result3 = " << result3<<endl;
        cout <<" result 3 is more accurate" <<endl;

  return 0;
}