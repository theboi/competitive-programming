#include <iostream>

using namespace std;

template<class T>
class Node {
  public:
    T data;
    Node<T> *next = NULL;
    Node<T>(T data) : data(data) {};
};

template<class T>
class LinkedList {
  private:
    Node<T> *_head = NULL;
  public:
    void append(T data) {
      if (_head == NULL) _head = new Node<T>(data); return;
    }
};

int main() {


  return 0;
}