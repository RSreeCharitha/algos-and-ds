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
    
    def __repr__(self):
        last = self.head
        s=''
        while True:
            if last.next is None:
                break
            s+=f'{last.data} -> '
            last=last.next
        s+=f'{last.data}'
        return s

    def append(self, x):
        node = Node(x)
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
        
    def inspos(self,x,pos):
        node = Node(x)
        last = self.head
        first = self.head
        if pos>1 and pos<len(self):
            i=0
            while i<(pos-2):
                first = first.next
                last = last.next
                i+=1
            last = last.next
            print(f'inserting {x} between {first.data}, {last.data}')
            first.next=node
            node.next = last
        
    def insbeg(self,x):
        node = Node(x)
        if self.head is None:
            self.head = node
        else:
            node.next = self.head
            self.head=node
    '''  
    def print(self):
        last = self.head
        while True:
            if last.next is None:
                break
            print(last.data,'->',end='')
            last=last.next
        print(last.data)
    '''
    def dellast(self):
        last = self.head
        if(self.head is not None):
            while(last.next.next!=None):
                last=last.next
            d = last.next
            print('deleted: ',d.data)
            last.next=None
            del d


l = sll()
l.append(2)
l.append(3)
l.append(5)
l.append(6)
print(l)
l.insbeg(7)
print(l)
l.inspos(8,4)
print(l)
l.dellast()
print(l)