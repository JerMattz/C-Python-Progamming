# 4. Check if a String is a Rotation of Another
# Description: Determine if one string is a rotation of another using concatenation.

def is_rotation(s1, s2):
    if len(s1) != len(s2):
        return False  # If lengths differ, s2 can't be a rotation of s1

    return s2 in (s1 + s1)  # Concatenate s1 with itself and check if s2 is a substring


# Example usage
print(is_rotation("abcde", "deabc"))  # Output: True
print(is_rotation("abc", "bca"))  # Output: True
print(is_rotation("abc", "bac"))  # Output: False
