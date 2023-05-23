def print_name():
    print("Your Name")

def print_name_recursively(n):
    if n > 0:
        print_name_recursively(n - 1)
        print_name()

repetitions = int(input("Enter the number of times to print the name: "))
print_name_recursively(repetitions)
