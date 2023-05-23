def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

N = int(input("Enter the value of N: "))
result = factorial(N)
print("Factorial of", N, ":", result)
