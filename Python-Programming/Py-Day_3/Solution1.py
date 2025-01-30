# 1. Check if a String is a Valid IP Address
# Description: Verify if a given string follows the IPv4 format
# (x.x.x.x where 0 <= x <= 255).
# 192.0.2.146

ip = input("Enter a IP Address: ")
arr = ip.split('.')

valid = True
if len(arr) == 4:
    for i in arr:
        if not i.isdigit() or not 0 <= int(i) <= 255:
            valid = False
            break
else:
    valid = False

if valid:
    print(f"{ip} is a valid ip address")
else:
    print(f"{ip} is not a valid ip address")