#include<iostream>
#include<Windows.h>
#include"Contacts.h"
#include"PhoneBook.h"

using namespace std;

// �������� ���������� "���������� �����".���������� ������� ������ �� �������� (���, �������� �������,
// ������� �������,��������� �������, �������������� ���������� � ��������) ������ ���������������� ������.
// ��������� ����� ����������� - �������, ��������� - �������, ��������������, 
// inline - ��������� - �������, ����������� ��������������, ���������� ����������.
// ����������� ���������� �������� ����������� ������ ��� ���.

int main()
{
	size_t PhoneBookSize{ 5 };
	PhoneBook* contact{ new PhoneBook[PhoneBookSize] };
	auto contactsEnd{ contact + PhoneBookSize };
	contact[0].count{ "Malygin A.V.","22075","5-31-31","+79056407309","Starshiy Mashinist" };
	PhoneBook Anna{ "","","","","" }{};
	PhoneBook Viktor{ "","","","","" };
	contact.;


}