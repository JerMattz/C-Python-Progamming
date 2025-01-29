# pagination
# 100 pages, start = 20, end = 27
# Implement pagination using below for loop range break continue consider 100 pages you need start printing pages
# from start to end if start = 20, end = 27 print pages 20 -> 27

for i in range(1, 101):
    if i < 20:
        continue
    elif i > 27:
        break
    else:
        print(i)