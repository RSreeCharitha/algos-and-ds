class Node:
    def __init__(self,x):
        self.data = x
        self.next = None
    
class Queue:
    def __init__(self,size):
        self.front=None
        self.rear = None
        self.size = size
    def enqueue(self, x):
        if self.rear==None:
            self.rear=x
            self.front=x
        
