# 03Arrays-Caesar

## Overview
This program implements the **Caesar cipher**, a simple encryption technique that shifts each letter in the plaintext by a fixed number of positions in the alphabet.  
Non-alphabetical characters are left unchanged.

## Concepts Learned
- Command-line arguments (`argc`, `argv`)
- Input validation (checking digits)
- String-to-integer conversion (`atoi`)
- Iterating through strings with loops
- Character manipulation with ASCII values
- Preserving case (uppercase vs lowercase)

## Files
- `caesar.c` - main source code

## Execution
To compile and run the program:

```bash
clang -o caesar caesar.c -lcs50
./caesar 13
