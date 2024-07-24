for i in range(1, 6):  # Loop through rows from 1 to 5
    for j in range(1, i + 1):  # Loop through columns from 1 to the current row number
        print("*", end="")  # Print star without a newline
    print()  # Move to the next line after each row is printed
