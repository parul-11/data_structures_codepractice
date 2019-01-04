class Queue:
    def __init__(self):
        self.Queue=list()
        self.front=0
        self.rear=0
    def insert(self,element):
            self.Queue.append(element)
            self.rear+=1
            print(self.Queue)
    def remove(self):
        if(self.rear != self.front):
            del self.Queue[0]
            self.rear-= 1
            print(self.Queue)
        else:
            print("Queue is empty")

    def sizeOfQueue(self):
        return len(self.Queue)
    
x=Queue()
x.insert(2)
x.insert(3) 
x.insert(5)
x.insert(6)
x.insert(8)
x.sizeOfQueue()
x.remove()
x.remove()
x.remove()
x.sizeOfQueue()       