#include <iostream> 
using namespace std; 
void zero( double & a){
    a=0.0; 
}
int main(){ 

 double a=3.0; 
 zero(a);
 cout <<a; 

}