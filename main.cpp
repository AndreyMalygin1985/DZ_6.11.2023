﻿#include<iostream>
#include<Windows.h>
#include"PhoneBook.h"

using namespace std;
unsigned int Contacts::count_instance{ 1 };

// Создайте приложение "Телефонная книга".Необходимо хранить данные об абоненте (ФИО, домашний телефон,
// рабочий телефон,мобильный телефон, дополнительная информация о контакте) внутри соответствующего класса.
// Наполните класс переменными - членами, функциями - членами, конструкторами, 
// inline - функциями - членами, используйте инициализаторы, реализуйте деструктор.
// Обязательно необходимо выделять динамически память под ФИО.

int main()
{
	SetConsoleOutputCP(1251);

	Contacts subscriber0("Атомули Ядалато", "2-22-77", "1:31:31",   "+79000000000", "Подбиратель мячей для гольфа");
	Contacts subscriber1("Накосика Сукасена", "2-20-66", "2:31:31", "+79111111111", "Реальный продавец нереальных вещей");
	Contacts subscriber2("Ятасука Накомоде", "5-20-75", "3:31:31",  "+79222222222", "Вытаскиватели скрепок");
	Contacts subscriber3("Мояхата Сыровата", "2-40-75", "4:31:31",  "+79333333333", "Наблюдающий за тем, как сохнет краска");
	Contacts subscriber4("Комухари Комусиси", "2-55-75", "5:31:31", "+79444444444", "Контролер качества костей для игры");
	Contacts subscriber5("Томимо Токосо", "2-11-10", "6:31:31",     "+79555555555", "Мастер по педикюру для дойных коро");
	Contacts subscriber6("Толисику Толикаку", "2-33-33", "7:31:31", "+79666666666", "Заталкиватель пассажиров");
	Contacts subscriber7("Херанука Пороялю", "5-20-88", "8:31:31",  "+79777777777", "Сборщики червей");
	Contacts subscriber8("Тояма Токанава", "6-20-75", "9:31:31",    "+79888888888", "Выравниватель подушек");
	Contacts subscriber9("Совсейдури Охерачу", "4-24-05", "55:31:31","+79999999999", "Туалетный гидt");
	
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