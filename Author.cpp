//******************************************************************
// Template Program
// Programmer: Alan Ngo
// Completed : November 12 2016
// Status    : Complete
//
// This program will be used to... 
//******************************************************************
/* PROMPT*/
#include <iostream>				// for cin, cout, endl
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include "Author.h"
using namespace std;

Author::Author()
{
	firstName="";
	lastName="";
}
string Author::getFirstName()
{
	return firstName;
}
string Author::getLastName()
{
	return lastName;
}
void Author::set()
{
	cout<<"Enter first name ";
	cin>>firstName;
	
	cout<<"Enter last name ";
	cin>>lastName;
}
