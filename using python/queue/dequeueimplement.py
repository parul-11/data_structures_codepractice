class deQueue:
    def __init__(self):
        self.deQueue=list()
        self.front=0
        self.rear=0
    def insertRear(self,element):
            self.deQueue.append(element)
            self.rear+=1
            print(self.deQueue)
    def insertFront(self,element):
            self.deQueue.insert(0,element)
            self.rear+=1
            print(self.deQueue)       
    def removeFront(self):
        if(self.rear != self.front):
            del self.deQueue[0]
            self.rear-= 1
            print(self.deQueue)
        else:
            print("deQueue is empty")
    def removeRear(self):
        if(self.rear != self.front):
            self.deQueue.pop()
            self.rear -= 1
            print(self.deQueue)
        else:
            print("UnderFlow")        

    def sizeOfdeQueue(self):
        return len(self.deQueue)
    
x=deQueue()
x.insertRear(2)
x.insertRear(3) 
x.insertRear(5)
x.insertFront(6)
x.insertFront(8)
x.sizeOfdeQueue()
x.removeFront()
x.removeFront()
x.removeRear()
x.sizeOfdeQueue()       