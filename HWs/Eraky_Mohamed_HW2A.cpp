
/*
***********************
Author : Mohamed Eraky
***********************
This C++ code generates NOAA windchill table. 
Formulas are referenced in the link down below. 
https://www.weather.gov/safety/cold-wind-chill-chart
References:-
https://cplusplus.com/reference/iomanip/

*/

#include <iostream>
#include <cmath> 
#include <iomanip>

int main()
{
    
    float windChill= 0.0f; 
    std::cout<<"----------------------------------------------------------------------------------\n";
    
    std::cout<<" \t\t\t\t Wind Chill Chart \n\n";
    std::cout<<"\t\t\t\t"<<" Temperature (F)\n\n";  


    for (int T= 40; T >=-45 ; T-= 5){

        if(T <10 && T > -10){
            std::cout<<std::setw(5)<<T;
        }else if (T == 40){
                std::cout<<std::setw(8)<<T;
        }else {
            std::cout<<std::setw(5)<<T;
        }
    }

    std::cout<< "\n" ;
    for (int i=0 ;i< 31 ;i++){
        if (i==0){
            std::cout<<"   ";
        }else{
            std::cout <<"---";
        }

    }
    std::cout<<"\n" ;

    for( int V = 5; V <= 60 ; V+=5 ) {

        if(V <10){
            std::cout<<V <<std::setw(3)<<"|";
        }else if( V<100){
            std::cout<<V <<std::setw(2)<<"|";
        }
         
        for (int T= 40; T >=-45 ; T-= 5){
            windChill =35.74+ 0.6215 * T -35.75*pow(V,0.16)+0.4275*T*pow(V,0.16);
            std::cout << std::setw(4)<<round(windChill)  << " "; 
        }
            std::cout <<std::endl; 
    }

  return 0;
}

