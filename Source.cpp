#include "List.h"

int main()
{
	setlocale(LC_ALL, "rus");

	List list;
	int value;

	cout << "\n������� �������� \n";

	cin >> value;

	list.append(value);

	cout << "\n������� �������� \n";

	cin >> value;

	list.append(value);

	list.print();

	return 0;
}