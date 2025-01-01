#include "List.h"

int main()
{
	setlocale(LC_ALL, "rus");

	List list, list_2;
	int value;

	cout << "\nвведите значение \n";

	cin >> value;

	list.append(value);

	cout << "\nвведите значение \n";

	cin >> value;

	list.append(value);

	cout << "\nвведите значение \n";

	cin >> value;

	list.append(value);

	list.print();

	cout << "\nвведите значение \n";

	cin >> value;

	list_2.append(value);

	cout << "\nвведите значение \n";

	cin >> value;

	list_2.append(value);

	cout << "\nвведите значение \n";

	cin >> value;

	list_2.append(value);

	list_2.print();

	return 0;
}