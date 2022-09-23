#include <iostream>

using namespace std; 

class Fraction {

private: 
    int num, den; 
public:

    Fraction (){
        num = 0; 
        den = 1;
    }
    // if it's ovious for the constructor otherwise it will give error ; 
    Fraction (int n, int d){
        num = n; 
        den = d;
    } 
    
    void print(){
        cout <<num << "/"<<den;
    }

}; 

int main () {
Fraction a;
Fraction b(1,2); 
Fraction a;  //create your own data type 
a.print(); 
cout << "/"; 
b.print()


}