# Example 1
class Dog():  # Class -> Dog

    # Gets called everytime a new object is created
    def __init__(self, name, age):
        self.name = name  # Attribute of the class
        self.age = age
        # print(name)

    def get_name(self):
        return self.name

    def get_age(self):
        return self.age

    def set_age(self, age):
        self.age = age

    def bark(self):  # Method -> bark
        print("bark")


# Instance of the class dog -> object
# Calls __init__ and prints the name
d = Dog("Tim", 6)
# print(type(d))
d.set_age(8)
print(d.get_name(), d.get_age())


# Example 2
class Student:
    def __init__(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade

    def get_grade(self):
        return self.grade

class Course:
    def __init__(self, name, max_students):
        self.name = name
        self.max_students = max_students
        self.students = []

    def add_student(self, student):
        if len(self.students) < self.max_students:
            self.students.append(student)
            return True
        return False

    def get_average_grade(self):
        value = 0
        for student in self.students:
            value += student.get_grade()

        return value / len(self.students)


s1 = Student("Jerem", 21, 86)
s2 = Student("Mathew", 20, 75)
s3 = Student("Ishwar", 24, 93)

course = Course("Science", 2)
course.add_student(s1)
course.add_student(s2)
course.add_student(s3)  # False

print(course.get_average_grade())




