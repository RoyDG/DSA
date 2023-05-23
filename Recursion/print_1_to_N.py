def print_numbers(n):
    if n > 0:
        print_numbers(n - 1)
        print(n, end=" ")

N = int(input("Enter the value of N: "))
print("Numbers from 1 to N:", end=" ")
print_numbers(N)
print()
