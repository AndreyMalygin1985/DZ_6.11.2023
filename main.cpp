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
	SetConsoleOutputCP(1251);
	//size_t PhoneBookSize{ 5 };
	//PhoneBook* contact{ new PhoneBook[PhoneBookSize] };
	//auto contactsEnd{ contact + PhoneBookSize };
	Contacts subscriber0("������� �������", "2:22:77", "1:31:31",   "+79000000000", "����������� ����� ��� ������");
	Contacts subscriber1("�������� ��������", "2:20:66", "2:31:31", "+79111111111", "�������� �������� ���������� �����");
	Contacts subscriber2("������� ��������", "5:20:75", "3:31:31",  "+79222222222", "������������� �������");
	Contacts subscriber3("������� ��������", "2:40:75", "4:31:31",  "+79333333333", "����������� �� ���, ��� ������ ������");
	Contacts subscriber4("�������� ��������", "2:55:75", "5:31:31", "+79444444444", "��������� �������� ������ ��� ����");
	Contacts subscriber5("������ ������", "2:11:10", "6:31:31",     "+79555555555", "������ �� �������� ��� ������ ����");
	Contacts subscriber6("�������� ��������", "2:33:33", "7:31:31", "+79666666666", "������������� ����������");
	Contacts subscriber7("�������� �������", "5:20:88", "8:31:31",  "+79777777777", "�������� ������");
	Contacts subscriber8("����� ��������", "6:20:75", "9:31:31",    "+79888888888", "������������� �������");
	Contacts subscriber9("���������� �������", "4:24:05", "55:31:31","+79999999999", "��������� ���t");
	subscriber0.show();
	cout << endl;
	subscriber1.show();
	cout << endl;
	subscriber2.show();
	cout << endl;
	subscriber3.show();
	cout << endl;
	subscriber4.show();
	cout << endl;
	subscriber5.show();
	cout << endl;
	subscriber6.show();
	cout << endl;
	subscriber7.show();
	cout << endl;
	subscriber8.show();
	cout << endl;
	subscriber9.show();


	return 0;
}