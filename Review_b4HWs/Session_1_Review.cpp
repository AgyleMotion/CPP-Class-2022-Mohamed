
#include <iostream>
#include <cmath>

using namespace std; 
int main() {  
/*
uint32_t is a numeric type that guarantees 32 bits. 
The value is unsigned, meaning that the range of values goes from 0 to 2^32 - 1
*/

  // Review Session 1

    cout << sizeof(uint32_t) << "\n";
    long int b = 2000000000L;
	cout << b << '\n';
	uint32_t u = 4144444444;


    double pi = acos(-1.0);
    double degrees = 90;
    double angle = degrees * 2. * pi / 360.0;

// ******************************************
    cout<< angle <<endl; 
    cout<< "*****************************" <<endl; 
    cout << 7 * 24 * 60 * 60 << '\n';
	cout << 365 * 24 * 60 * 60 << '\n';
	cout << 69 * 365 * 24 * 60 * 60 << '\n';

//  *****************************************
//  "At least one number should be long or long long" // 

    long age = 138;
    uint64_t agex; 
    agex= age * 365 * 24 * 60 * 60 ; 
    cout << "age_in_seconds =" <<agex<<endl; 

	//cout << age * 365 * 24 * 60 * 60 << '\n';
	//type promotion: when two types are different, promote the smaller
	// 3 + 2L

// Data types : 
/*
Type Name	   Bytes	Range of Values
1	int	4	-2^31 to 2^31- 1
2	Long int	4	-2^31 to 2^31 – 1
3	Long long int	8	-2^63 to 2^63 – 1

unsigned short	2	    0 to 65,535
int             4       -2147483648 to 2147483647
long	        4	    -2,147,483,648 to 2,147,483,647
unsigned long	4	    0 to 4,294,967,295
long long	    8	    -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

*/
	cout << sizeof(0LL) << '\n'; // LL is long long
    uint64_t secondsInAge = age * 365LL * 24 * 60 * 60;
	cout << secondsInAge << '\n';
  
/* 


*/

    cout << 2 + 3 * 4 << '\n';
	cout << 2 * 3 / 2 << '\n';
	cout << 2 / 3 * 3 << '\n';   // Zero 
	cout << 2 / 3.0 * 3 << '\n'; // 2 
    cout << 2.0 / 3 * 3 << '\n'; // 2 
	cout << 2 / 3 * 2.0 << '\n'; // zero
    
   //  unsigned int >> -2147483648 to 2147483647 
   //  signed   int >> 0           to 4294967295









    return 0; 
}