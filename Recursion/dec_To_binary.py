def decimal_to_binary(n):
    if n > 0:
        decimal_to_binary(n // 2)
        print(n % 2, end="")

decimal = int(input("Enter a decimal number: "))
print("Binary representation:", end=" ")
decimal_to_binary(decimal)
print()
