#ifndef H_UnorderedLinkedList
#define H_UnorderedLinkedList 

#include "ex1_LinkedList.h"

using namespace std;

template <class Type>
class unorderedLinkedList : public linkedListType<Type>
{
public:
	bool search(const Type& searchItem) const;

	void insertFirst(const Type& newItem);

	void insertLast(const Type& newItem);
	//Function to insert newItem at the end of the list.


	void deleteNode(const Type& deleteItem);


	void deleteAll(const Type& deleteItem);
	//Delete all occurences of a given element

	void deleteSmallest();
	//Find and delete the node with the smallest info
};


template <class Type>
bool unorderedLinkedList<Type>::
search(const Type& searchItem) const
{
	nodeType<Type> *current; //pointer to traverse the list
	bool found = false;

	current = first; //set current to point to the first 
	//node in the list

	while (current != NULL && !found)    //search the list
		if (current->info == searchItem) //searchItem is found
			found = true;
		else
			current = current->link; //make current point to
	//the next node
	return found;
}//end search

template <class Type>
void unorderedLinkedList<Type>::insertFirst(const Type& newItem)
{
	nodeType<Type> *newNode; //pointer to create the new node

	newNode = new nodeType<Type>;//create the new node

	assert(newNode != NULL);

	newNode->info = newItem;    //store the new item in the node
	newNode->link = first;      //insert newNode before first
	first = newNode;            //make first point to the
	//actual first node
	count++;                    //increment count

	if (last == NULL)   //if the list was empty, newNode is also 
		//the last node in the list
		last = newNode;
}//end insertFirst

template <class Type>
void unorderedLinkedList<Type>::insertLast(const Type& newItem)
{
	nodeType<Type> *newNode; //pointer to create the new node

	newNode = new nodeType<Type>; //create the new node

	assert(newNode != NULL);

	newNode->info = newItem;  //store the new item in the node
	newNode->link = NULL;     //set the link field of newNode
	//to NULL

	if (first == NULL)  //if the list is empty, newNode is 
		//both the first and last node
	{
		first = newNode;
		last = newNode;
		count++;        //increment count
	}
	else    //the list is not empty, insert newNode after last
	{
		last->link = newNode; //insert newNode after last
		last = newNode; //make last point to the actual 
		//last node in the list
		count++;        //increment count
	}
}//end insertLast


template <class Type>
void unorderedLinkedList<Type>::deleteNode(const Type& deleteItem)
{
	nodeType<Type> *current; //pointer to traverse the list
	nodeType<Type> *trailCurrent; //pointer just before current
	bool found;

	if (first == NULL)    //Case 1; the list is empty. 
		cout << "Cannot delete from an empty list."
		<< endl;
	else if (first->info == deleteItem) //Case 2 
	{
		current = first;
		first = first->next;
		//count--;
		if (first == NULL)    //the list has only one node
			first->last = NULL;
		else
			last = NULL;
		count--;
		delete current;
	}
	else //search the list for the node with the given info
	{
		found = false;
		current = first;  //set trailCurrent to point
		//to the first node
		//current = first->link; //set current to point to 
		//the second node

		while (current != NULL && !found)
			if (current->info != deleteItem)
				found = true;
			else
				current = current->next;

		//trailCurrent = current;
		//current = current-> link;

		//end while

		if (current == NULL)
			cout << "The item to be deleted isn't in "
			<< "the list." << endl;
		else if (current->info == deleteItem)
		{
			trailCurrent = current->back;
			trailCurrent->next = current->next;

			if (current->next != NULL)   //node to be deleted 
				//was the last node
				current->next->back = trailCurrent;//update the value 
			//of last
			if (current == last)
				last = trailCurrent;//delete the node from the list
			count--;
			delete current;
		}
		else
			cout << "The item to be deleted is not in "
			<< "the list." << endl;
	}//end else
	//end else
}//end deleteNode


template <class Type>
void unorderedLinkedList<Type>::deleteAll(const Type& deleteItem)
{
	nodeType<Type> *current; //pointer to traverse the list
	nodeType<Type> *trailCurrent; //pointer just before current

	if (first == NULL)    //Case 1; list is empty. 
		cout << "Can not delete from an empty list." << endl;
	else
	{
		current = first;

		while (current != NULL)
		{
			if (current->info == deleteItem)
			{
				if (current == first)
				{
					first = first->link;
					delete current;
					current = first;
					if (first == NULL)
						last = NULL;
				}
				else
				{
					trailCurrent->link = current->link;

					if (current == last)
						last = trailCurrent;

					delete current;

					current = trailCurrent->link;
				}
			}
			else
			{
				trailCurrent = current;
				current = current->link;
			}
		} // end while
	}
} //end deleteAll

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

#endif 