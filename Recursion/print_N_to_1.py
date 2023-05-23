def print_numbers(n):
    if n > 0:
        print(n, end=" ")
        print_numbers(n - 1)

N = int(input("Enter the value of N: "))
print("Numbers from N to 1:", end=" ")
print_numbers(N)
print()
