#pragma once
#include<iostream>
#include<Windows.h>
#include"Contacts.h"

using namespace std;

class PhoneBook {
	Contacts* contact;
	size_t sizePhoneBook;

	/*void show()
	{
		cout << "Name: " << fio << "\t HP: " << homePhone << "\tWP: " << workPhone
			<< "\tMP: " << mobilePhone << "\t Other - " << otherInfo << endl;
	}
	PhoneBook(char p_fio, char p_homePhone, char p_workPhone, char p_mobilePhone, char p_otherInfo)
	{
		fio = p_fio;
		homePhone = p_homePhone;
		workPhone = p_workPhone;
		mobilePhone = p_mobilePhone;
		otherInfo = p_otherInfo;
	}*/
};