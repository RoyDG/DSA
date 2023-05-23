def sum_of_cubes(n):
    if n == 1:
        return 1
    else:
        return n**3 + sum_of_cubes(n - 1)

N = int(input("Enter the value of N: "))
result = sum_of_cubes(N)
print("Sum of cubes:", result)
