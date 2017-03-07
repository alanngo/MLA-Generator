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
#include "Source.h"
using namespace std;

Source::Source()
{
	type="";//publication Type
	masterTitle="";//title of the big book
	title="";//title of the source
	pageNumber=0;//page number
	volume=0;//volume
	edition=0;
	place="";
}
string Source::getType()
{
	return type;
}
string Source::getMasterTitle()
{
	return masterTitle;
}
string Source::getTitle()
{
	return title;
}
int Source::getPageNum()
{
	return pageNumber;
}
int Source::getVolume()
{
	return volume;
}
int Source::getEdition()
{
	return edition;
}
string Source::getPlace()
{
	return place;
}
void Source::setMasterTitle(string m)
{
	masterTitle=m;
}
void Source::setPageNum(int n)
{
	pageNumber=n;
}
void Source::set()
{
	cout<<"Enter publication type: ";
	cin>>type;
	
	cout<<"Enter the title of the book or enter 'null' if none exists";
	cin>>masterTitle;
	if (masterTitle=="null")
	{
		setMasterTitle("");
	}
	
	cout<<"Enter the title of the source ";
	cin>>title;
	
	cout<<"Enter the page number or enter 0 if none is present";
	cin>>pageNumber;
	
	cout<<"Enter the volume or enter 0 if none is present";
	cin>>volume;
	
	cout<<"Enter the edition or enter 0 if none is present";
	cin>>edition;
	
	cout<<"Enter place of publication ";
	cin>>place;

}
