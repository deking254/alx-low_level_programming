#!/usr/bin/python3
def is_palindrome(n):
    # Convert number to string and check if it's equal to its reverse
    return str(n) == str(n)[::-1]

largest_palindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

print("Largest palindrome made from the multiplication of two three-digit numbers:", largest_palindrome)
