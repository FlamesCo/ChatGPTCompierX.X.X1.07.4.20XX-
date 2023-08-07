# Code for educational purposes - (c) ChatGPT Local LLM Interpreter #HWC

def interpret_code(code):
    # Split the code into lines
    lines = code.split('\n')

    # Loop through each line
    for line_number, line in enumerate(lines, start=1):
        # Remove leading and trailing spaces
        line = line.strip()

        # Ignore empty lines
        if not line:
            continue

        # Check for comments and ignore them
        if line.startswith('#'):
            continue

        # Parse the command and arguments
        parts = line.split()
        command = parts[0].lower()
        arguments = parts[1:]

        # Perform actions based on the command
        if command == 'print':
            if not arguments:
                print(f"Error at line {line_number}: 'print' command requires arguments.")
            else:
                # Print the arguments
                print(' '.join(arguments))
        elif command == 'add':
            if not arguments:
                print(f"Error at line {line_number}: 'add' command requires at least one argument.")
            else:
                # Convert arguments to integers and add them
                try:
                    result = sum(int(arg) for arg in arguments)
                    print(result)
                except ValueError:
                    print(f"Error at line {line_number}: Non-integer argument found for 'add' command.")
        elif command == 'multiply':
            if not arguments:
                print(f"Error at line {line_number}: 'multiply' command requires at least one argument.")
            else:
                # Convert arguments to integers and multiply them
                try:
                    result = 1
                    for arg in arguments:
                        result *= int(arg)
                    print(result)
                except ValueError:
                    print(f"Error at line {line_number}: Non-integer argument found for 'multiply' command.")
        else:
            # Unknown command
            print(f"Error at line {line_number}: Unknown command '{command}'. Please use 'print', 'add', or 'multiply'.")

# Example code to interpret
# code_example = """
# print Hello, World!
# add 5 7 8
# multiply 2 3 4
# """

# interpret_code(code_example)
