class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
#creating node
ele1 = Node(10)
ele2 = Node(20)
ele3 = Node(30)
ele4 = Node(40)

#before connection
print(ele1.next)

#connecting node
ele1.next = ele2
ele2.next = ele3
ele3.next = ele4

#after connection
print(ele1.next)

current = ele1
while current:
    print(current.data)
    current = current.next
