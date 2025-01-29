# print below pattern using loops: even places are reversed odd places are normal
# 1 2 3 4 5 5 4 3 2 1 1 2 3 4 5 5 4 3 2 1 1 2 3 4 5

a = [1, 2, 3, 4, 5]
s = []

for i in range(1,6):
    if i % 2 == 0:
        s.extend(a[::-1])
    else:
        s.extend(a)

print(*s)