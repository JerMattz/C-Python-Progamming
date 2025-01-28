# pagination
# 100 pages, start = 20, end = 27

for i in range(1, 101):
    if (i < 20 or i > 27):
        continue
    elif (i > 27):
        break
    else:
        print(i)