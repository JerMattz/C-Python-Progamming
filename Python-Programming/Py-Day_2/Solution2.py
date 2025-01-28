# fizzbuzzpuzz
# fizzbuzz
# buzzpuzz
# fizzpuzz
# fizz
# buzz
# puzz

if __name__ == "__main__":
    x = int(input("Enter a number: "))

    if (x % 3 == 0 and x % 5 == 0 and x % 6 == 0):
        print("FizzBuzzPuzz")
    elif (x % 3 == 0 and x % 5 == 0):
        print("FizzBuzz")
    elif (x % 5 == 0 and x % 6 == 0):
        print("BuzzPuzz")
    elif (x % 3 == 0 and x % 6 == 0):
        print("FizzPuzz")
    elif (x % 3 == 0):
        print("Fizz")
    elif (x % 5 == 0):
        print("Buzz")
    elif (x % 6 == 0):
        print("Puzz")
    else:
        print("Not divisible by 3 and 5")