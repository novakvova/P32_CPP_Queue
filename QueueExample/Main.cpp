#include<iostream>
using namespace std;
#include<Windows.h>
#include "MyQueue.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//черга із оцінок
	MyQueue<int> marks;
	marks.Push(12);
	marks.Push(10);

	marks.Print();

	cout << "Привіт!\n";
	return 0;
}