#include<iostream>
using namespace std;

template <typename T> class MyQueue {
private:
    // Структура для одного вузла
    struct Node {
        T data;      // Дані вузла
        Node* next;    // Вказівник на наступний вузол

        // Конструктор для ініціалізації вузла
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* head; // Вказівник на голову списку

public:
    MyQueue() : head(nullptr) {}

    void push(T data) {
        //Якщо список є пустий
        if (head == nullptr) {
            Node* node = new Node(data);
            //node->data = data;
            //node->next = nullptr;
            head = node;  //Голова - це є перший елемент списку
        }
        else {
            //починаємо з голови
            Node* temp = head;
            //Працюємо поки цикл не зайшов у кінець черги до останього елемента
            while (temp->next != nullptr)
                temp = temp->next; //перехід на наступний елемент списку
            Node* nodeEnd = new Node(data); //отсаній елемент списку
            temp->next = nodeEnd; //Останій елемент списку поставили у кінець.
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
        //робимо тимчасовий вказівник - щоб не загубити голову.
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "\n";
            temp = temp->next;
        }
    }

};