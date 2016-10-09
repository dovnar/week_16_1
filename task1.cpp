#include <iostream>
#include <locale.h>
// Отсутствует string.h
using namespace std;

int mystrcmp(const char * str1, const char * str2); //-функция сравнивает две строки, и, если строки равны возвращает 0, 
													//если первая строка больше второй, то возвращает 1, иначе - 1.
int StringToNumber(char * str); //-функция конвертирует строку в число и возвращает это число.
char * NumberToString(int number); //-функция конвертирует число в строку и возвращает указатель на эту строку.
char * Uppercase(char * str1); //-функция преобразует строку в верхний регистр.
char * Lowercase(char * str1); //-функция преобразует строку в нижний регистр.
char * mystrrev(char * str); //-функция реверсирует строку и возвращает указатель на новую строку.


int main()
{
	setlocale(LC_ALL, "rus");
	int count = 10; // count чего?
	char* str1 = new char[count] {'h', 'e', 'l', 'l', 'o', ' ', 'u', 's', 'e', 'r', '\0'}; // это будет работать только в C++11
	char* str2 = new char[count] {'h', 'e', 'l', 'l', 'o', ' ', 'u', 's', 'e', 'r', '\0'};
	char* str = new char[count] {'h', 'e', 'l', 'l', 'o', ' ', 'u', 's', 'e', 'r', '\0'};
	int number = 51; // magic number
	int selekt = 1;
	do
	{
		cout << "mystrcmp = 1\nStringToNumber = 2\n"
			"NumberToString = 3\nUppercase = 4\nLowercase = 5\nmystrrev = 6\nselect function: ";
		cin >> selekt;
		switch (selekt)
		{
		case 1: cout << "функция сравнивает две строки, и, если строки равны возвращает 0, "
			"если первая строка больше второй, то возвращает 1, иначе - 1.\n" << endl << "str1: " 
			<< str1 << endl << "str2: "<< str2 << endl << "result: " << mystrcmp(str1, str2) << endl;
			break; 
		case 2: cout << "функция конвертирует строку в число и возвращает это число. \nstr: " 
			<< str << endl << "result: " << StringToNumber(str) << endl;
			break;
		case 3: cout << "функция конвертирует число в строку и возвращает указатель на эту строку. \nnumber:  " 
			<< number << endl << "result: " << NumberToString(number) << endl;
			break;
		case 4: cout << "функция преобразует строку в верхний регистр\nstr: " << str1 << endl << "result: " << Uppercase(str1) << endl;
			break;
		case 5: cout << "функция преобразует строку в нижний регистр\nstr: " << str1 << endl << "result: " << Lowercase(str1) << endl;
			break;
		case 6: cout << "функция реверсирует строку и возвращает указатель на новую строку\nstr: " 
			<< str << endl << "result: " << mystrrev(str) << endl;
			break;
		default: selekt = 0;
			break;
		}
	} while (selekt != 0);
	// Нужно высвобождать память
}

int mystrcmp(const char * str1, const char * str2)
{
	// Вы должны были сами реализовать функцию сравнения, а не использовать готовую
	int result = strcmp(str1, str2);
	return result;
}

int StringToNumber(char * str)
{
	// Вы должны были сами реализовать функцию сравнения, а не использовать готовую
	int number = atoi(str);	
	return number;
}

char * NumberToString(int number)
{
	// Функция не работает на больших числах
	char* str = new char[2];
	str[0] = number + '0';
	str[1] = 0;
	return str;
}

char * Uppercase(char * str1)
{
	// Вы вообще проверяли работу программы? Тут написана полная бессмыслица.
	str1 -= '32';
	return str1;
}

char * Lowercase(char * str1)
{
	// Вы вообще проверяли работу программы? Тут написана полная бессмыслица.
	str1 += '32';
	return str1;
}

char * mystrrev(char * str)
{
	int len = strlen(str);
	char* newStr = new char[len];
	for (int i = 0; i < len; i++)
	{
		newStr[i] = str[len - 1 - i];
	}
	return newStr;
}
