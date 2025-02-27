#pragma once // developed by Roman Antoshchuk on 17.04.2024
#include "IDoubleList.h"
// Task 4 - CyclicDoubleList class realization
template<typename T>
class CyclicDoubleList : public IDoubleList<T> {
private:
    struct Node {
        T data;
        Node* prev;
        Node* next;
        Node(const T& data, Node* prev = nullptr, Node* next = nullptr)
            : data(data), prev(prev), next(next) {}
    };

    Node* head;
    size_t listSize;


    friend std::ostream& operator<<(std::ostream& os, const CyclicDoubleList<T>& list) {
        if (list.head == nullptr) {
            os << "The list is empty.";
        }
        else {
            Node* current = list.head;
            while (current != nullptr) {
                os << current->data << " ";
                current = current->next;
            }
        }
        return os;
    }

public:
    CyclicDoubleList() : head(nullptr), listSize(0) {}

    ~CyclicDoubleList() override {
        clear();
    }

    void pushFront(const T& value) override {
        Node* node = new Node(value);
        if (isEmpty()) {
            head = node->next = node->prev = node;
        }
        else {
            node->next = head;
            node->prev = head->prev;
            head->prev->next = node;
            head->prev = node;
        }
        head = node;
        listSize++;
    }

    void pushBack(const T& value) override {
        if (isEmpty()) {
            pushFront(value);
        }
        else {
            Node* node = new Node(value, head->prev, head);
            head->prev->next = node;
            head->prev = node;
            listSize++;
        }
    }

    void popFront() override {
        if (isEmpty()) {
            throw std::runtime_error("The list is empty.");
        }
        Node* temp = head;
        if (listSize == 1) {
            head = nullptr;
        }
        else {
            head->next->prev = head->prev;
            head->prev->next = head->next;
            head = head->next;
        }
        delete temp;
        listSize--;
    }

    void popBack() override {
        if (isEmpty()) {
            throw std::runtime_error("The list is empty.");
        }
        if (listSize == 1) {
            popFront();
        }
        else {
            Node* temp = head->prev;
            temp->prev->next = head;
            head->prev = temp->prev;
            delete temp;
            listSize--;
        }
    }

    T front() const override {
        if (isEmpty()) {
            throw std::runtime_error("The list is empty.");
        }
        return head->data;
    }

    T back() const override {
        if (isEmpty()) {
            throw std::runtime_error("The list is empty.");
        }
        return head->prev->data;
    }

    bool isEmpty() const override {
        return listSize == 0;
    }

    void clear() override {
        while (!isEmpty()) {
            popFront();
        }
    }

    size_t size() const override {
        return listSize;
    }

};