import random
import ctypes

# Load the shared library containing the functions
cops = ctypes.CDLL('./100-operations.so')

# Generate random integers
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Perform arithmetic operations using the shared library
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
