#include<iostream>
using namespace std;

template <typename T> class MyQueue {
private:
    // ��������� ��� ������ �����
    struct Node {
        T data;      // ��� �����
        Node* next;    // �������� �� ��������� �����

        // ����������� ��� ����������� �����
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* head; // �������� �� ������ ������

public:
    MyQueue() : head(nullptr) {}

    void Push(T data) {
        //���� ������ � ������
        if (head == nullptr) {
            Node* node = new Node(data);
            //node->data = data;
            //node->next = nullptr;
            head = node;  //������ - �� � ������ ������� ������
        }
        else {
            //�������� � ������
            Node* temp = head;
            //�������� ���� ���� �� ������ � ����� ����� �� ��������� ��������
            while (temp->next != nullptr)
                temp = temp->next; //������� �� ��������� ������� ������
            Node* nodeEnd = new Node(data); //������ ������� ������
            temp->next = nodeEnd; //������ ������� ������ ��������� � �����.
        }
    }

    void Print() {
        //������ ���������� �������� - ��� �� �������� ������.
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "\n";
            temp = temp->next;
        }
    }

};