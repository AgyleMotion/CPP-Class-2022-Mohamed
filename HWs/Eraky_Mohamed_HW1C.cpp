
/*
***********************
Author : Mohamed Eraky
***********************
This program sums the numbers from 1 to 100 using Gauss formula and for-loop.
*/

#include <iostream>

int main()
{
    int n = 100;
    int G_sum = 0; 
    int L_sum = 0;

    G_sum = n*(n+1)/2 ;
    
    std::cout<< "Summing numbers from 1 to 100 : " <<std::endl; 
    
    // Calculate the answer using loop

    for (int i= 1; i<=100;i++){
        
         L_sum=L_sum+i;

    }

    //  compare answers

    if ( L_sum == G_sum){
        
        std::cout<< " Gauss sum : " <<  G_sum << "\n" << " Loop sum : "<< L_sum << std::endl;
        std::cout<< " Both results are the same! " << std::endl; 

    }else{
       std::cout<< " Results doesn't match! " << std::endl; 
    }
  
  return 0;
}

