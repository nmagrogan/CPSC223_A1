// ADT Key (Texting Abbreviation)
// Specification file for ADT Key (Testing Abbreviation)
//    data object: a key or texting abbreviation (unique)
//    operations: create an empty key, destroy a key
//                read a key from a file, write a key to a file
//                read a key from the user, write a key to the screen,
//                convert a key to a number (for what's coming in Dictionary)

// filename: key.h
// author: class members
// date: August 31, 2018

#ifndef KEY_H
#define KEY_H

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Key
{
public:

// creates an empty key / texting abbreviation
Key();

// destroys a key
~Key();

// reads a texting abbreviation from a file or the user
void read(istream& inputstream);

// writes a texting abbreviation to a file or the screen
void write(ostream& outputstream);

// computes an integer from a texting abbreviation
int convertToInteger();

void assign(/*const Key& rightHandSideKey*/);

private:
   string textingAbbreviation;
   int userAnswer;
};
#endif