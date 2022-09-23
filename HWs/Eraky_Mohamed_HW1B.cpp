/*
***********************
Author : Mohamed Eraky
***********************
HW1B-Polygons-circles
*/

#include <iostream>
#include<cmath>
#include <iomanip>

using namespace std; 
int main()
{
    
    double angle =0.0 ; 
    double sidelength=0.0;
    double r=1.0;
    int i =10;  

    sidelength=2*tan(M_PI/3.0);
    cout<<sidelength<<"--"<<M_PI<<endl;
    for (int n =3; n <=1e6 ; n++ ){
        angle = (n-2)*180.0/(n) ;
        sidelength=2*r*tan(M_PI/n);// circle radius r inscribed a polygon
        r = sidelength/(2*sin(M_PI/n)) ; // circle radius r circu
        if ( n == i){
        cout << setw(5) <<" nside = " <<  n << setw(20) <<", circle radius = " << r << endl; 
        i*=10;
        }
    
    } 
    return 0;
    
}
