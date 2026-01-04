import sys;
import os;
os.system("cls");
try:
x =  int(input("Enter 1st Value "));
y =  int(input("Enter 2nd Value "));
except ValueError:
    print("ErrorValue Must be")

try:
    result = x/y;
except ZeroDivisionError:
    print("Error! 0 Cannot be divide")
    sys.exit(1)

print(result);