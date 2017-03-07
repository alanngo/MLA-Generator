#ifndef Source_H
#define Source_H
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
class Source
{
	private:
		string type;//publication Type
		string masterTitle;//title of the big book
		string title;//title of the source
		int pageNumber;//page number
		int volume;//volume
		int edition;
		string place;
	
	public:
		//constructor
		Source();
		
		//get
		string getType();
		string getMasterTitle();
		string getTitle();
		int getPageNum();
		int getVolume();
		int getEdition();
		string getPlace();
		
		//set
		void setMasterTitle(string m);
		void setPageNum(int n);
		void set();
};//end of class
#include "Source.cpp"
#endif 

