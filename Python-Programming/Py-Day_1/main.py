# Tokens Of Python
# -Keywords
# -Operators
# -Identifiers / Variable Names
# -Literals / Datatypes
# -Delimiters

# for i in range(10):
#     if (i < 9):
#         print("Hello world!")
#     else:
#         print("Hello")

# split
# s = "Python,Java,C++"
# print(s.split(','))  # Output: ['Python', 'Java', 'C++']

# # join
# lst = ['Python', 'Java', 'C++']
# print(' '.join(lst))  # Output: 'Python,Java,C++'

# s = """I am Learning
# Python String on GeeksforGeeks
# "Hello World!"
# """
# print(s)

# teststring = "hello how are you!"
# out = teststring.split("h",1)
# print(out)

# teststring = "hello, how are you!"
# out = teststring.count("hello",0,len(teststring)-1)
# print(out)

# teststring = "Jerem Mathew"
# out = teststring.partition(" ")
# print(out)

# str1 + str2, Python internally calls str1.__add__(str2)
# str1 = "hello"
# str2 = "world"
# print(str1 + str2)
# print(str1.__add__(str2)) # duner methods (magic method)

# list comprehension
# syntax: [expression for item in iterable if condition]
# squares = [x ** 2 for x in range(10) if x % 2 == 0]
# print(squares)

# Shallow Copy
# list1 = [1, 2, 3, [10, 20, 30]]
# list2 = list1.copy()  # or list2 = list1[:]
# list2[3][1] = 25 # altered in list1 & 2 -> 2nd layer alteration
# list2[0] = 100 # altered in list2 only
# print(list1)
# print(list2)
#
# # # Deep Copy
# import copy
# list3 = [[1, 2], [3, 4], [10, 20, 30]]
# list4 = copy.deepcopy(list3)
# list4[2][1] = 25 # altered in list4 only
# list4[0][0] = 100 # altered in list4 only
# print(list3)
# print(list4)

# all odd numbers
# lst = []
# for i in range(1,51):
#     if i % 2 == 0:
#         lst.append(i)
# print(lst)

# step 2
# def evenno(x):
#     if x % 2 ==0:
#         return True
#     else:
#         return False

# lst = [i for i in range(1,51)] # 1 -> 50
# # print(len(lst))
# # for j in filter(evenno,lst):
# #     print(j)
# # filter(evenno,lst)
# print(list(filter(evenno,lst)))


# step 3
# readablity
#                 function          , iterable
# print(list(filter(lambda x:  x%2 ==0,[i for i in range(1,51)])))

# map
# lst = [i for i in range(1, 6)]
# map(lambda x: print(f"this is printed using map: {x}"),lst)
# map itself an iterable, it cannot be printed directly
#            function                                          , iterable
# for _ in map(lambda x: print(f"this is printed using map: {x}"), lst):
#     pass

# OOPS
# Classes
# self -> constructor
# class student: # class
#     def __init__(self, name, rollno):
#         self.name = name
#         self.rollno = rollno
#
#     def action(self):
#         return "Studying"
#
#
# std1 = student("Jerem", 56) # object creation
# print(std1.name, std1.rollno)
# print(std1.action())


# ENCAPSULATION
# class student2:
#     def __init__(self, name, rollno):
#         self.__name = name # private
#         self.__rollno = rollno # private
#
#     def action(self):
#         return f"student name :{self.__name} studies"
#
# std2 = student2("Mathew", 56)
# print(std2._student2__name, std2._student2__rollno)
# # print(std2.__dir__())
# print(std2.action())

#Problem 1
# class Car:
#     def __init__(self, make: str, model: str, year: int, speed: float = 0.0):
#         self.make = make
#         self.model = model
#         self.year = year
#         self.speed = speed
#
#     def accelerate(self, speed_increase: float):
#         self.speed += speed_increase
#
#     def brake(self, speed_decrease: float):
#         self.speed = max(0.0, self.speed - speed_decrease)
#
#     def display_speed(self):
#         print(f"Current speed: {self.speed} km/h")
#
#
# car = Car("Toyota", "Corolla", 2022)
# car.accelerate(30)
# car.display_speed()
# car.brake(10)
# car.display_speed()
# car.brake(25)
# car.display_speed()


# Problem 2
from abc import ABC, abstractmethod


class Animal(ABC):  # template for animals
    @abstractmethod
    def make_sound(self) -> str:
        pass


class Dog(Animal):
    def make_sound(self):
        print("Woof")


class Cat(Animal):
    def make_sound(self):
        print("Meow")


# Creating objects
dog = Dog()
cat = Cat()

dog.make_sound()
cat.make_sound()
