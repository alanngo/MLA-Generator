#ifndef Date_H
#define Date_H
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
class Date
{
	private:
		int month;
		int day;
		int year;
	
	public:
		//constructor
		Date();
		
		//accessor
		int getMonth();
		int getDay();
		int getYear();
		
		//setter
		void set();
		void setData(int m, int d, int y);
		void setMonth(int m);
		void setDay(int d);
		void setYear(int y);
		
		//other functions
		string getMonthName();
		
		
};//end of class
#include "Date.cpp"
#endif 

