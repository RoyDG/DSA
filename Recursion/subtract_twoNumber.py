def subtract_recursive(a, b):
    if b == 0:
        return a
    else:
        return subtract_recursive(a - 1, b - 1)

num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))
result = subtract_recursive(num1, num2)
print("Difference =", result)
