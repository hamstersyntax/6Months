import fnc;fnc.clearScreen();
def sayName(fnc):
    def wrapper():
        print("Before Running fnc...")
        fnc()
        print("Done with fnc....")