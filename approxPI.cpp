/*
 *This program is to find the exact value of PI
 * after one million iterations 
 * Author : Khalid 
*/



#include <iostream>
using namespace std;

void areaCircle(){
// declaration of the variables and intializing them
 double nextTerm = 1;
 double denom    = 1;
 double series   = 0;
// Find the exact value of PI in a 4 loop 
 for (int i=0; i<=1000000; i++){
 series = series+nextTerm/denom;
 denom = denom+2;
 nextTerm = nextTerm*(-1) ;
}

       series = series*4;
 cout<< " My estimated value for Pi is " << series << endl;
// delaring the variable for the radius of the circle 
 int radius;
 cout << " Give me any radius? ";
 cin >> radius;
 
 float area;
// calculating the area of the circle using the formula 
        area = series*radius*radius;
 cout << " The area of the circle with radius " << radius << " is " << area << endl;


}

int main(){
// calling the void() function in the main() for execution 
  areaCircle();
return 0;
}
