class stack:
    def __init__(self):
        self.elements=list()
    def isEmpty(self):
        return self.elements==[]
    def push(self,element):
        self.elements.append(element)
    def pop(self):
        return self.elements.pop()
    def size(self):
        return len(self.elements)
    


x=stack()
print(x.isEmpty())
x.push(2)
x.push(4)
x.push(6)
print("size of stack after pushing elements is: ",x.size())
x.pop()
print("Now size: ",x.size())                      
