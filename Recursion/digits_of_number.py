def print_digits(n):
    if n < 10:
        print(n, end=" ")
        return
    print_digits(n // 10)
    print(n % 10, end=" ")

number = int(input("Enter a number: "))
print("Digits of the number:", end=" ")
print_digits(number)
print()
