#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;

class Contacts
{
	static unsigned int count_instance;
	unsigned int id;
	char* fio;
	char* homePhone;
	char* workPhone;
	char* mobilePhone;
	char* otherInfo;

public:

	Contacts(const char* fio, const char* homePhone, const char* workPhone, const char* mobilePhone, const char* otherInfo) :
		id{ count_instance },
		fio{ fio ? new char[strlen(fio) + 1] : nullptr },
		homePhone{ homePhone ? new char[strlen(homePhone) + 1] : nullptr },
		workPhone{ workPhone ? new char[strlen(workPhone) + 1] : nullptr },
		mobilePhone{ mobilePhone ? new char[strlen(mobilePhone) + 1] : nullptr },
		otherInfo{ fio ? new char[strlen(otherInfo) + 1] : nullptr }
	{
		if (fio && homePhone && workPhone && mobilePhone && otherInfo)
		{
			strcpy_s(this->fio, strlen(fio) + 1, fio);
			strcpy_s(this->homePhone, strlen(homePhone) + 1, homePhone);
			strcpy_s(this->workPhone, strlen(workPhone) + 1, workPhone);
			strcpy_s(this->mobilePhone, strlen(mobilePhone) + 1, mobilePhone);
			strcpy_s(this->otherInfo, strlen(otherInfo) + 1, otherInfo);
		}
		count_instance++;
	};

	char const* getFio() {
		return fio;
	}
	char const* getHomePhone() {
		return homePhone;
	}
	char const* getWorkPhone() {
		return workPhone;
	}
	char const* getMobilePhone() {
		return mobilePhone;
	}
	char const* getOtherInfo() {
		return otherInfo;
	}

	~Contacts() {
		delete[] fio;
		delete[] homePhone;
		delete[] workPhone;
		delete[] mobilePhone;
		delete[] otherInfo;
		count_instance--;
	}

	void show();
};