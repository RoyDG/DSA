def tribonacci(n):
    if n == 0:
        return 0
    elif n == 1 or n == 2:
        return 1
    else:
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3)

num = int(input("Enter the number of terms: "))
print("Tribonacci Sequence:", end=" ")
for i in range(num):
    print(tribonacci(i), end=" ")
print()
