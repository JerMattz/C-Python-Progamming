# 2. Check if a String is a Valid Number
# Description: Determine if a string represents a valid integer or decimal number.

num = input("Enter a number: ")
arr = num.split(".")

isNum = True
for i in arr:
    if not i.isdigit():
        isNum = False

print(isNum)