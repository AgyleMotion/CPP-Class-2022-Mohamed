
/*
***********************
Author : Mohamed Eraky
***********************
*/

#include <iostream>

int main()
{
    int x; 

    std::cout<< "Please enter a positive integer : " <<std::endl; 
    std::cin >> x ; 
    
    while (x!=1) {

        if ( x%2 !=0 ){
            x= x*3 +1; 
        }else{
            x=x/2; 
        }
       std::cout<<"x = "<< x << std::endl; 
    }
    std::cout<< "Final result: " << x << std::endl; 

  return 0;
}

