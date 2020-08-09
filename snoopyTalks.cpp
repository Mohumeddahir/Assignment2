/* 
 *this program is intended to produce a new version of the snoopy
 *by adding some new variables in the userInput
 * Author : Khalid
*/


#include<iostream>
using namespace std;

void printMessage()
{
// Declaring my variables
 string userInput;

 cout<<"please type something for snoopy to say? ";
 // capturing the whole string with space 
 getline(cin,userInput);
 // To find the length of the string(userInput)
 int numChars = userInput.length() + 4;
 string stars(numChars, '*');
 cout << stars << endl;
 cout <<"| "<<  userInput << " |"<< " "<< endl; 
 cout << stars << endl;

}

void printSnoopy()
{
  cout << " \\  \n"<< "  \\  \n" << " ,----.____. \n" << "/  | '       \\  \n"<<"(  )          o \n " <<"\\_/-, , ----' \n" << "     ===           // \n" << "    /  \\_'~;    /~~(o) \n" << "   /   ___/~|  /      | \n" << " =(   ______|(________| \n";


}

int main()
{
// main() calls the function in the void() for execution 
printMessage();
printSnoopy();
 return 0;
}
