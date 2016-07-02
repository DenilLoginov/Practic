#include "queue.h"
void main()
{
	int n;
	while (1)
	{
		system("cls");
		cout << "\t\Выберете\n1.enqeue\n2.dequeue\n3.deqAll\n4.Exit";
		cin >> n;
		switch (n)
		{
		case 1: enqueue(); break;
		case 2: dequeue(); break;
		case 3: deqAll(); break;
		case 4: break;
		}
		if (n == 4)break;
	}
}