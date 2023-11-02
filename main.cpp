#include<iostream>
#include<Windows.h>
#include"Contacts.h"
#include"PhoneBook.h"

using namespace std;

// Создайте приложение "Телефонная книга".Необходимо хранить данные об абоненте (ФИО, домашний телефон,
// рабочий телефон,мобильный телефон, дополнительная информация о контакте) внутри соответствующего класса.
// Наполните класс переменными - членами, функциями - членами, конструкторами, 
// inline - функциями - членами, используйте инициализаторы, реализуйте деструктор.
// Обязательно необходимо выделять динамически память под ФИО.

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