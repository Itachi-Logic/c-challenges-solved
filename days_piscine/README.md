<div align="center">

# 📅 Days Piscine | 42 School Daily Exercises

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Orbitron&size=28&duration=3000&pause=1000&color=00FF41&center=true&vCenter=true&width=800&height=100&lines=Days+Piscine+C;Educational+Guide+%7C+Learn+by+Doing;Pointers+%26+String+Operations;Algorithm+Mastery" alt="Typing SVG" />
</p>

[![C Language](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![42 School](https://img.shields.io/badge/🎓_42_School-000000?style=for-the-badge&logo=42&logoColor=white)](https://42.fr)
[![1337 Morocco](https://img.shields.io/badge/1337-Morocco-green?style=for-the-badge)](https://www.1337.ma/)
[![Educational](https://img.shields.io/badge/📚-Educational_Guide-FFD700?style=for-the-badge)](.)

<br>

> ### 🧠 *"Don't be given the fish, learn how to fish"*
> 
> This guide is designed to push you to **think and research first**.
> Each exercise contains hints that are **hidden by default** — try your best before peeking!

---

### 📖 How to Use This Guide

| 🎯 **Required** | 📚 **You'll Learn** | 🔍 **Research** | 💡 **Hint** |
|:---------------:|:-------------------:|:---------------:|:-----------:|
| What you need to do | Concepts you'll gain | Topics to search | Only after trying! |

---

</div>

## 🗺️ Navigation

<div align="center">

| 📕 [C00](#-c00---introduction-to-c) | 📗 [C01](#-c01---pointers--arrays) | 📘 [C02](#-c02---string-functions) | 📙 [C03](#-c03---string-comparison) | 📓 [C04](#-c04---output-functions) | 📔 [C05](#-c05---recursion--math) |
|:---:|:---:|:---:|:---:|:---:|:---:|

</div>

---

# 📕 C00 - Introduction to C

<div align="center">

### *"Your First Steps in C Programming"*

</div>

### 🎓 What You'll Learn in This Module

| Concept | Description |
|:--------|:------------|
| `write()` | System call to output characters to screen |
| `while` loops | Repeating code until a condition is false |
| `if/else` | Making decisions in your code |
| ASCII | Converting numbers to characters and vice versa |
| Nested loops | Loops inside loops for combinations |
| Edge cases | Handling special values like `INT_MIN` |

---

### ex00 - ft_putchar

| 🎯 Required | Write a function that prints a single character to the screen |
|:------------|:-------------------------------------------------------------|
| 📄 **File** | `ft_putchar.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- How to use a system call for writing
- What file descriptors are
- How to pass variables by address

**🔍 Research These:**
- `man 2 write`
- What is a file descriptor?
- What is stdout (fd 1)?
- Address-of operator (`&`)

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

The `write()` function takes 3 parameters:

```c
write(1, &c, 1);
// 1 = stdout (the screen)
// &c = address of the character in memory
// 1 = number of bytes to print
```

**💡 Tip:** `&c` gives you the memory address of variable `c`.

</details>

---

### ex01 - ft_print_alphabet

| 🎯 Required | Print the alphabet from 'a' to 'z' |
|:------------|:-----------------------------------|
| 📄 **File** | `ft_print_alphabet.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- While loops
- Incrementing variables
- Characters are numbers in ASCII!

**🔍 Research These:**
- ASCII table
- `while` loop in C
- `char` data type

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

Characters in C are actually numbers! `'a'` = 97, `'b'` = 98... You can increment them!

```c
char c = 'a';
while (c <= 'z')
{
    ft_putchar(c);
    c++;  // 'a' becomes 'b'
}
```

</details>

---

### ex02 - ft_print_reverse_alphabet

| 🎯 Required | Print the alphabet from 'z' to 'a' (reversed) |
|:------------|:----------------------------------------------|
| 📄 **File** | `ft_print_reverse_alphabet.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- Reverse iteration
- Decrementing variables

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

Same concept as before, but start from `'z'` and decrement: `c--`

</details>

---

### ex03 - ft_print_numbers

| 🎯 Required | Print digits from 0 to 9 |
|:------------|:-------------------------|
| 📄 **File** | `ft_print_numbers.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- `'0'` is NOT `0`! The difference between character and integer in ASCII

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

`'0'` = 48 in ASCII. You can use `char c = '0'` and loop until `'9'`.

</details>

---

### ex04 - ft_is_negative

| 🎯 Required | Print 'N' if negative, 'P' if zero or positive |
|:------------|:------------------------------------------------|
| 📄 **File** | `ft_is_negative.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- `if/else` conditions
- Comparing numbers

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
if (n < 0)
    ft_putchar('N');
else
    ft_putchar('P');
```

</details>

---

### ex05 - ft_print_comb

| 🎯 Required | Print all unique 3-digit combinations in ascending order: 012, 013... 789 |
|:------------|:--------------------------------------------------------------------------|
| 📄 **File** | `ft_print_comb.c` |
| 📊 **Difficulty** | 🟡 Medium |

**📚 You'll Learn:**
- Nested loops
- Thinking about combinations
- Converting `int` to `char`

**🔍 Research These:**
- Nested loops in C
- Converting int to char (`+48` or `+'0'`)
- Combinations vs Permutations

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**The idea:** 3 nested loops:

```c
// i from 0-7, j from i+1 to 8, k from j+1 to 9
// This ensures i < j < k always
// To print a number as char: ft_putchar(i + '0')
// Or: ft_putchar(i + 48)
```

⚠️ Don't forget the comma between combinations (except the last one)!

</details>

---

### ex06 - ft_print_comb2

| 🎯 Required | Print all pairs of numbers from 00 to 99: "00 01", "00 02"... "98 99" |
|:------------|:----------------------------------------------------------------------|
| 📄 **File** | `ft_print_comb2.c` |
| 📊 **Difficulty** | 🟡 Medium |

**📚 You'll Learn:**
- Extracting digits using division and modulo (`/` and `%`)
- Printing two-digit numbers

**🔍 Research These:**
- Division and modulo operators in C
- How to print two-digit numbers

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

To print a two-digit number like 42:

```c
ft_putchar((42 / 10) + '0');  // prints 4
ft_putchar((42 % 10) + '0');  // prints 2
```

</details>

---

### ex07 - ft_putnbr

| 🎯 Required | Print any integer (from `INT_MIN` to `INT_MAX`) |
|:------------|:------------------------------------------------|
| 📄 **File** | `ft_putnbr.c` |
| 📊 **Difficulty** | 🟡 Medium |

**📚 You'll Learn:**
- Recursion
- Handling edge cases
- Integer limits

**🔍 Research These:**
- Recursion in C
- `INT_MIN` and `INT_MAX`
- Why `-2147483648` is special

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**The Algorithm:**

```c
// Special case: INT_MIN cannot be converted to positive!
if (nb == -2147483648)
{
    write(1, "-2147483648", 11);
    return;
}
// If negative: print '-' then flip the sign
// If > 9: call the function on nb/10
// Print last digit: nb % 10 + '0'
```

</details>

---

### ex08 - ft_print_combn ⭐

| 🎯 Required | Print all combinations of n different digits (n is passed as parameter) |
|:------------|:-------------------------------------------------------------------------|
| 📄 **File** | `ft_print_combn.c` |
| 📊 **Difficulty** | 🔴 Hard |

**📚 You'll Learn:**
- Backtracking algorithm
- Advanced recursion
- Arrays
- Solving complex problems

**🔍 Research These:**
- Backtracking algorithm
- Generating combinations recursively
- Arrays in C

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**The idea:** A recursive function that fills an array:

```c
void generate(int *comb, int n, int index, int start)
{
    if (index == n)
    {
        // print comb array
        return;
    }
    for (int val = start; val <= 9; val++)
    {
        comb[index] = val;
        generate(comb, n, index + 1, val + 1);
    }
}
```

</details>

---

# 📗 C01 - Pointers & Arrays

<div align="center">

### *"Mastering Pointers - The Heart of C"*

</div>

### 🎓 What You'll Learn in This Module

| Concept | Description |
|:--------|:------------|
| Pointers | What are they? How do they work? Why use them? |
| `&` operator | Getting the address of a variable |
| `*` operator | Dereferencing - accessing the value a pointer points to |
| Modifying variables | Changing values inside functions via pointers |
| Arrays & Pointers | They're closely related! |
| Pointer Arithmetic | Moving through memory |
| Sorting | Bubble sort algorithm |

---

### ex00 - ft_ft

| 🎯 Required | Write a function that takes a pointer to int and sets its value to 42 |
|:------------|:----------------------------------------------------------------------|
| 📄 **File** | `ft_ft.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- Pointer basics
- How to change a variable's value from inside a function

**🔍 Research These:**
- What is a pointer in C?
- Dereferencing a pointer (`*ptr`)
- Pass by reference vs pass by value

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
void ft_ft(int *nbr)
{
    *nbr = 42;  // * to access the value the pointer points to
}
```

In main: `ft_ft(&x);` where `x` is an int variable.

</details>

---

### ex01 - ft_ultimate_ft

| 🎯 Required | Same thing but with 9 levels of pointers! (pointer to pointer to pointer...) |
|:------------|:------------------------------------------------------------------------------|
| 📄 **File** | `ft_ultimate_ft.c` |
| 📊 **Difficulty** | 🟡 Medium |

**📚 You'll Learn:**
- Deep understanding of multi-level pointers

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;  // 9 asterisks to dereference
}
```

</details>

---

### ex02 - ft_swap

| 🎯 Required | Swap the values of two variables using pointers |
|:------------|:------------------------------------------------|
| 📄 **File** | `ft_swap.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- Using a temporary variable
- Swapping values

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
int temp = *a;  // save value of a
*a = *b;        // put b's value in a
*b = temp;      // put saved value in b
```

</details>

---

### ex03 - ft_div_mod

| 🎯 Required | Calculate division and modulo, return results via pointers |
|:------------|:-----------------------------------------------------------|
| 📄 **File** | `ft_div_mod.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- Returning multiple values from a function using pointers

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
```

</details>

---

### ex04 - ft_ultimate_div_mod

| 🎯 Required | Same as div_mod but results replace the inputs |
|:------------|:-----------------------------------------------|
| 📄 **File** | `ft_ultimate_div_mod.c` |
| 📊 **Difficulty** | 🟡 Medium |

**💡 Tip:** You need a temp variable! Think about why.

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = *a / *b;
    *b = temp % *b;  // Use temp because *a was modified!
}
```

</details>

---

### ex05 - ft_putstr

| 🎯 Required | Print a string character by character |
|:------------|:--------------------------------------|
| 📄 **File** | `ft_putstr.c` |
| 📊 **Difficulty** | 🟢 Easy |

**🔍 Research These:**
- Null terminator `'\0'`
- Strings in C

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

Loop through the string until you hit `'\0'` (null terminator).

```c
while (str[i])  // same as: while (str[i] != '\0')
{
    ft_putchar(str[i]);
    i++;
}
```

</details>

---

### ex06 - ft_strlen

| 🎯 Required | Count the length of a string |
|:------------|:-----------------------------|
| 📄 **File** | `ft_strlen.c` |
| 📊 **Difficulty** | 🟢 Easy |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

Count characters until `'\0'`.

</details>

---

### ex07 - ft_rev_int_tab

| 🎯 Required | Reverse an integer array in-place |
|:------------|:----------------------------------|
| 📄 **File** | `ft_rev_int_tab.c` |
| 📊 **Difficulty** | 🟡 Medium |

**🔍 Research These:**
- Two-pointer technique
- Swapping array elements

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

Use two pointers: one from the start, one from the end. Swap and move towards the middle.

</details>

---

### ex08 - ft_sort_int_tab

| 🎯 Required | Sort an integer array in ascending order |
|:------------|:-----------------------------------------|
| 📄 **File** | `ft_sort_int_tab.c` |
| 📊 **Difficulty** | 🟡 Medium |

**🔍 Research These:**
- Bubble Sort algorithm
- Selection Sort
- Sorting algorithms visualization (YouTube)

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Bubble Sort:** Compare each pair of adjacent elements, swap if needed, repeat until sorted.

```c
// Outer loop: repeat size-1 times
// Inner loop: compare tab[j] with tab[j+1], swap if tab[j] > tab[j+1]
```

</details>

---

# 📘 C02 - String Functions

<div align="center">

### *"Deep Dive into String Manipulation"*

</div>

### 🎓 What You'll Learn in This Module

| Concept | Description |
|:--------|:------------|
| String copying | Safe and unsafe methods |
| Character checks | Is it a letter? digit? printable? |
| Case conversion | uppercase ↔ lowercase |
| ASCII table | How to use it for transformations |
| Buffer safety | Avoiding buffer overflow |

---

### ex00 - ft_strcpy

| 🎯 Required | Copy a string from src to dest |
|:------------|:-------------------------------|
| 📄 **File** | `ft_strcpy.c` |
| 📊 **Difficulty** | 🟢 Easy |

**🔍 Research:** `man strcpy`

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

Copy character by character until `'\0'`, then add `'\0'` to dest.

</details>

---

### ex01 - ft_strncpy

| 🎯 Required | Copy at most n characters from src to dest |
|:------------|:-------------------------------------------|
| 📄 **File** | `ft_strncpy.c` |
| 📊 **Difficulty** | 🟢 Easy |

**⚠️ Important:** If src is shorter than n, pad dest with `'\0'` until n characters!

---

### ex02-06 - Character Checks

| Exercise | Function | What to Check |
|:---------|:---------|:--------------|
| ex02 | `ft_str_is_alpha` | Only letters (a-z, A-Z) |
| ex03 | `ft_str_is_numeric` | Only digits (0-9) |
| ex04 | `ft_str_is_lowercase` | Only lowercase (a-z) |
| ex05 | `ft_str_is_uppercase` | Only uppercase (A-Z) |
| ex06 | `ft_str_is_printable` | ASCII 32-126 |

**🔍 Research:** ASCII table, character ranges

<details>
<summary>💡 <b>General approach</b></summary>

<br>

```c
// Return 1 if ALL characters pass the check
// Return 0 if ANY character fails
// Empty string returns 1!
while (str[i])
{
    if (NOT_VALID_CHARACTER)
        return (0);
    i++;
}
return (1);
```

</details>

---

### ex07 - ft_strupcase

| 🎯 Required | Convert string to UPPERCASE |
|:------------|:----------------------------|
| 📄 **File** | `ft_strupcase.c` |
| 📊 **Difficulty** | 🟢 Easy |

**💡 Tip:** The difference between `'a'` and `'A'` is 32 in ASCII.

---

### ex08 - ft_strlowcase

| 🎯 Required | Convert string to lowercase |
|:------------|:----------------------------|
| 📄 **File** | `ft_strlowcase.c` |
| 📊 **Difficulty** | 🟢 Easy |

---

### ex09 - ft_strcapitalize

| 🎯 Required | Capitalize the first letter of each word, lowercase the rest |
|:------------|:-------------------------------------------------------------|
| 📄 **File** | `ft_strcapitalize.c` |
| 📊 **Difficulty** | 🟡 Medium |

**📚 You'll Learn:**
- Using a flag to track state
- What counts as a "word separator"

**💡 Tip:** Words are separated by anything that's NOT alphanumeric.

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

Use a flag: `new_word = 1` at the start and after any non-alphanumeric character.

```c
// If new_word && is_letter → uppercase, set new_word = 0
// If is_alphanumeric → lowercase, set new_word = 0
// Else → set new_word = 1
```

</details>

---

### ex10 - ft_strlcpy

| 🎯 Required | Safe string copy with size limit |
|:------------|:---------------------------------|
| 📄 **File** | `ft_strlcpy.c` |
| 📊 **Difficulty** | 🟡 Medium |

**🔍 Research:** `man strlcpy` - Pay attention to the return value!

---

### ex11 - ft_putstr_non_printable

| 🎯 Required | Print non-printable characters as `\xx` (hexadecimal) |
|:------------|:------------------------------------------------------|
| 📄 **File** | `ft_putstr_non_printable.c` |
| 📊 **Difficulty** | 🔴 Hard |

**🔍 Research:**
- Hexadecimal conversion
- Printable range (32-126)

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
char *hex = "0123456789abcdef";
// For non-printable char c:
write(1, "\\", 1);
write(1, &hex[c / 16], 1);  // High nibble
write(1, &hex[c % 16], 1);  // Low nibble
```

</details>

---

### ex12 - ft_print_memory ⭐

| 🎯 Required | Display memory content as a hex dump (like `xxd`) |
|:------------|:--------------------------------------------------|
| 📄 **File** | `ft_print_memory.c` |
| 📊 **Difficulty** | 🔴 Hard |

**🔍 Research:**
- hexdump format
- Printing memory addresses in hex
- `void` pointer casting

---

# 📙 C03 - String Comparison

<div align="center">

### *"Comparing and Concatenating Strings"*

</div>

### 🎓 What You'll Learn in This Module

| Concept | Description |
|:--------|:------------|
| Lexicographic comparison | Comparing strings like a dictionary |
| Concatenation | Joining strings together |
| Substring search | Finding a needle in a haystack |
| Bounded functions | Safe operations with limits |

---

### ex00 - ft_strcmp

| 🎯 Required | Compare two strings lexicographically |
|:------------|:--------------------------------------|
| 📄 **File** | `ft_strcmp.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- Return the difference between the first different characters
- Return 0 if strings are equal

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
while (*s1 && *s1 == *s2)
{
    s1++;
    s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
```

</details>

---

### ex01 - ft_strncmp

| 🎯 Required | Compare at most n characters of two strings |
|:------------|:--------------------------------------------|
| 📄 **File** | `ft_strncmp.c` |
| 📊 **Difficulty** | 🟢 Easy |

---

### ex02 - ft_strcat

| 🎯 Required | Append src string to the end of dest |
|:------------|:-------------------------------------|
| 📄 **File** | `ft_strcat.c` |
| 📊 **Difficulty** | 🟢 Easy |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

1. Find the end of dest (where `'\0'` is)
2. Copy src to that position
3. Add `'\0'` at the end

</details>

---

### ex03 - ft_strncat

| 🎯 Required | Append at most n characters from src |
|:------------|:-------------------------------------|
| 📄 **File** | `ft_strncat.c` |
| 📊 **Difficulty** | 🟡 Medium |

---

### ex04 - ft_strstr

| 🎯 Required | Find the first occurrence of needle in haystack |
|:------------|:------------------------------------------------|
| 📄 **File** | `ft_strstr.c` |
| 📊 **Difficulty** | 🟡 Medium |

**🔍 Research:**
- Brute force string search
- Return pointer to match or NULL

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

```c
// For each position in haystack:
//   Try to match the entire needle starting here
//   If full match found, return pointer to this position
// If needle is empty, return haystack
// If not found, return NULL (or 0)
```

</details>

---

### ex05 - ft_strlcat

| 🎯 Required | Safe concatenation with size limit |
|:------------|:-----------------------------------|
| 📄 **File** | `ft_strlcat.c` |
| 📊 **Difficulty** | 🔴 Hard |

**🔍 Research:** `man strlcat` - The return value is tricky!

---

# 📓 C04 - Output Functions

<div align="center">

### *"Advanced Output Operations"*

</div>

### 🎓 What You'll Learn in This Module

| Concept | Description |
|:--------|:------------|
| Re-implementing basics | strlen, putstr without using library |
| Number to string | Converting integers to printable characters |
| Different bases | Working with various number systems |

---

### Exercises

| Exercise | Function | Description | Difficulty |
|:---------|:---------|:------------|:-----------|
| ex00 | `ft_strlen` | Calculate string length | 🟢 Easy |
| ex01 | `ft_putstr` | Print a string | 🟢 Easy |
| ex02 | `ft_putnbr` | Print an integer | 🟡 Medium |

---

# 📔 C05 - Recursion & Math

<div align="center">

### *"The Power of Recursion"*

</div>

### 🎓 What You'll Learn in This Module

| Concept | Description |
|:--------|:------------|
| Iteration vs Recursion | Two ways to repeat operations |
| Mathematical functions | Factorial, Fibonacci, Power |
| Backtracking | Exploring and undoing choices |
| N-Queens Problem | A famous computer science puzzle! |

---

### ex00 - ft_iterative_factorial

| 🎯 Required | Calculate n! using a loop (not recursion) |
|:------------|:------------------------------------------|
| 📄 **File** | `ft_iterative_factorial.c` |
| 📊 **Difficulty** | 🟢 Easy |

**📚 You'll Learn:**
- `5! = 5 × 4 × 3 × 2 × 1 = 120`
- Handle edge cases: `0! = 1`, negative returns error

---

### ex08 - ft_ten_queens_puzzle ⭐⭐⭐

| 🎯 Required | Place 10 queens on a 10×10 chessboard so no queen threatens another |
|:------------|:--------------------------------------------------------------------|
| 📄 **File** | `ft_ten_queens_puzzle.c` |
| 📊 **Difficulty** | 🔴 Very Hard |

**📚 You'll Learn:**
- Backtracking algorithm
- Constraint satisfaction
- Algorithm optimization

**🔍 Research These:**
- N-Queens problem
- Backtracking algorithm
- How to check diagonal attacks
- Queen movement in chess

<details>
<summary>💡 <b>Tried REALLY hard and still stuck? Click here</b></summary>

<br>

**The Core Idea:**

1. Use an array `board[10]` where `board[col] = row` for the queen in column `col`
2. Start from column 0, try each row
3. Before placing a queen, check:
   - Is there a queen in the same row?
   - Is there a queen on the diagonal? (`|row1-row2| == |col1-col2|`)
4. If you reach column 10, you found a solution! Print it.
5. Backtrack and try the next row

```c
int is_safe(int *board, int col, int row)
{
    for (int i = 0; i < col; i++)
    {
        if (board[i] == row)  // Same row
            return 0;
        if (abs(board[i] - row) == abs(i - col))  // Diagonal
            return 0;
    }
    return 1;
}
```

</details>

---

# 🎯 Golden Tips for Success

<div align="center">

| ✅ DO | ❌ DON'T |
|:------|:---------|
| Read man pages: `man 2 write` | Copy code - you'll be caught and excluded! |
| Test edge cases (0, -1, INT_MIN, empty string) | Start with the hardest exercise |
| Use `gcc -Wall -Wextra -Werror` | Ignore the Norminette |
| Write a `main()` to test your functions | Use `printf` (except for testing) |
| Draw on paper before coding | Give up too quickly |
| Ask peers (peer learning is encouraged!) | Skip understanding - just memorizing |

</div>

---

## 📊 Progress Overview

<div align="center">

| Module | Exercises | Focus | Status |
|:------:|:---------:|:------|:------:|
| 📕 C00 | 9 | Introduction to C | ✅ |
| 📗 C01 | 9 | Pointers & Arrays | ✅ |
| 📘 C02 | 13 | String Functions | ✅ |
| 📙 C03 | 6 | String Comparison | ✅ |
| 📓 C04 | 3 | Output Functions | 🚧 |
| 📔 C05 | 2 | Recursion & Math | ✅ |

</div>

---

## 🚀 Quick Start

```bash
# Compile any exercise
gcc -Wall -Wextra -Werror C00/ex00/ft_putchar.c -o test

# Run it
./test

# Check with Norminette
norminette C00/ex00/ft_putchar.c
```

---

<div align="center">

## 📚 Recommended Resources

| 📖 Resource | 🎯 Focus |
|:------------|:---------|
| `man` pages | Official documentation |
| [ASCII Table](https://www.asciitable.com/) | Character codes |
| [Visualgo](https://visualgo.net/) | Algorithm visualization |
| [C Programming](https://www.learn-c.org/) | Interactive tutorials |

---

<br>

### 🌟 *"The only way to learn programming is by writing programs"*
#### — Dennis Ritchie, Creator of C

<br>

---

**Made with ❤️ and lots of ☕ by [Itachi-Logic](https://github.com/Itachi-Logic)**

*1337 Morocco | 42 Network*

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=0,2,2,5,30&height=100&section=footer" />

</div>
