#include <iostream>
using std::cout;
using std::endl;



template <class Type>
void unorderedLinkedList<Type>::deleteSmallest()
{
	nodeType<Type> *current;
	nodeType<Type> *trailCurrent;

	nodeType<Type> *small;
	nodeType<Type> *trailSmall;

	if (first == NULL)
		cout << "Cannot delete from an empty list." << endl;
	else
		if (first->link == NULL)
		{
		first = NULL;
		delete last;
		last = NULL;
		}
		else
		{
			small = first;
			trailCurrent = first;
			current = first->link;

			while (current != NULL)
			{
				if (small->info > current->info)
				{
					trailSmall = trailCurrent;
					small = current;
				}

				trailCurrent = current;
				current = current->link;
			}

			if (small == first)
				first = first->link;
			else
			{
				trailSmall->link = small->link;

				if (small == last)
					last = trailSmall;
			}

			delete small;
		}
}
void main()
{
	cout << "Alis" << endl;
	system("pause");
}