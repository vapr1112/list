#include "List.h"

int main()
{
	setlocale(LC_ALL, "rus");

	List list;
	int value;

	cout << "\nвведите значение \n";

	cin >> value;

	list.append(value);

	cout << "\nвведите значение \n";

	cin >> value;

	list.append(value);

	list.print();

	return 0;
}