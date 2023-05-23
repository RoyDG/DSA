def combination(n, r):
    if r == 0 or r == n:
        return 1
    else:
        return combination(n - 1, r - 1) + combination(n - 1, r)

n = int(input("Enter the value of n: "))
r = int(input("Enter the value of r: "))
result = combination(n, r)
print("Combination (nCr) =", result)
