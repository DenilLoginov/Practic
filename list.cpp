#include "list.h"
void addlist()
{
	pos = new list;
	pos = first;
	while (pos != NULL)
	{
		last = pos;
		pos = pos->next;
	}
	cout << "Введите имя\n";
	cin >> pos->name;
	cout << "Введите специальность\n";
	cin >> pos->spec;
	cout << "Введите возраст\n";
	cin >> pos->age;
	last->next = pos;
	pos->next = NULL;
	last = pos;
}
void firstlist()
{
	first = new list;
	cout << "Введите имя\n";
	cin >> first->name;
	cout << "Введите Специальность\n";
	cin >> first->spec;
	cout << "Введите возраст";
	cin >> first->age;
	first->next = NULL;
	last = first;
}