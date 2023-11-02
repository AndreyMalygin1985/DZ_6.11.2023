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
	
public:
	
	/*void fillByUser();
	{
		cout << "”кажите ‘»ќ: ";
		cin >> fio;
		cout << "”кажите домашний телефон: ";
		cin >> homePhone;
		cout << "”кажите рабочий телефон: ";
		cin >> workPhone;
		cout << "”кажите мобильный телефон: ";
		cin >> mobilePhone;
		cout << "”кажите дополнительную информацию о контакте: ";
		cin >> otherInfo;
	}*/

	void show()
	{
		cout << "Name: " << fio << "\t HP: " << homePhone << "\tWP: " << workPhone
			<< "\tMP: " << mobilePhone << "\t Other - " << otherInfo << endl;
	}
};