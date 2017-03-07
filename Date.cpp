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
#include "Date.h"
using namespace std;

Date::Date()
{
	month=0;
	day=0;
	year=0;
}

//accessors
int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

int Date::getYear()
{
	return year;
}

//setters

void Date::set()
{
	cout<<"Enter month: ";
	cin>>month;
	while (month>12||month<1)
	{
		cout<<"Enter a VALID MONTH NUMBER! ";
		cin>>month;
	}
	cout<<"Enter day: ";
	cin>>day;
	while (day>31||day<1)
	{
		cout<<"Enter a VALID DAY NUMBER! ";
		cin>>day;	
	}
	cout<<"Enter year: ";
	cin>>year;
}

void Date::setData(int m, int d, int y)
{
	month=m;
	day=d;
	year=y;
}

void Date::setMonth(int m)
{
	month=m;
}

void Date::setDay(int d)
{
	day=d;
}

void Date::setYear(int y)
{
	year=y;
}

string Date::getMonthName()
{
	string mon[12]={"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	string name="";
	bool found=false;
	for (int i=0;i<12&&!found; i++)
	{
		if (month==(i+1))
		{
			name=mon[i];
			found=true;
		}
	}
	return name;	
}
