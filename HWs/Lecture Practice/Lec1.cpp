
// github/cpp/tree/master/BUGS
//selftest (object-oriented terminology)
// du -sh   terminal to display the size 

#include <iostream>
using namespace std; 

int main (){

    // variables declared in a function (auto, whatver on the stack!) ( 32 bit by default) 
    // it's never signed or signed by default!

    int b =3; 
    int c=2100000000;
    int d=-2100000000;

    unsigned int e= 4200000000; 

    if ( e >0) { //never happen

    long a1 = 12345678901L;  // you have to add L for long numbers
    long int a2 =3;  //type promotion automatically 

    cout<< a1 <<endl; 

    short a3 =123; // autoatically conver to int to short //16 bits 2**16=65536
    //-32768 ... 32767
    short int a4 = 32767;  // max ends with 7
    signed long long   a5= 123456789012345678LL;  // to tell him it's not integer 64 bit   
    unsigned long long a8= 123456789012345678ULL; 
    cout<< a4 <<endl; 
    signed char b = 'a'; //97  -- ascii variables

    bool george =false;
    george =true; 
    george = 19; // don't do this, but it works ? anything non-zero is true, not favorable but works
    // floating point is IEEE754 standards +/-  1.2345678 e+23
    // 1.23
    //12.3
    //123.

    float f=1.5f; // if only  1.5 it will be double takes time to convert // 32 bits
    double f2= 1.23456789012345;
    long double f3; // more? maybe = double , there also quad precision

{  // scope 
    // Do not use legacy integer types for a new program
    // do not change existing legacy program without massive testing
    uint8_t  a1;
    uint16_t a2;
    uint32_t a3;
    uint64_t a4; 
    int8_t   a5=127;
    int16_t  a6=32767; 
    int32_t  a7=1; 
    int64_t  a8 =1;

}
    }

    for (int i=1; i<=10;i++){
        cout <<i; 
    }
    for ( int i=0; i<10;i++){
        cout <<i; 
    }

    for (int i=0; i>=0; i--){
        cout << i<< ' '; 
        cout <<"blastoff!";
    }

    //watch out for this classic one 
/*

for (uint32_t i=0; i>=0; i--){
        cout << i<< ' '; 
        cout <<"blastoff!";
    }

  how to solve this just delete u from uint

  // --i or i-- are the same !

*/
int count =0; 

while (count <10){

count+=1; 
}
/*
while ( true) {

}
*/
/*
for ( ; ;){
    // do this forever
}
*/
/*
for ( int i=0; ;i++ ){
    // do this forever
    cout << i <<endl; 
}


for ( int i=1; i<=100; i=i*2){


}

*/ 

// Operators 

// + - * / % << mod percentage 
// x+=3; x-=4; x*=2; x=x*2; x/=7; x%=6;
// scope is the place the variable is visible 
for ( uint32_t i=1 ; i<1024; i*= 3){
    cout<<i;  // x=1,3,9,...
}

for ( uint32_t x=1 ; x<100; x= x*2+1){
    cout<<x;  // x=1,3,9,...
}

//*********************************************************//
// .101011000
// 10.0000000000000000
{
float f2 =1.2345678e+38f;
float f3=1.23e-38f; 

}
// Rule add small numbers first
// Support at least 25! for HW


    return 0; 
}