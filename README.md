# Bitwise-Operators-
Aim: To study and implement C++ Bitwise Operators

Tools Used: VS Code or Programiz Online Compiler

Theory: 
Bitwise operators in C++ are used to perform operations directly on the binary representation of integers. These operators are efficient for low-level programming tasks such as hardware manipulation, encryption, and performance optimization.

Bitwise Operators in C++ :

1)Bitwise AND (&):
Compares each bit of two numbers.
Result bit is 1 only if both bits are 1.
Example: 5 & 3 → 0101 & 0011 = 0001 → 1

2)Bitwise OR (|):
Compares each bit of two numbers.
Result bit is 1 if at least one bit is 1.
Example: 5 | 3 → 0101 | 0011 = 0111 → 7

3)Bitwise NOT (~):
Inverts each bit (1 becomes 0, 0 becomes 1).
Example: ~5 → ~(0101) = 1010 (in 2’s complement → -6)

4)Bitwise XOR (^):
Result bit is 1 only if the bits are different.
Example: 5 ^ 3 → 0101 ^ 0011 = 0110 → 6

5)Left Shift (<<):
Shifts bits to the left, inserting 0 from the right.
Multiplies the number by 2ⁿ.
Example: 5 << 1 → 0101 << 1 = 1010 → 10

6)Right Shift (>>):
Shifts bits to the right, discarding bits on the right.
Divides the number by 2ⁿ.
Example: 5 >> 1 → 0101 >> 1 = 0010 → 2

-->Program-1: 
This program demonstrates various bitwise operations in C++. Bitwise operators perform operations on the binary representations of integers at the bit level.

Bitwise AND (&): Performs a logical AND operation on each pair of corresponding bits
Bitwise OR (|): Performs a logical OR operation on each pair of corresponding bits
Bitwise NOT (~): Performs a logical NOT operation on each bit (flips all bits)
Bitwise XOR (^): Performs an exclusive OR operation on each pair of corresponding bits
Left Shift (<<): Shifts all bits to the left by the specified number of positions
Right Shift (>>): Shifts all bits to the right by the specified number of positions

-->Program-2: 
This program shows how to manipulate individual bits of a number:
1)Set a Bit to 1
Use: n | (1 << bit_position)
This turns the specific bit ON (to 1) without affecting other bits.

2)Reset a Bit to 0
Use: n & ~(1 << bit_position)
This turns the specific bit OFF (to 0) without changing other bits.

Conclusion: Hence, we performed the Bitwise Operations on inputted numbers and we have set and reset the specified digits of a binary number.
