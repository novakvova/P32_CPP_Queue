#include<iostream>
using namespace std;

template <typename T> class MyQueue {
private:
    // ��������� ��� ������ �����
    struct Node {
        T data;      // ��� �����
        Node* next;    // �������� �� ��������� �����

        // ����������� ��� ����������� �����
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* head; // �������� �� ������ ������

public:
    MyQueue() : head(nullptr) {}

    void push(T data) {
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

    T& front() const {
        if (head != nullptr) {
            return head->data;
        }
        else {
            return NULL;
        }
    }

    void print() {
        //������ ���������� �������� - ��� �� �������� ������.
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "\n";
            temp = temp->next;
        }
    }

};