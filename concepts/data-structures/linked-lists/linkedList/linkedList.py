from __future__ import annotations

class Node:
  data: str
  next: Node = None
  def __init__(self, data: str):
    self.data = data

class LinkedList:
  head: Node = None
  
  def append(self, data: str):
    if self.head == None:
      self.head = Node(data)
      return
    cur = self.head
    while cur.next != None:
      cur = cur.next
    cur.next = Node(data)

  def removeAtIndex(self, index: int):
    n = 0
    cur = self.head
    while cur.next != None and n < index:
      n += 1
      cur = cur.next
    cur = cur.next.next
    # del cur.next

  def print(self):
    arr = []
    cur = self.head
    while cur != None:
      arr.append(cur.data)
      cur = cur.next
    print(arr)

if __name__ == '__main__':
  llist = LinkedList()
  llist.append("1")
  llist.append("2")
  llist.append("3")
  llist.append("4")
  llist.append("5")
  llist.append("6")
  llist.removeAtIndex(1)
  llist.print()