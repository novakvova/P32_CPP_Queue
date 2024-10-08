#include<iostream>
using namespace std;
#include<Windows.h>
#include "MyQueue.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//черга із оцінок
	MyQueue<int> marks;
	marks.push(12);
	marks.push(10);
	marks.push(11);

	marks.print();

	cout << "Перший елемент у черзі " << marks.front() << "\n";

	cout << "Привіт!\n";
	return 0;
}