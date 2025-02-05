"""
class Cat:
    def __init__(self, name, age):
        self.name = name
        self.age  = age

    def speak(self):
        print("Meoww")


class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def speak(self):
        print("Bark")
"""

# Example 3
# Parent class - Generalize
class Pet:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def show(self):
        print(f"I'm {self.name} and I'm {self.age} years old")

    def speak(self):
        print("I don't know what to speak")


# Child classes
# (Pet) -> Inheriting the parent class
class Dog(Pet):
    def __init__(self, name, age, color):
        # references the parent class
        super().__init__(name, age)
        self.color = color

    def speak(self):
        print("Bark")

    def show(self):
        print(f"I'm {self.name} and I'm {self.age} years old and I'm {self.color} color.")


class Cat(Pet):
    def speak(self):
        print("Meow")


class Fish(Pet):
    pass


pet1 = Dog("Jimmy", 8, "brown")
pet1.show()
pet1.speak()
pet2 = Cat("Spiky", 3)
pet2.show()
pet2.speak()
pet3 = Fish("Bubbles", 6)
pet3.show()
pet3.speak()