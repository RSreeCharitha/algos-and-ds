class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

class sll:
    def __init__(self):
        self.head=None

    def __len__(self):
        last = self.head
        count =0
        while True:
            if last is None:
                break
            count+=1
            last = last.next
        return count

    def append(self, node):
        if self.head is None:
            self.head = node
        else:
            last = self.head
            while True:
                if last.next is None:
                    break
                else:
                    last= last.next
            last.next=node
        
    def inspos(self,node,pos):
        last = self.head
        first = self.head
        if pos>1 and pos<len(self):
            i=0
            while i<(pos-2):
                first = first.next
                last = last.next
                i+=1
            last = last.next
            print(first.data, last.data)
            first.next=node
            node.next = last
        
    def insbeg(self,node):
        if self.head is None:
            self.head = node
        else:
            node.next = self.head
            self.head=node
    
    def print(self):
        last = self.head
        while True:
            if last.next is None:
                break
            print(last.data,'->',end='')
            last=last.next
        print(last.data)

n1 = Node(31)
l = sll()
l.append(n1)
n2 = Node(54)
l.append(n2)
n3  = Node(38)
n4 = Node(34)
l.append(n3)
l.append(n4)
l.print()
n5 = Node(4)
l.insbeg(n5)
l.print()
l.inspos(Node(7),2)
l.print()
