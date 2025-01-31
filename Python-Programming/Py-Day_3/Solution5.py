# 5. Find All Substrings of a String
# Description: Generate all possible substrings of a given string.

def generate_substrings(s):
    substrings = []
    for length in range(1, len(s) + 1):  # Iterate over lengths from 1 to len(s)
        for i in range(len(s) - length + 1):
            substrings.append(s[i:i + length])
    return substrings


# Example usage
input_string = "abc"
result = generate_substrings(input_string)
print(result)
