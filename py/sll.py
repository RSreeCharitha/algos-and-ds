#!/bin/env python3
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
        if last==None:
            return 'Empty list'
        while True:
            if last.next is None:
                break
            s+=f'{last.data} -> '
            last=last.next
        s+=f'{last.data}'
        s = 'List: '+s
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
        if self.head ==None:
            return 0
        if self.head.next == None: 
            p = self.head.data
            self.head = None
            return p
        if(self.head is not None):
            while(last.next.next!=None):
                last=last.next
            d = last.next
            print('deleted: ',d.data)
            p = d.data
            last.next=None
            del d
            return p


def merge(l1,l2):
    temp=None
    if l1 is None:
        return 12
    if l2 is None:
        return l1
    if l1.data >=l2.data:
        temp = l2
        temp.next = merge(l1,l2.next)
    else:
        temp=l1
        temp.next = merge(l1.next,l2)
    return temp

l1 = sll()
l1.append(2)
l1.append(3)
l1.append(6)
l1.append(10)
l2=sll()
l2.append(1)
l2.append(4)
l2.append(7)
l3=sll()
l3.head=merge(l1.head,l2.head)
print(l3)