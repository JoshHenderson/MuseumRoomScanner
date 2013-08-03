// MuseumRoomScanner1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void readingData(){
	string line;
	ifstream roomdata ("roomdata.txt");
	if(roomdata.is_open())
	{
	getline(roomdata,line);
	int convertedLine = atoi(line.c_str());
	string *_stringLine = new string[convertedLine];
		while(!roomdata.eof()){
			for(int i=0;i<=convertedLine-1;i++)
			{
				getline (roomdata, _stringLine[i]);
				//cout << _stringLine[i] << endl;
				//for testing the loop
			}


		}
	}
}

void sortingData(){
	string *_roomNumber = new string[100];
	string *_visitorNumber = new string[1024];
	string *_IO = new string[2];
	string *_timeStayed = new string[1439];




}

int _tmain(int argc, _TCHAR* argv[])
{
	try{
	readingData();
	}
	catch (...)
	{
    cout << "exception" << endl;
	}

	cin.ignore();
	return 0;
}

