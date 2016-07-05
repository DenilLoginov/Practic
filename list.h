#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct element
{
	char Date[10];
	char name[20];
	char age[20];
	char spec[20];
	int counter;
	element *next;
};

class List
{
public:
	int add_to_list(element *new_item);
	element* item(int element_counter);
	int size();
	element* output_list();
	element *first, *last, *list;
};