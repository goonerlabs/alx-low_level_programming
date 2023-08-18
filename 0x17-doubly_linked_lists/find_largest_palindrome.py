#!/usr/bin/python3
def is_palindrome(n):
    num = str(n)
    return  num == num[::-1]

z  = 0
for i in range(100,1000):
    for j in range(100,1000):
        x  = i * j
        if is_palindrome(x) and x > z:
            z = x;
print(z)
