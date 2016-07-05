#include "Queue.h"

Queue queue_object;
int number = 0;

int main()
{
	setlocale(LC_ALL, "RUS");
	do
	{
		system("cls");
		cout << "F1 Add an element\n";
		cout << "F2 Delete an element from the queue\n";
		cout << "F3 Show the queue\n";
		cout << "F4 Exit\n";
		int element_counter;
		int flag;
		int key_choice = _getch();
		switch (key_choice)
		{
		case 59:
			system("cls");
			cout << "Adding element to the queue:\n";
			element *list;
			number++;
			list = new element;
			list->counter = number;
			cout << "Enter the birth date\n";
			cin >> list->Date;
			cout << "Enter the name\n";
			cin >> list->name;
			cout << "Enter the age\n";
			cin >> list->age;
			cout << "Enter the specialty\n";
			cin >> list->spec;
			system("cls");
			if (queue_object.enqueue(list))
				cout << "Error";
			else
				cout << "Element has been added\n";
			flag = 1;
			while (flag)
			{
				cout << "\tContinue?\t\n Yes-1 / No-0\n"; cin >> flag;
				if (flag == 1)
				{
					number++;
					list = new element;
					list->counter = number;
					cout << "Enter the date\n";
					cin >> list->Date;
					cout << "Enter the name\n";
					cin >> list->name;
					cout << "Enter the age\n";
					cin >> list->age;
					cout << "Enter the specialty\n";
					cin >> list->spec;
					system("cls");
					if (queue_object.enqueue(list))
						cout << "Error";
					else
						cout << "Element has been added\n";
				}
			}
			break;
		case 60:
			system("cls");
			list = queue_object.dequeue();
			if (list != NULL)
			{
				printf("|%3d|%10s|%20s|%20s|%20s|\n", list->counter, list->Date, list->name, list->age, list->spec);
				delete list;
			}
			else cout << "Queue is empty";
			system("pause");
			break;
		case 61:

			system("cls");
			printf("\n+-----------------------------------------------------------------------------+\n");
			printf("| ID|   Date   |        name      |        age       |       specialty          |\n");
			printf("+-------------------------------------------------------------------------------+\n");
			element_counter = 1;
			while (element_counter <= queue_object.size_of_list())
			{
				list = queue_object.show_list(element_counter);
				printf("|%3d|%10s|%20s|%20s|%20s|\n", list->counter, list->Date, list->name, list->age, list->spec);
				cout << "+-----------------------------------------------------------------------------+\n";
				element_counter++;
			}
			system("pause");
			break;
		case 62:
			break;
		}
		if (key_choice == 62) break;
	} while (1);
}