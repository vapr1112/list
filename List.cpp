#include "List.h"
#include "remove_error.h"

List::List(const List& list) : head{ nullptr }, tail{ nullptr }
{
	Node* currect = list.head;

	while (currect != nullptr)
	{
		size++;
		this->append(currect->data);
		currect = currect->next;
	}
}

List::List(List&& list)noexcept : head{ list.head }, tail{ list.tail }
{
	list.tail = nullptr;
	list.head = nullptr;
}

void List::print() const
{
	Node* currect = head;

	while (currect != nullptr)
	{
		cout << currect->data << " ";
		currect = currect->next;
	}
}

void List::append(int value)
{
	size++;
	Node* new_node = new Node(value);

	if (tail == nullptr)
	{
		head = tail = new_node;
	}

	else
	{
		tail->next = new_node;
	}
	tail = new_node;
}

void List::remove()
{
	try
	{
		if (head == nullptr) throw remove_error("список пуст, невозможно удалить элемент");

		if (head == tail)
		{
			delete head;
			head = tail = nullptr;
		}

		else
		{
			Node* temp = head;

			while (temp->next != tail)
			{
				temp = temp->next;
			}
			delete tail;
			tail = temp;
			tail->next = nullptr;
		}

	}

	catch (const remove_error& del_error)
	{
		cout << del_error.what();
	}
}

bool List::search(int value)const
{
	Node* currect = head;

	while (currect != nullptr)
	{
		if (currect->data == value)
		{
			return true;
		}
		currect = currect->next;
	}

	return false;
}

ostream& operator<<(ostream& cout, const List& list)
{
	list.print();

	return cout;
}

int& List:: operator[](int index)
{
	Node* currect = head;
	try
	{
		if (index < 0 || index > size) throw out_of_range("\nвыход из диапозона списка\n");
		for (int i = 0; i < index; i++)
		{
			currect = currect->next;
		}

	}

	catch (const out_of_range& range_er)
	{
		cout << range_er.what();
	}

	return currect->data;
	
}

const int& List::operator[](int index)const
{
	Node* currect = head;

	//проверка на  выход из диапозона
	try
	{
		if (index < 0 || index > size) throw out_of_range("\nвыход из диапозона списка\n");

		for (int i = 0; i < index; i++)
		{
			currect = currect->next;
		}

	}

	catch (const out_of_range& range_er)
	{
		cout << range_er.what();
	}

	return currect->data;
}

List& List::operator=(const List& list)
{
	Node* currect = head;

	if (this != &list)
	{
		Node* currect = list.head;

		while (currect != nullptr)
		{
			this->append(currect->data);
			currect = currect->next;
		}
	}
	return *this;
}
