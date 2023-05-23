def sum_of_squares(n):
    if n == 1:
        return 1
    else:
        return n**2 + sum_of_squares(n - 1)

N = int(input("Enter the value of N: "))
result = sum_of_squares(N)
print("Sum of squares:", result)
