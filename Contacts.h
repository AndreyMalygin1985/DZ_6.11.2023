#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;

class Contacts {

	char fio[256];
	char homePhone[15];
	char workPhone[15];
	char mobilePhone[15];
	char otherInfo[256];

	void show()
	{
		cout << "Name: " << fio << "\t HP: " << homePhone << "\tWP: " << workPhone
			<< "\tMP: " << mobilePhone << "\t Other - " << otherInfo << endl;
	}
};