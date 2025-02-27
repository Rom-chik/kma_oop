#pragma once // developed by Roman Antoshchuk on 17.04.2024
#include "IDoubleList.h"
// Task 3 - DoubleList class realization
template<typename T>
class DoubleList : public IDoubleList<T> {
private:
    struct Node {
        T data;
        Node* prev;
        Node* next;

        Node(const T& data, Node* prev = nullptr, Node* next = nullptr)
            : data(data), prev(prev), next(next) {}
    };

    Node* head;
    Node* tail;
    size_t listSize;


    friend std::ostream& operator<<(std::ostream& os, const DoubleList<T>& list) {
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
    DoubleList() : head(nullptr), tail(nullptr), listSize(0) {}

    ~DoubleList() {
        clear();
    }


    void pushFront(const T& value) override {
        if (head == nullptr) {
            head = tail = new Node(value);
        }
        else {
            head = new Node(value, nullptr, head);
            head->next->prev = head;
        }
        listSize++;
    }

    void pushBack(const T& value) override {
        if (tail == nullptr) {
            head = tail = new Node(value);
        }
        else {
            tail = new Node(value, tail, nullptr);
            tail->prev->next = tail;
        }
        listSize++;
    }

    void popFront() override {
        if (isEmpty()) return;
        Node* temp = head;
        head = head->next;
        if (head == nullptr) {
            tail = nullptr;
        }
        else {
            head->prev = nullptr;
        }
        delete temp;
        listSize--;
    }

    void popBack() override {
        if (isEmpty()) return;
        Node* temp = tail;
        tail = tail->prev;
        if (tail == nullptr) {
            head = nullptr;
        }
        else {
            tail->next = nullptr;
        }
        delete temp;
        listSize--;
    }

    T front() const override {
        if (isEmpty()) throw std::runtime_error("The list is empty.");
        return head->data;
    }

    T back() const override {
        if (isEmpty()) throw std::runtime_error("The list is empty.");
        return tail->data;
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

    // Task 5 - Iterator for find method
    class iterator {
        Node* current;

    public:
        explicit iterator(Node* node) : current(node) {}

        T& operator*() const { return current->data; }
        iterator& operator++() {
            current = current->next;
            return *this;
        }
        iterator operator++(int) {
            iterator tmp = *this;
            ++(*this);
            return tmp;
        }
        bool operator==(const iterator& other) const { return current == other.current; }
        bool operator!=(const iterator& other) const { return current != other.current; }
        Node* getNode() const { return current; }
    };

        iterator begin() { return iterator(head); }
        iterator end() { return iterator(nullptr); }

    // Task 5 - Find func
    iterator find(const T& value) {
        for (iterator it = begin(); it != end(); ++it) {
            if (*it == value) {
                return it;
            }
        }
        return end();
    }

};