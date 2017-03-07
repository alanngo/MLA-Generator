#ifndef Author_H
#define Author_H
#include <iostream>				// for cin, cout, endl
#include <cmath>
#include <iomanip>
#include <fstream>
#include <string>
#include <iomanip>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class Author
{
	private:
		string firstName;
		string lastName;
	
	public:
		//constructor
		Author();
		
		//get	
		string getFirstName();
		string getLastName();
		//set
		void set();
};//end of class
#include "Author.cpp"
#endif 

