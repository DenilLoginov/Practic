#include "List.h"

element * first, *last, *list;

element* List::output_list()
{
	if (first != NULL)
	{
		list = first;
		first = first->next;
		return list;
	}
	else return NULL;
}

int List::add_to_list(element *new_item)
{
	if (first != NULL)
	{
		list = new_item;
		last->next = list;
		list->next = NULL;
		last = list;
	}
	else
	{
		first = new_item;
		first->next = NULL;
		last = first;
	}
	return 0;
}

int List::size()
{
	int i = 0;
	list = first;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return i;
}

element* List::item(int element_counter)
{
	int items = 1;
	list = first;
	while (items<element_counter)
	{
		list = list->next;
		items++;
	}
	return list;
}