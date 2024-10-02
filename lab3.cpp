#include <iostream>
#include <Windows.h>
using namespace std; 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number;
	int result = 0;
	cout << "Введіть число:" << "" << endl;
	cin >> number;
	do {
		number /= 10;
		result++;
	} while (number > 0);
	cout << result << "";
}
