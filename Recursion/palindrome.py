def is_palindrome(num, temp):
    if num == 0:
        return temp
    else:
        temp = temp * 10 + num % 10
        return is_palindrome(num // 10, temp)

number = int(input("Enter a number: "))
reversed_num = is_palindrome(number, 0)
if number == reversed_num:
    print(number, "is a palindrome.")
else:
    print(number, "is not a palindrome.")
