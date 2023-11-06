#include "PhoneBook.h"

void Contacts::show()
{
	cout << "Пользователь: " << id << endl;
	cout << "ФИО: " << fio << endl;
	cout << "Дом тел: " << homePhone << endl;
	cout << "Раб тел: " << workPhone << endl;
	cout << "Моб тел: " << mobilePhone << endl;
	cout << "Доп инфа: " << otherInfo << endl;
}