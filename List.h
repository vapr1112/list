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

	//������� ���������� �� �������� ������
	void print()const;
	//���������� ������� � ������
	void append(int value);
	//������� ������� �� ������
	void remove();
	//����� �������� � ������
	bool search(int value)const;

	friend ostream& operator<<(ostream& cout, const List& list);
	int& operator[](int index);
	const int& operator[](int index)const;
	//���������� ��������� ���������� ������������
	List& operator=(const List& list);
	//���������� ��������� ������������� ������������
};

