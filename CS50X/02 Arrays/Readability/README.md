# 02Arrays-Readability

## Overview
This program calculates the approximate U.S. grade level needed to comprehend a given text using the **Coleman–Liau index**.  
It counts the number of letters, words, and sentences, then applies the formula to determine readability.

## Concepts Learned
- Working with strings using `strlen`
- Character classification with `isalpha`
- Counting words and sentences
- Floating-point arithmetic
- Coleman–Liau index formula
- Conditional logic and formatting output

## Files
- `readability.c` - main source code

## Execution
To compile and run the program:

```bash
clang -o readability readability.c -lcs50 -lm
./readability
