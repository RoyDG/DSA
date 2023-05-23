def sum_numbers(n):
    if n == 1:
        return 1
    else:
        return n + sum_numbers(n - 1)

N = int(input("Enter the value of N: "))
result = sum_numbers(N)
print("Sum of numbers from 1 to", N, ":", result)
