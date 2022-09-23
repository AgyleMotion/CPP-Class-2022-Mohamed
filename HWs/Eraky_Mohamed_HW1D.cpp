/*
***********************
Author : Mohamed Eraky
***********************
HW1D-sum Reciprocals 
*/

#include <iostream>
#include <iomanip>
using namespace std; 
int main()
{
    float sum1F=0.0f;
    float sum2F=0.0f;
    
    for ( float i=1 ;i <=100;i++){
        sum1F=sum1F +1.0/i ; 
        
            }

    for ( float i=100 ;i >=1;i--){
        sum2F=sum2F +1.0/i ; 
         
            }    

    cout <<"sum1F =" <<sum1F<<",  sum2F =" <<sum2F<<endl; 


    double sum1D =0.0;
    double sum2D =0.0; 

    for ( double i=1 ;i <=100;i++){
        sum1D=sum1D +1.0/i ; 
        
            }

    for ( double i=100 ;i >=1;i--){
        sum2D=sum2D +1.0/i ; 
         
            }    
    cout <<"sum1D =" <<sum1D<<",  sum2D =" <<sum2D<<endl;

    cout <<"sum1F - sum2F = " <<sum1F-sum2F<<endl;
    cout <<"sum1D - sum2D = " <<sum1D-sum2D<<endl;
        

  return 0;
}