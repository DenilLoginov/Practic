#include "Queue.h"

List list_object;

int Queue::enqueue(element *list)
{
	return list_object.add_to_list(list);
}

element* Queue::dequeue()
{
	return list_object.output_list();
}

element* Queue::show_list(int j)
{
	return list_object.item(j);
}

int Queue::size_of_list()
{
	return list_object.size();
}