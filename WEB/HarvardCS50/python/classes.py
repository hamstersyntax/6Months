import fnc; fnc.clearScreen();

class Student():
    def __init__(self,name,age):
       self.cName = name;
       self.cAge  =  age;
    def sayName(self):
        print(f"Student : {self.cName} Age : {self.cAge}")

c =Student("Hamster",20);
c.sayName()