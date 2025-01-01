#pragma once
#include "Node.h"

class List
{
private:
	Node* head;
	Node* tail;
	int size = 0;

public:
	List() = default;

	List(const List& list);

	List(List&& list)noexcept;

	//выводит информацию об объектах списка
	void print()const;
	//добплвляет элемент в список
	void append(int value);
	//удаляет элемент из списка
	void remove();
	//поиск элемента в списке
	bool search(int value)const;

	friend ostream& operator<<(ostream& cout, const List& list);
	int& operator[](int index);
	const int& operator[](int index)const;
	//перегрузка оператора копирущего присваивания
	List& operator=(const List& list);
	//перегрузка оператора перемещающего присваивания
};

