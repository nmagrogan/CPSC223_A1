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

#include "key.h"

// creates an empty key / texting abbreviation
Key::Key(){
	textingAbbreviation = "";
	int userAnswer = 0;
}

// destroys a key
Key::~Key(){
	
}

// reads a texting abbreviation from a file or the user
void Key::read(istream& inputstream){
	int userAnswer;
	
	
	cout << "Would you like to type in the abbreviation or load it from a file? (type 1 for typing in and 2 for load from a file)" << endl;
	cin >> userAnswer;
	
	if ( userAnswer == 1){
		cout << "Enter your abbreviation: ";
		cin >> textingAbbreviation;
	}
	else if (userAnswer == 2){
		//read from file in.dat and out.dat
		ofstream userAbbreviationFile;
		userAbbreviationFile.open("in.dat");
		cout << "Enter your abbreviation : ";
		cin >> textingAbbreviation;
		userAbbreviationFile << textingAbbreviation;
		userAbbreviationFile.close();
		
		
	}
	else {
		cout << "That is not a valid answer, please enter a valid answer\n";
		read(cin);
	}
	
}

// writes a texting abbreviation to a file or the screen
void Key::write(ostream& outputstream){
	cout << "You're texting abbreviation is : " << textingAbbreviation << endl;
}

// computes an integer from a texting abbreviation
int Key::convertToInteger(){
	int total = 0;
	cout << "I will now convert the texting abbreviation into its value" << endl;
	for (int i = 0; i < textingAbbreviation.length(); i++){
		//find the ascii value through some method
		cout << "The " << i << " letter is equal to: " << int(textingAbbreviation[i]) << endl;
		total = total + int(textingAbbreviation[i]); //the ascii value
	}
	
	return total;
}


// copies rightHandSideKey’s texting abbreviation to Key object’s texting abbreviation
// it is the replacement for an assignment statement
// eventually we will do this differently


void Key::assign(/*there should be something here, idk what*/){
	cout << "here is what assign should do" << endl;
}


