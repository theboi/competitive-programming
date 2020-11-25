#include <iostream>
using namespace std;

template <class T>
class Node {
 public:
  T data;
  Node<T> *next = NULL;
  Node<T>(T data) : data(data){};
};

template <class T>
class LinkedList {
 private:
  Node<T> *_head = NULL;

 public:
  void append(T data) {
    if (_head == NULL) {
      _head = new Node<T>(data);
      return;
    }
    Node<T> *current = _head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = new Node<T>(data);
  };

  void deleteIndex(int index) {
    Node<T> *current = _head;
    for (int i=0;i<index-1;++i) {
      current = current->next;
    }
    Node<T> *toDelete = current->next;
    current->next = current->next->next;
    delete toDelete;
  }

  void print() {
    Node<T> *current = _head;
    while (current != NULL) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << "\b\n";
  }
};

int main() {
  LinkedList<int> llist{};
  llist.append(10);
  llist.append(21);
  llist.append(69);
  llist.print();
  llist.deleteIndex(1);
  llist.print();
  return 0;
}