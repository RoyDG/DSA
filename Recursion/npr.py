def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

def nPr(n, r):
    if r > n:
        return 0
    else:
        return factorial(n) // factorial(n - r)

N = int(input("Enter the value of N: "))
R = int(input("Enter the value of R: "))
result = nPr(N, R)
print("nPr value:", result)
