#ifndef QUEUE_H
#define QUEUE_H

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
  // Function declarations
  Queue();
  ~Queue();

  void push(const T& item);
  void pop();
  T front() const;
  size_t size() const;
  bool empty() const;

  // Additional function (optional)
  void move_to_rear();
};

#endif // QUEUE_H
