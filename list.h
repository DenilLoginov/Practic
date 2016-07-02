#include <iostream>
using namespace std;
void addlist();
void firstlist();
struct list
{
	char name[10], spec[10], age[3];
	int i;
	list *next;
};
list *first, *last, *pos;