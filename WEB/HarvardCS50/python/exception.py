import fnc;fnc.clearScreen();

x =  int(input("Enter 1st Value "));
y =  int(input("Enter 2nd Value "));

try:
    result = x/y;
except ZeroDivisionError:
    print("Error! 0 Cannot be divide")
print(result);