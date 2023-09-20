## printf output function implementation##
*Detailed illustration of printf project by alx_se*

#accepted macros and functions
*va_arg
*va_list
*va_start
*va_end

Printf function is a variadic function that accepts variable arguments and prints the output to our screen.
Our custom _printf mimics the original printf.

TASK 0:
We handled these format specifiers -
%c
%s
%%

1. We parsed the strings character by character in a loop to determine what the value
2. Whenever our loop encounters a '%' character, it updates our pointer to point to the next address in sequence.
3. The address contains the next character to be parsed
4. If the next character is a 'c, we use va_arg to extract a variable of char data type from the memory in this case is va_list.
5. Else if the next character is 's', we use va_arg to extract a string literal using a character pointer.
6. Else if the next character is '%' we use the va_arg to extract the '%' percent character.
7. However, if we have a format specifier that doesn't match the indicated ones it prints  it out. Example, %p will be printed out.