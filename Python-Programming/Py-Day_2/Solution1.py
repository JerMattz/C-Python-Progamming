# build a calculator function: def calculate(x, y, operation): if operation == "": return xy # continue logic
# x = calculate(2,3,"*") print("output : ",x)

def calculate(x, y, operation):
    if operation == "add" or "+":
        return(x + y)
    elif operation == "subtract" or "-":
        return(x - y)
    elif operation == "multiply" or "*":
        return(x * y)
    elif operation == "divide" or "/":
        if y != 0:
            return(x / y)
        else:
            return("Denominator cannot be zero")
    else:
        return("Invalid operation")

# print("imported")

if __name__ == "__main__":
    # print("inside main block")
    while True:
        print("\nChoose an operation: add, subtract, multiply, divide")
        print("Or type 'exit' to quit.")
        operation = input("Enter operation: ").strip().lower()

        if operation == "exit":
            print("Exiting the program. Goodbye!")
            break

        try:
            x = float(input("Enter the first number: "))
            y = float(input("Enter the second number: "))
        except ValueError:
            print("Invalid input. Please enter numeric values.")
            continue

        result = calculate(x, y, operation)
        print(f"The result is: {result}")
