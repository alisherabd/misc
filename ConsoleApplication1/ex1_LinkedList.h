template < class T >
class LinkedNode;

template < class T >
class LinkedList
{
private:
	LinkedNode< T > * firstNode; //the first node in our list
	//LinkedNode * currentNode; //the node we're currently operating on
	//void setCurrentNode( int nodeNumber );
	int size;
public:
	LinkedList< T >();
	void add(T value);
	void remove(T value);
	void removeByIndex(int index);
	T get(int index);
	int getSize();

};