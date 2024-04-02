#include <iostream>
template<typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& item) : data(item), next(nullptr) {}
    };

    Node* frontPtr;
    Node* rearPtr;
    size_t count;

public:
    Queue() : frontPtr(nullptr), rearPtr(nullptr), count(0) {}

    ~Queue() {
        while (!empty()) {
            pop();
        }
    }

    void push(const T& item) {
        Node* newNode = new Node(item);
        if (empty()) {
            frontPtr = rearPtr = newNode;
        } else {
            rearPtr->next = newNode;
            rearPtr = newNode;
        }
        count++;
    }

    void pop() {
        if (!empty()) {
            Node* temp = frontPtr;
            frontPtr = frontPtr->next;
            delete temp;
            count--;
            if (empty()) {
                rearPtr = nullptr;
            }
        }
    }

    T front() const {
        if (!empty()) {
            return frontPtr->data;
        }
        return T();
    }

    size_t size() const {
        return count;
    }

    bool empty() const {
        return count == 0;
    }

    void move_to_rear() {
        if (size() > 1) {
            T frontElement = front();
            pop();
            push(frontElement);
        }
    }
};

int main() {
    Queue<int> myQueue;
    
    for (int i = 1; i <= 10; ++i) {
        myQueue.push(i * 10);
    }

    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    for (int i = 1; i <= 10; ++i) {
        myQueue.push(i * 10);
    }

    myQueue.move_to_rear();
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    return 0;
}
