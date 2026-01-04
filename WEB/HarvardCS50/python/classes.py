import fnc; fnc.clearScreen();

class Student():
    def __init__(self,name,age):
       cName = name;
       cAge  =  age;
    def sayName(self):
        print(f"Student : {cName} ")

c =Student("Hamster")