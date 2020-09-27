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
        #s = 'List: '+s
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
            p = d.data
            last.next=None
            del d
            return p

l1 = sll()
l1.append(6)
l1.append(3)
print(l1)
l2=sll()
l2.insbeg(7)
print(l2)

l3=sll()
c=0
len1 = len(l1)
len2=len(l2)
if len1>=len2:
    i=0
    while(i<=len1+2):
        a = l1.dellast()
        b = l2.dellast()
        su = (a+b+c)%10
        c=(a+b+c)//10
        l3.insbeg(su)
        i+=1
        len1=len(l1)

print('Sum of lists: ',l3)
