<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=0,2,2,5,30&height=180&section=header&text=🦀%20Days%20Piscine&fontSize=50&fontColor=fff&animation=twinkling&fontAlignY=35&desc=42%20School%20C%20Programming%20Journey&descAlignY=55&descSize=18" />

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=28&duration=3000&pause=1000&color=00FF41&center=true&vCenter=true&multiline=true&repeat=false&width=800&height=100&lines=Learn+by+Doing+%7C+Think+First%2C+Code+Second;Master+C+Programming+Through+Practice" alt="Typing SVG" />
</p>

<p align="center">
  <a href="https://github.com/Itachi-Logic"><img src="https://img.shields.io/badge/Author-Itachi--Logic-00ff41?style=for-the-badge&logo=github&logoColor=white" alt="Author"/></a>
  <a href="https://www.1337.ma/"><img src="https://img.shields.io/badge/1337-Morocco-green?style=for-the-badge&logo=42&logoColor=white" alt="1337"/></a>
  <a href="https://42.fr"><img src="https://img.shields.io/badge/42-School-000000?style=for-the-badge&logo=42&logoColor=white" alt="42"/></a>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-00599C?style=flat-square&logo=c&logoColor=white" alt="C"/>
  <img src="https://img.shields.io/badge/Standard-C89/C99-blue?style=flat-square" alt="Standard"/>
  <img src="https://img.shields.io/badge/Norm-42%20Compliant-success?style=flat-square" alt="Norm"/>
  <img src="https://img.shields.io/badge/Exercises-42+-orange?style=flat-square" alt="Exercises"/>
</p>

---

### 🧠 Philosophy

> **"Don't be given the fish — learn how to fish."**
>
> This guide pushes you to **think and research first**. Each exercise contains hints that are **hidden by default**.  
> **Try your best before peeking!**

---
| Documentation | Live Preview |
| :--- | :--- |
| [Click here to read docs](https://github.com/Itachi-Logic/c-challenges-solved/blob/main/days_piscine/README.md) | [Click here to browse site](https://itachi-logic.github.io/c-challenges-solved/days_piscine/) |

### 📚 How to Use This Guide

| 🎯 **Required** | 📖 **You'll Learn** | 🔍 **Research** | 💡 **Hint** |
|:---:|:---:|:---:|:---:|
| What to do | Concepts gained | Topics to search | Only after trying! |

</div>

---

## 🗺️ Quick Navigation

<div align="center">

| [📕 C00](#-c00--introduction-to-c) | [📗 C01](#-c01--pointers--arrays) | [📘 C02](#-c02--string-functions) | [📙 C03](#-c03--string-comparison) | [📓 C04](#-c04--output-functions) | [📔 C05](#-c05--recursion--math) |
|:---:|:---:|:---:|:---:|:---:|:---:|

</div>

---

# 📕 C00 — Introduction to C

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                   ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Using write() system call for output                                   ║
║  ✦ Understanding while loops and iteration                                ║
║  ✦ Conditional statements (if/else)                                       ║
║  ✦ ASCII table and character manipulation                                 ║
║  ✦ Nested loops for generating combinations                               ║
║  ✦ Handling edge cases (INT_MIN, INT_MAX)                                 ║
║  ✦ Introduction to recursion                                              ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

</div>

---

### 🟢 ex00 — ft_putchar

| | |
|:--|:--|
| **🎯 Required** | Write a function that prints a single character to stdout |
| **📖 You'll Learn** | System calls, file descriptors, address-of operator |
| **📄 File** | `ft_putchar.c` |

**🔍 Research These:**
- `man 2 write`
- What is a file descriptor?
- What is stdout (fd 1)?
- How does `&` (address-of) operator work?

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
The `write` function is a system call that sends data to a file descriptor.
1.  **File Descriptor:** Use `1` for Standard Output (stdout).
2.  **Buffer:** The function requires a pointer to the memory location where the data resides. Even for a single character variable `c`, you must pass its address using `&c`.
3.  **Bytes:** Specify `1` byte since you are printing a single char.

</details>

---

### 🟢 ex01 — ft_print_alphabet

| | |
|:--|:--|
| **🎯 Required** | Print the alphabet from 'a' to 'z' |
| **📖 You'll Learn** | While loops, character incrementation, ASCII values |
| **📄 File** | `ft_print_alphabet.c` |

**🔍 Research These:**
- ASCII table (what number is 'a'? 'z'?)
- While loop syntax in C
- Can you do `'a' + 1`? What happens?

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
In C, characters are essentially small integers (ASCII values).
1.  Initialize a `char` variable to `'a'`.
2.  Create a loop that runs as long as the variable is less than or equal to `'z'`.
3.  Inside the loop, use your `ft_putchar` (or write) to print the current variable.
4.  Increment the variable (`i++`). This moves to the next ASCII value ('a' becomes 'b').

</details>

---

### 🟢 ex02 — ft_print_reverse_alphabet

| | |
|:--|:--|
| **🎯 Required** | Print the alphabet in reverse (z to a) |
| **📖 You'll Learn** | Reverse iteration, decrementing |
| **📄 File** | `ft_print_reverse_alphabet.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
This is the mirror of the previous exercise.
1.  Initialize your loop variable to `'z'`.
2.  The loop condition should run while the variable is greater than or equal to `'a'`.
3.  Decrement the variable (`i--`) in each iteration to move backwards through the ASCII table.

</details>

---

### 🟢 ex03 — ft_print_numbers

| | |
|:--|:--|
| **🎯 Required** | Print digits from 0 to 9 |
| **📖 You'll Learn** | Difference between `'0'` (char) and `0` (int) |
| **📄 File** | `ft_print_numbers.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
It is crucial to distinguish between the integer `0` and the character `'0'`.
1.  Start a variable at `'0'` (which is ASCII 48).
2.  Loop until it reaches `'9'` (ASCII 57).
3.  Print the character.
4.  Increment.

</details>

---

### 🟢 ex04 — ft_is_negative

| | |
|:--|:--|
| **🎯 Required** | Print 'N' if negative, 'P' if zero or positive |
| **📖 You'll Learn** | Conditional statements, comparison operators |
| **📄 File** | `ft_is_negative.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Use a basic `if-else` statement.
1.  Check if the integer `n` passed as a parameter is `< 0`.
2.  If true, print `'N'`.
3.  Otherwise (meaning it is 0 or positive), print `'P'`.

</details>

---

### 🟡 ex05 — ft_print_comb

| | |
|:--|:--|
| **🎯 Required** | Print all unique 3-digit ascending combinations: 012, 013... 789 |
| **📖 You'll Learn** | Nested loops, combination logic, int-to-char conversion |
| **📄 File** | `ft_print_comb.c` |

**🔍 Research These:**
- Nested while loops
- Why `+ 48` or `+ '0'` converts int to char?
- Combinations vs Permutations

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
You need to generate three digits (let's call them a, b, c) such that `a < b < c`.
1.  **Outer Loop (a):** Runs from 0 to 7.
2.  **Middle Loop (b):** Runs from `a + 1` to 8.
3.  **Inner Loop (c):** Runs from `b + 1` to 9.
4.  **Printing:** Inside the inner loop, convert the integers to characters (add 48 or '0') and print them.
5.  **Separators:** Print comma and space `, ` after the digits, *unless* it is the very last combination (789).

</details>

---

### 🟡 ex06 — ft_print_comb2

| | |
|:--|:--|
| **🎯 Required** | Print all pairs of two-digit numbers: "00 01", "00 02"... "98 99" |
| **📖 You'll Learn** | Division and modulo for digit extraction |
| **📄 File** | `ft_print_comb2.c` |

**🔍 Research These:**
- How to extract tens digit: `num / 10`
- How to extract ones digit: `num % 10`

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
You are comparing two numbers, let's call them `left` and `right`, both between 0 and 99.
1.  **Constraint:** `left` must always be strictly less than `right`.
2.  **Loops:** Outer loop iterates `left` from 0 to 98. Inner loop iterates `right` from `left + 1` to 99.
3.  **Displaying:** To print a number like 42 as characters:
    *   Tens digit: `42 / 10` -> 4.
    *   Ones digit: `42 % 10` -> 2.
    *   Convert results to char (add '0') and print.
4.  **Formatting:** Print space between the two numbers. Print comma/space after the pair, unless it's "98 99".

</details>

---

### 🟡 ex07 — ft_putnbr

| | |
|:--|:--|
| **🎯 Required** | Print any integer (including INT_MIN and INT_MAX) |
| **📖 You'll Learn** | Recursion, edge cases, integer limits |
| **📄 File** | `ft_putnbr.c` |

**🔍 Research These:**
- What is recursion?
- Why is `-2147483648` special? (Can't be negated!)
- `INT_MIN` and `INT_MAX` values

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Recursion simplifies this problem significantly.
1.  **Edge Case (INT_MIN):** The number -2147483648 cannot be converted to positive using standard math because +2147483648 exceeds the max integer size. Handle this with a specific `if` check and print it manually.
2.  **Negatives:** If `nb < 0`, print a minus sign `-`, then multiply `nb` by -1 to make it positive.
3.  **Recursion:** If `nb > 9`, call `ft_putnbr(nb / 10)`. This dives down to the first digit.
4.  **Print Digit:** Finally, print the last digit using modulo: `nb % 10` + '0'.

</details>

---

### 🔴 ex08 — ft_print_combn ⭐

| | |
|:--|:--|
| **🎯 Required** | Print all combinations of n different digits |
| **📖 You'll Learn** | Advanced recursion, backtracking, arrays |
| **📄 File** | `ft_print_combn.c` |

**🔍 Research These:**
- Backtracking algorithm
- Recursive combination generation
- How to detect the last combination

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
This is a generalized version of `ft_print_comb`. Since `n` is variable, you cannot write `n` nested while loops. You must use recursion.
1.  **Function Arguments:** Pass an array to store current digits, the target size `n`, the current index you are filling, and the previous value used.
2.  **Base Case:** If the current index equals `n`, you have a full combination. Print the array. Check if it's the absolute last combination to decide whether to print a comma.
3.  **Recursive Step:** Loop from `previous_value + 1` up to 9. Place the number in the array at the current index, then call the function recursively for `index + 1`.

</details>

---

# 📗 C01 — Pointers & Arrays

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                   ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Understanding pointers and memory addresses                            ║
║  ✦ Dereferencing with * operator                                          ║
║  ✦ Address-of with & operator                                             ║
║  ✦ Modifying variables through pointers                                   ║
║  ✦ Pointer arithmetic                                                     ║
║  ✦ Arrays and their relationship with pointers                            ║
║  ✦ Sorting algorithms (Bubble Sort)                                       ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

</div>

---

### 🟢 ex00 — ft_ft

| | |
|:--|:--|
| **🎯 Required** | Take a pointer to int and set the value to 42 |
| **📖 You'll Learn** | Basic pointer dereferencing |
| **📄 File** | `ft_ft.c` |

**🔍 Research These:**
- What is a pointer?
- What does `*ptr` do? (dereferencing)
- Pass by reference vs pass by value

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
You receive a pointer `nbr`. To access the "box" that the pointer points to, use the dereference operator `*`.
Simply assign 42 to `*nbr`.

</details>

---

### 🟡 ex01 — ft_ultimate_ft

| | |
|:--|:--|
| **🎯 Required** | Same but with 9 levels of pointers! |
| **📖 You'll Learn** | Multi-level pointer dereferencing |
| **📄 File** | `ft_ultimate_ft.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
To get to the integer value at the bottom of a chain of pointers, you must dereference once for every level of the chain.
Since the input is `int *********nbr`, you need to use the asterisk `*` nine times: `*********nbr = 42`.

</details>

---

### 🟢 ex02 — ft_swap

| | |
|:--|:--|
| **🎯 Required** | Swap two integer values using pointers |
| **📖 You'll Learn** | Classic swap algorithm, temporary variables |
| **📄 File** | `ft_swap.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
To swap two variables `a` and `b` without losing data:
1.  Store the value of `a` (accessed via `*a`) in a temporary integer variable.
2.  Overwrite the value of `a` with the value of `b` (accessed via `*b`).
3.  Overwrite the value of `b` with the stored temporary value.

</details>

---

### 🟢 ex03 — ft_div_mod

| | |
|:--|:--|
| **🎯 Required** | Calculate division and modulo, return via pointers |
| **📖 You'll Learn** | Returning multiple values from a function |
| **📄 File** | `ft_div_mod.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Standard C functions return only one value. Pointers allow us to "return" multiple results by modifying external memory.
1.  Calculate `a / b` and store the result in the location pointed to by `div`.
2.  Calculate `a % b` and store the result in the location pointed to by `mod`.

</details>

---

### 🟡 ex04 — ft_ultimate_div_mod

| | |
|:--|:--|
| **🎯 Required** | Division and modulo, but results replace inputs |
| **📖 You'll Learn** | Why temporary variables are crucial |
| **📄 File** | `ft_ultimate_div_mod.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
You are overwriting the inputs. The order matters!
1.  Save the original value of `*a` into a `temp` variable.
2.  Calculate division (`*a / *b`) and store it back into `*a`.
3.  Calculate modulo using the **saved** `temp` value (`temp % *b`) and store it into `*b`.
If you don't save `*a`, the modulo calculation would use the result of the division, which is wrong.

</details>

---

### 🟢 ex05 — ft_putstr

| | |
|:--|:--|
| **🎯 Required** | Print a string character by character |
| **📖 You'll Learn** | String traversal, null terminator |
| **📄 File** | `ft_putstr.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  Initialize an index counter `i = 0`.
2.  Loop while `str[i]` is not the null terminator (`\0`). In C, the null terminator evaluates to false.
3.  Inside the loop, write the character `str[i]`.
4.  Increment `i`.

</details>

---

### 🟢 ex06 — ft_strlen

| | |
|:--|:--|
| **🎯 Required** | Count the length of a string |
| **📖 You'll Learn** | String length calculation |
| **📄 File** | `ft_strlen.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Very similar to `putstr`, but instead of printing, you just count.
1.  Iterate through the string until you hit the null terminator.
2.  Keep a count of how many steps you took.
3.  Return that count.

</details>

---

### 🟡 ex07 — ft_rev_int_tab

| | |
|:--|:--|
| **🎯 Required** | Reverse an integer array in-place |
| **📖 You'll Learn** | Two-pointer technique, in-place algorithms |
| **📄 File** | `ft_rev_int_tab.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Use the "Two Pointer" approach.
1.  Pointer `start` looks at index 0.
2.  Pointer `end` looks at index `size - 1`.
3.  Loop while `start < end`.
4.  Swap the values at `tab[start]` and `tab[end]`.
5.  Move `start` forward and `end` backward.

</details>

---

### 🟡 ex08 — ft_sort_int_tab

| | |
|:--|:--|
| **🎯 Required** | Sort an integer array in ascending order |
| **📖 You'll Learn** | Bubble Sort algorithm |
| **📄 File** | `ft_sort_int_tab.c` |

**🔍 Research These:**
- Bubble Sort algorithm
- Why nested loops?
- Time complexity O(n²)

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Bubble Sort is the simplest sorting algorithm to implement.
1.  Use nested loops. The outer loop runs `size` times.
2.  The inner loop iterates through the array, comparing neighbor elements: `tab[j]` and `tab[j+1]`.
3.  If `tab[j] > tab[j+1]`, they are in the wrong order. Swap them.
4.  Repeat until the array is sorted.

</details>

---

# 📘 C02 — String Functions

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                   ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ String copying (safe and unsafe methods)                               ║
║  ✦ Character classification (alpha, numeric, printable)                   ║
║  ✦ Case conversion (uppercase/lowercase)                                  ║
║  ✦ ASCII table mastery                                                    ║
║  ✦ Buffer safety and size limits                                          ║
║  ✦ Hexadecimal representation                                             ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

</div>

---

### 🟢 ex00 — ft_strcpy

| | |
|:--|:--|
| **🎯 Required** | Copy string from src to dest |
| **📖 You'll Learn** | Basic string copying |
| **📄 File** | `ft_strcpy.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  Loop through the `src` string using an index.
2.  For every index, assign `dest[i] = src[i]`.
3.  **Crucial:** After the loop finishes (when you hit `src`'s null terminator), you must manually add the null terminator `\0` to `dest[i]` to ensure the destination string is valid.
4.  Return the pointer to `dest`.

</details>

---

### 🟢 ex01 — ft_strncpy

| | |
|:--|:--|
| **🎯 Required** | Copy at most n characters, pad with ' ' if needed |
| **📖 You'll Learn** | Bounded copying, null padding |
| **📄 File** | `ft_strncpy.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  Copy characters from `src` to `dest` just like `strcpy`, but stop if you reach the `n`th character OR if `src` ends.
2.  **Padding:** If `src` was shorter than `n`, you must fill the remaining space in `dest` (up to `n`) with null terminators `\0`. This is a strict requirement of `strncpy`.

</details>

---

### 🟢 ex02-06 — Character Classification Functions

| Exercise | Function | Checks for |
|:--|:--|:--|
| ex02 | `ft_str_is_alpha` | Only letters (a-z, A-Z) |
| ex03 | `ft_str_is_numeric` | Only digits (0-9) |
| ex04 | `ft_str_is_lowercase` | Only lowercase (a-z) |
| ex05 | `ft_str_is_uppercase` | Only uppercase (A-Z) |
| ex06 | `ft_str_is_printable` | Printable chars (32-126) |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
The logic is identical for all these functions, only the condition changes.
1.  Loop through the string.
2.  Inside the loop, check if the current character falls **outside** the valid range (e.g., for alpha, if it's NOT between 'A'-'Z' AND NOT between 'a'-'z').
3.  If you find an invalid character, return `0` immediately.
4.  If the loop finishes without finding any bad characters, return `1`.
5.  **Note:** An empty string should return `1`.

</details>

---

### 🟢 ex07 — ft_strupcase

| | |
|:--|:--|
| **🎯 Required** | Convert string to uppercase |
| **📖 You'll Learn** | Case conversion using ASCII arithmetic |
| **📄 File** | `ft_strupcase.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  Iterate through the string.
2.  Check if the current char is lowercase (`a` to `z`).
3.  If yes, convert it to uppercase by subtracting 32 from its ASCII value. (Because 'a' is 97 and 'A' is 65).
4.  Return the original string pointer.

</details>

---

### 🟢 ex08 — ft_strlowcase

| | |
|:--|:--|
| **🎯 Required** | Convert string to lowercase |
| **📖 You'll Learn** | Case conversion using ASCII arithmetic |
| **📄 File** | `ft_strlowcase.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Opposite of the previous exercise.
1.  If a char is uppercase (`A` to `Z`).
2.  Add 32 to make it lowercase.

</details>

---

### 🟡 ex09 — ft_strcapitalize

| | |
|:--|:--|
| **🎯 Required** | Capitalize first letter of each word, lowercase rest |
| **📖 You'll Learn** | State machines, word boundaries |
| **📄 File** | `ft_strcapitalize.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
You need to detect the start of words.
1.  First, lowercase the entire string (optional but safer).
2.  Use a "flag" or "state" variable (e.g., `is_start_of_word`) initialized to true.
3.  Loop through the string:
    *   If current char is alphanumeric AND `is_start_of_word` is true -> Uppercase it, then set flag to false.
    *   If current char is alphanumeric AND `is_start_of_word` is false -> Ensure it's lowercase (if you didn't do step 1).
    *   If current char is NOT alphanumeric (space, symbol) -> Set `is_start_of_word` to true.

</details>

---

### 🟡 ex10 — ft_strlcpy

| | |
|:--|:--|
| **🎯 Required** | Copy string with size limit, return src length |
| **📖 You'll Learn** | Safe string copying, buffer overflow prevention |
| **📄 File** | `ft_strlcpy.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
`strlcpy` is designed to be safer than `strncpy`.
1.  First, calculate the length of `src`. This is what you **always** return, regardless of how much you copied.
2.  If `size` is 0, return the length immediately.
3.  Copy characters from `src` to `dest` for `size - 1` bytes.
4.  Null-terminate `dest` at the end.

</details>

---

### 🔴 ex11 — ft_putstr_non_printable

| | |
|:--|:--|
| **🎯 Required** | Print non-printable chars as `\xx` (hex) |
| **📖 You'll Learn** | Hexadecimal conversion, unsigned chars |
| **📄 File** | `ft_putstr_non_printable.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  Loop through string.
2.  Check if char is printable (ASCII 32 to 126).
    *   If yes: Print it directly.
    *   If no: Print `\`, then print the character's ASCII value in Hexadecimal (base 16).
3.  **Hex Conversion:** To print a byte in hex:
    *   First digit: `char / 16`. Use a helper array `"0123456789abcdef"` to map the value.
    *   Second digit: `char % 16`.

</details>

---

### 🔴 ex12 — ft_print_memory

| | |
|:--|:--|
| **🎯 Required** | Display memory content in hexdump format |
| **📖 You'll Learn** | Memory visualization, hexadecimal formatting |
| **📄 File** | `ft_print_memory.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
This is a complex display function. You print 16 bytes per line.
1.  **Address:** Print the memory address of the first byte of the line in Hex (usually 16 chars long).
2.  **Hex Content:** Print the content of the 16 bytes in Hex. Format them nicely (e.g., pairs of 2, spaced out). Handle the last line where you might have fewer than 16 bytes (pad with spaces).
3.  **Printable Content:** Print the same 16 bytes as ASCII characters. If a byte is non-printable, print a dot `.`.
4.  Repeat until size is reached.

</details>

---

# 📙 C03 — String Comparison

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                   ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Lexicographic string comparison                                        ║
║  ✦ String concatenation                                                   ║
║  ✦ Substring search algorithms                                            ║
║  ✦ Safe/bounded string operations                                         ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

</div>

---

### 🟢 ex00 — ft_strcmp

| | |
|:--|:--|
| **🎯 Required** | Compare two strings, return difference |
| **📖 You'll Learn** | Lexicographic comparison |
| **📄 File** | `ft_strcmp.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  Loop as long as `s1[i]` equals `s2[i]` and `s1[i]` is not null.
2.  If the loop breaks (mismatch found or end reached), return the difference: `s1[i] - s2[i]`.
3.  **Note:** Cast characters to `unsigned char` before subtracting to handle extended ASCII correctly.

</details>

---

### 🟢 ex01 — ft_strncmp

| | |
|:--|:--|
| **🎯 Required** | Compare up to n characters |
| **📖 You'll Learn** | Bounded string comparison |
| **📄 File** | `ft_strncmp.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Same as `strcmp`, but with an added condition in the loop: `i < n`.
If `n` is 0, return 0 immediately.

</details>

---

### 🟢 ex02 — ft_strcat

| | |
|:--|:--|
| **🎯 Required** | Concatenate src to end of dest |
| **📖 You'll Learn** | String concatenation |
| **📄 File** | `ft_strcat.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  Find the end of the `dest` string (loop until you find `\0`).
2.  From that position, start copying `src` into `dest`.
3.  Add a null terminator at the very end.
4.  Return `dest`.

</details>

---

### 🟡 ex03 — ft_strncat

| | |
|:--|:--|
| **🎯 Required** | Concatenate at most nb characters |
| **📖 You'll Learn** | Bounded concatenation |
| **📄 File** | `ft_strncat.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Similar to `strcat`.
1.  Find end of `dest`.
2.  Copy `src` to `dest`, but stop if you copy `nb` characters or reach end of `src`.
3.  Always null-terminate the result.

</details>

---

### 🟡 ex04 — ft_strstr

| | |
|:--|:--|
| **🎯 Required** | Find first occurrence of needle in haystack |
| **📖 You'll Learn** | Substring search algorithm |
| **📄 File** | `ft_strstr.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  If `needle` is empty, return `str`.
2.  Loop through `str` (haystack).
3.  At each position, start an inner loop to check if `needle` matches the characters starting from that position.
4.  If the inner loop matches the entire `needle`, return the pointer to the current position in `str`.
5.  If outer loop finishes with no match, return 0 (NULL).

</details>

---

### 🟡 ex05 — ft_strlcat

| | |
|:--|:--|
| **🎯 Required** | Safe concatenation with size limit |
| **📖 You'll Learn** | Buffer overflow prevention |
| **📄 File** | `ft_strlcat.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  Calculate lengths of `dest` and `src`.
2.  If `size` (buffer size) is less than or equal to `dest` length, you can't append anything safely. Return `size + src_len`.
3.  Otherwise, append `src` to `dest`, ensuring the total string (including null) doesn't exceed `size`.
4.  Manually null terminate.
5.  Return `dest_len + src_len`.

</details>

---

# 📓 C04 — Output Functions

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                   ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ String length calculation                                              ║
║  ✦ String output to stdout                                                ║
║  ✦ Integer to string conversion                                           ║
║  ✦ Number base conversion (atoi, atoi_base, putnbr_base)                  ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

</div>

---

### 🟢 ex00 — ft_strlen

| | |
|:--|:--|
| **🎯 Required** | Return the length of a string |
| **📖 You'll Learn** | String traversal, counting |
| **📄 File** | `ft_strlen.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Simply iterate through the string array until you reach the null character. Return the index/counter.

</details>

---

### 🟢 ex01 — ft_putstr

| | |
|:--|:--|
| **🎯 Required** | Display a string to stdout |
| **📖 You'll Learn** | String output using write |
| **📄 File** | `ft_putstr.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
Reuse `ft_strlen` to find the length, then use the `write` system call to print the whole buffer at once, OR write char by char in a loop.

</details>

---

### 🟢 ex02 — ft_putnbr

| | |
|:--|:--|
| **🎯 Required** | Display an integer |
| **📖 You'll Learn** | Number to string conversion, recursion |
| **📄 File** | `ft_putnbr.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
See C00 ex07. The logic is identical: Handle INT_MIN, handle negatives, use recursion for digits > 9, print last digit.

</details>

---

### 🟡 ex03 — ft_atoi

| | |
|:--|:--|
| **🎯 Required** | Convert a string to an integer |
| **📖 You'll Learn** | String parsing, sign handling |
| **📄 File** | `ft_atoi.c` |

**🔍 Research These:**
- ASCII values for whitespace
- How to convert char digit '5' to int 5
- Integer overflow handling (though strict atoi usually ignores this in piscine context)

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  **Whitespace:** Skip any initial whitespace characters (space, tab, newline, etc.).
2.  **Signs:** Count the number of minus `-` signs. If the number of minuses is odd, the result is negative. (e.g., `---` is negative). Note: strict `atoi` usually only allows one sign, but in some variations (like `ft_atoi` in some subject versions), multiple signs are handled. Check your subject! Assuming standard behaviour: check for a single `+` or `-`.
3.  **Conversion:** Iterate through digits. For each digit:
    *   Multiply current result by 10 (shifts digits left).
    *   Add the new digit value (`str[i] - '0'`).
4.  **Return:** Apply the sign and return the integer. Stop at the first non-digit.

</details>

---

# 📔 C05 — Recursion & Math

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                   ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Iteration vs Recursion                                                 ║
║  ✦ Factorial calculation                                                  ║
║  ✦ Power functions                                                        ║
║  ✦ Fibonacci sequence                                                     ║
║  ✦ Square root approximation                                              ║
║  ✦ Prime number checking                                                  ║
║  ✦ Backtracking algorithms                                                ║
║  ✦ The famous N-Queens puzzle!                                            ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

</div>

---

### 🟢 ex00 — ft_iterative_factorial

| | |
|:--|:--|
| **🎯 Required** | Calculate factorial using iteration |
| **📖 You'll Learn** | Factorial concept, iterative approach |
| **📄 File** | `ft_iterative_factorial.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  **Edge Case:** If number is < 0, return 0. If number is 0, return 1.
2.  **Loop:** Initialize result to 1. Loop from 1 to `nb`.
3.  Multiply result by loop index.

</details>

---

### 🔴 ex08 — ft_ten_queens_puzzle ⭐⭐⭐

| | |
|:--|:--|
| **🎯 Required** | Place 10 queens on 10×10 board with no conflicts |
| **📖 You'll Learn** | Backtracking, constraint checking, recursion |
| **📄 File** | `ft_ten_queens_puzzle.c` |

**🔍 Research These:**
- N-Queens problem
- Backtracking algorithm
- How queens attack (row, column, diagonals)

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**Logic Explanation:**
1.  **Board Representation:** You only need an array of 10 integers. `board[col] = row` means "In column `col`, the queen is at row `row`".
2.  **Constraint Check:** Before placing a queen, check:
    *   Is this row already taken? (Check array values).
    *   Is the diagonal taken? Mathematical check: `abs(row1 - row2) == abs(col1 - col2)`.
3.  **Recursive Solve:**
    *   Try placing a queen in the current column at rows 0 through 9.
    *   If valid, place it and recursively call for `column + 1`.
    *   If `column == 10`, you found a solution! Print it and return.

</details>

---

## 🎯 Golden Tips for Success

<div align="center">

| ✅ **DO** | ❌ **DON'T** |
|:--|:--|
| Read `man` pages (`man 2 write`) | Copy code blindly |
| Test edge cases (0, -1, INT_MIN, empty) | Start with the hardest exercise |
| Use `gcc -Wall -Wextra -Werror` | Ignore Norminette |
| Draw diagrams before coding | Give up too quickly |
| Ask peers for help | Use `printf` in submissions |

</div>

---

## 🚀 Quick Commands

```bash
# Compile with all warnings
gcc -Wall -Wextra -Werror file.c -o program

# Run Norminette
norminette file.c

# Test your function
./program
```

---

<div align="center">

### 💭 *"The only way to learn programming is by writing programs."*
#### — Dennis Ritchie, Creator of C

---

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=0,2,2,5,30&height=100&section=footer" />

**Made with ❤️ by [Itachi-Logic](https://github.com/Itachi-Logic) | 1337 Morocco | 42 Network**

</div>
