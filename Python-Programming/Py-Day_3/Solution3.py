# 3. Compress a String
# Description: Perform basic run-length encoding by replacing consecutive repeating characters with character count.

def run_length_encoding(s):
    compressed = ""
    count = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1
            print(count)
        else:
            compressed += s[i - 1] + str(count)
            count = 1

    compressed += s[-1] + str(count)

    return compressed


input_string = input("Enter a string: ")
output_string = run_length_encoding(input_string)
print(output_string)