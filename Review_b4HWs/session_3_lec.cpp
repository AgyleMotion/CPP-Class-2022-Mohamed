#include <iostream>
#include <cmath>
using namespace std; 

void Ff () {
    int c; //scope of functionn f has nothing to do with main
    cout <<"helloo"; 
}

void zz ( int a, int b){
     cout << (a+b); 

}
uint32_t x; //gloabaly visiblie anywhere in the program

// global variables are loaded when the progeam loads 
//lifetime is the WholeProgram
// initialized to Zero 
// still good style to set yourself 
uint32_t y=0; 
float z; // initialized when program loads 0.0 
int add (int a, int b); // decelaration " function add exists"
double  min (double a,double b,double c) {

}

double  max (double a,double b,double c) {
    double temp=0; 
 return temp >c? temp:c; 




double  hypot (double a,double b) {
//return (
}

double root1 (double a, double b, double c){
    return << a + disc(b,c); //check discriminant 
}
int main (){
//uint32_t a=3; 
//float b=1.5f;
//double c=2.5; 
//uint32_t e[3]= {1,2,3}; 
//uint32_t f[100] ={13}; 
//scope = where symbol is visible 
//lifetime =when is it born ? when does it die
//uint32_t d[5];  // d[0].. d[1] 

//uint32_t xx[100] ={13};  // f[0]=13, f[1]=0, .... f[99]= 0; 
//uint32_t g[10000] ={0}; // set it all to zero 
//2D array  -- Rows first  & Columns second

//double m[3][2]= {{5,4}, {3,9}, {1,16}}; // all unitialized cells are zero!
// meanwhile,somewhere in memory, stored in row major order!
// it's always safer to go sequentially through memeory 
// look up DDR ram on wikipedia 
//************* ***************** ********
//int x; // defines the variable x
// int x;  //  Cannot define something twice
//void Ff() ; // Declares a function 
//F() ; //called fn
//zz(3,5); 

//***************** funcitons 
double z=hypot (3,4);  //5.0 
cout << min (3.0,4.0,5.0); 
cout << root1(1,2.00001,1); // x^2 +2*X+1; 
cout <<root2 () 


}

