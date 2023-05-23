def sum_recursive(n):
    if n == 0:
        return 0
    else:
        return n + sum_recursive(n - 1)

num = int(input("Enter a positive integer: "))
result = sum_recursive(num)
print("Sum =", result)
