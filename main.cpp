#include<iostream>
#include<Windows.h>

using namespace std;

// �������� ���������� "���������� �����".���������� ������� ������ �� �������� (���, �������� �������,
// ������� �������,��������� �������, �������������� ���������� � ��������) ������ ���������������� ������.
// ��������� ����� ����������� - �������, ��������� - �������, ��������������, 
// inline - ��������� - �������, ����������� ��������������, ���������� ����������.
// ����������� ���������� �������� ����������� ������ ��� ���.

int main()
{
	size_t PhoneBookSize{ 5 };
	PhoneBook* contacts{ new PhoneBook[PhoneBookSize] };
	auto contactsEnd{ contacts + PhoneBookSize };
	contacts[0].count{ "Malygin A.V.","22075","5-31-31","+79056407309","Starshiy Mashinist" };
	PhoneBook Anna{ "","","","","" }{};
	PhoneBook Viktor{ "","","","","" };



}