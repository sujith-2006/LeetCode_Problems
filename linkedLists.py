# Program to implement a Singly Linked List

class SinglyNode:

    def __init__(self, val, next = None):
        self.val = val
        self.next = next

    def __str__(self):
        return str(self.val)

Head = SinglyNode(1)
A = SinglyNode(2)
B = SinglyNode(3)
C = SinglyNode(4)

Head.next = A
A.next = B
B.next = C

current = Head
elements = []
while current:
    elements.append(str(current))
    current = current.next

print(' -> '.join(elements))
