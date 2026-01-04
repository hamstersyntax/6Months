import os;
import fnc;fnc.clearScreen();

x =  int(input("Enter 1st Value "));
y =  int(input("Enter 2nd Value "));

try:
    result = x/y;
except ZeroDivisionError:
    print("Error! 0 Cannot be divide")
    os.exit(1)

print(result);