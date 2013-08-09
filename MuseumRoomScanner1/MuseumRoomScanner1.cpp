// MuseumRoomScanner1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void readingData(){
	int line;
	FILE * roomdata;
	roomdata = fopen("roomdata.txt", "r");
	if(roomdata != NULL)
	{
	fscanf(roomdata, "%d", line);
	//convertedLine = atoi(line.c_str());
	int *_roomNumber = new int[line];
	int *_visitorNumber = new int[line];
	char *_IO = new char[line];
	int *_timeStayed = new int[line];

	/*string line2;
	getline(roomdata,line2);*/
		while(roomdata != NULL){
			for(int i=0;i<=line-1;i++)
			{
			fscanf(roomdata, "%d %d %c %d", &_roomNumber[i], &_visitorNumber[i], &_IO[i], &_timeStayed[i]);
			cout << "test" << endl;
			}


		}
	}
}

/*void sortingData(){
	string _roomNumber[100][3];
	string _visitorNumber[1024][4];
	string _IO[2][3];
	string _timeStayed[1439][4];

	for(int i=0;i<convertedLine;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(_stringLine[i][j] != " "){

			_roomNumber[i][j] += _stringLine[i][j];
			cout << "not sure if working" << endl;
			//cout << i << endl;
			//cout << j << endl;
			}
		}
	}


}*/

int _tmain(int argc, _TCHAR* argv[])
{
	try{
	readingData();
	//sortingData();
	}
	catch (...)
	{
    cout << "exception" << endl;
	}

	cin.ignore();
	return 0;
}

