class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    def insertAtBeginning(self, data):
        nnode = Node(data)
        nnode.next = self.head
        self.head = nnode
        print("correct")
        return self.head

    def insertAtEnd(self, data):
        nnode = Node(data)
        if self.head is None:
            self.head = nnode
            print("correct")
            return
        last = self.head
        while (last.next):
            last = last.next
        last.next =  nnode
        print("correct")
        return last.next

    def insertAtPosition(self, prev_node, data):
        if prev_node is None:
            return head
        nnode = Node(data)
        nnode.next = prev_node.next
        prev_node.next = nnode
        print("correct")
        return prev_node.next


llist=LinkedList()
n=input()
llist.insertAtEnd(n)
