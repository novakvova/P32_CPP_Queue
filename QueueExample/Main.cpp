#include<iostream>
using namespace std;
#include<Windows.h>
#include "MyQueue.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//����� �� ������
	MyQueue<int> marks;
	marks.push(12);
	marks.push(10);
	marks.push(11);

	marks.print();

	cout << "������ ������� � ���� " << marks.front() << "\n";

	cout << "�����!\n";
	return 0;
}