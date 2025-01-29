# print numbers in reverse from 100, skips once divisible by 3 and 5,

for i in range(100, 0, -1):
    if i % 3 == 0 and i % 5 == 0:
        continue
    else:
        print(i)