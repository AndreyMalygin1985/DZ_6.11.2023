#include<iostream>
#include<Windows.h>

using namespace std;

// Создайте приложение "Телефонная книга".Необходимо хранить данные об абоненте (ФИО, домашний телефон,
// рабочий телефон,мобильный телефон, дополнительная информация о контакте) внутри соответствующего класса.
// Наполните класс переменными - членами, функциями - членами, конструкторами, 
// inline - функциями - членами, используйте инициализаторы, реализуйте деструктор.
// Обязательно необходимо выделять динамически память под ФИО.

int main()
{
	size_t PhoneBookSize{ 5 };
	PhoneBook* contacts{ new PhoneBook[PhoneBookSize] };
	auto contactsEnd{ contacts + PhoneBookSize };
	contacts[0].count{ "Malygin A.V.","22075","5-31-31","+79056407309","Starshiy Mashinist" };
	PhoneBook Anna{ "","","","","" }{};
	PhoneBook Viktor{ "","","","","" };



}