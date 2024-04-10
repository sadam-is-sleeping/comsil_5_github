#include "LinkedList.h"

template <typename T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){
			if(this->first == 0)
				return false;
			Node<T> *current = this->first;
			element = current->data;
			this->first = current->link;
			delete current;
			this->current_size--;
			return true;
			}
};
