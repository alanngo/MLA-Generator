//******************************************************************
// Template Program
// Programmer: Alan Ngo
// Completed : November 12 2016
// Status    : Complete
//
// This program will be used to create MLA works cited page
//******************************************************************
/* 
*/
#include <iostream>				// for cin, cout, endl
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include "Date.h"
#include "Author.h"
#include "Source.h"
using namespace std;
//start of debug function
template<typename dataType>
void debug(dataType x)
{
	cout<<"******Debug Start******"<<endl;
	cout<<"Value is "<<x<<endl;
	cout<<"******End Debug******"<<endl;
}//debug function

void input(Date &pubDate, Date &accDate, Author& pub, Source&src)
{
	cout<<"Entering the date accessed"<<endl;
	accDate.set();
	cout<<"Entering the date published"<<endl;
	pubDate.set();
	while (pubDate.getYear()>accDate.getYear())
	{
		cout<<"Your published year SHOULD NOT be later than your accessed year!"<<endl;
		accDate.set();
		pubDate.set();
	}
	
	cout<<"Entering the author "<<endl;
	pub.set();
	
	cout<<"Entering the Source "<<endl;
	src.set();	
}
void output(Date &pubDate, Date &accDate, Author& pub, Source&src)
{
	ofstream outfile;
	outfile.open("WorksCited.txt");
	outfile<<pub.getLastName()<<", "<<pub.getFirstName()<<". "<<src.getTitle()<<src.getPlace()<<endl;
	outfile<<src.getMasterTitle()<<","<<endl//add here later
	outfile.close();
}
int main()						
{ 
	Date pubDate;//published date
	Date accDate;//accessed date
	Author publisher;//publisher
	Source book;//source
	input(pubDate, accDate, publisher, book);
	output(pubDate, accDate, publisher, book);
 return 0;
}   // end of main function
