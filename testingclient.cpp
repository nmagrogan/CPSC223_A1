// Testing Client Program for class Key
// filename: testingclient.cpp

#include "key.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   Key firstOne;
   
   cout << endl << endl;    // to move first output away from command prompt 
   
   cout << "          Testing the constructor" << endl;
   cout << "string is empty and will ouput one line showing that" << endl;
   cout << "#" << endl;
   firstOne.write(cout);
   cout << "#" << endl << endl;
   cout << endl << endl;
   
   cout << "          Testing the read from a user and write to the screen " << endl;
   firstOne.read(cin);
   cout << endl;
   cout << "shows result between # signs" << endl;
   cout << "#" << endl;
   firstOne.write(cout);
   cout << "#" << endl << endl;
   cout << endl;
   
   cout << "          Testing the convertToInteger and shows result to the screen" << endl;
   cout << "The coverted number is: " <<  firstOne.convertToInteger() << endl << endl;
   
   cout <<"			  Testing the rightHandSide function" << endl;
   firstOne.assign(/*should have something here, idk what tho*/);
   
   
   
   
   return 0;
}