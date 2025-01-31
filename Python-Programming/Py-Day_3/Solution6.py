# 6. Find the First Non-Repeating Character
# Description: Identify the first character that appears only once in the string.

def first_non_repeating_char(s):
    char_count = {}

    # Count occurrences of each character
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    # Find the first non-repeating character
    for char in s:
        if char_count[char] == 1:
            return char

    return None


# Example usage
input_string = "swiss"
output_char = first_non_repeating_char(input_string)
print(output_char)