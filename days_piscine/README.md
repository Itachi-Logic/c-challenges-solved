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
  <img src="https://img.shields.io/badge/Exercises-50+-orange?style=flat-square" alt="Exercises"/>
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

**🧠 Logic & Approach:**

1. **Understanding `write()`:** This system call sends bytes to a destination. It needs three things:
   - WHERE to write (file descriptor: 1 = screen/stdout)
   - WHAT to write (memory address of data)
   - HOW MUCH to write (number of bytes)

2. **Why `&c`?** The `write()` function expects a memory address, not the character itself. The `&` operator gives you the address where `c` is stored in memory.

3. **The number 1:** We write exactly 1 byte because a `char` is 1 byte.

**💡 Key Insight:** Think of `write()` like mailing a letter - you need the destination address (fd), the content's location (&c), and how many pages (1 byte).

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

**🧠 Logic & Approach:**

1. **Characters are numbers!** In ASCII, 'a' = 97, 'b' = 98, ..., 'z' = 122. So you can do math with them!

2. **The pattern:**
   - Start with a variable holding 'a'
   - Print it
   - Add 1 to get the next letter
   - Repeat while you haven't passed 'z'

3. **Loop condition:** Keep going while your character is less than or equal to 'z'

**💡 Key Insight:** `i++` on a char doesn't add 1 to the letter visually - it adds 1 to its ASCII value, which happens to give you the next letter!

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

**🧠 Logic & Approach:**

1. **Same concept, opposite direction:** Instead of starting at 'a' and going up, start at 'z' and go down.

2. **The pattern:**
   - Start with 'z'
   - Print it
   - Subtract 1 to get the previous letter
   - Repeat while you haven't gone below 'a'

**💡 Key Insight:** If `++` moves forward in ASCII, then `--` moves backward. 'z' - 1 = 'y' in ASCII terms.

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

**🧠 Logic & Approach:**

1. **Critical distinction:** `'0'` is a CHARACTER with ASCII value 48. `0` is the INTEGER zero. They are NOT the same!

2. **Same loop pattern as alphabet:** Start at '0', increment, stop after '9'

3. **ASCII values:** '0' = 48, '1' = 49, ..., '9' = 57

**💡 Key Insight:** When you want to DISPLAY a digit, you need the character version. '0' through '9' are what appear on screen, not 0 through 9.

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

**🧠 Logic & Approach:**

1. **Simple decision:** Is the number >= 0? Then it's positive (or zero). Otherwise, it's negative.

2. **Two branches:** Use if/else to choose between printing 'P' or 'N'

3. **Edge case:** Zero is considered positive here (prints 'P')

**💡 Key Insight:** The condition `n >= 0` catches both positive numbers AND zero in one check.

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

**🧠 Logic & Approach:**

1. **Three nested loops:** One for each digit position. The key constraint is each digit must be LARGER than the previous.

2. **Loop ranges:**
   - First digit: 0 to 7 (why not 8 or 9? Because you need room for two more larger digits)
   - Second digit: starts at first+1, goes to 8
   - Third digit: starts at second+1, goes to 9

3. **Converting int to char:** Add 48 (or '0') to convert digit 0-9 to character '0'-'9'

4. **Comma logic:** Print ", " after each combination EXCEPT the last one (789)

**💡 Key Insight:** The constraint `first < second < third` is enforced by how you set up the loop starting points, not by checking inside the loop!

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

**🧠 Logic & Approach:**

1. **Two nested loops:** First number goes 0-98, second number goes from first+1 to 99

2. **Printing two-digit numbers:** For any number 0-99:
   - Tens digit = number / 10 (integer division drops remainder)
   - Ones digit = number % 10 (modulo gives remainder)

3. **Example:** For 42: `42 / 10 = 4` (tens), `42 % 10 = 2` (ones)

4. **Don't forget:** Convert each digit to char by adding '0' or 48

**💡 Key Insight:** Division and modulo are your tools for "breaking apart" numbers into individual digits.

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

**🧠 Logic & Approach:**

1. **The INT_MIN trap:** -2147483648 cannot be multiplied by -1 because 2147483648 doesn't fit in an int! Handle this case separately by printing it directly as a string.

2. **Handle negative:** If negative, print '-' then work with the positive version

3. **Recursive magic:** To print 1234:
   - First, recursively print 123 (the number without its last digit)
   - Then print 4 (the last digit)
   - Base case: if number < 10, just print it directly

4. **Getting digits:** Last digit = `n % 10`, remaining number = `n / 10`

**💡 Key Insight:** Recursion naturally handles the "print left digits first" problem. The call stack reverses the order for you!

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

**🧠 Logic & Approach:**

1. **Backtracking concept:** Try placing a digit, explore all possibilities from there, then "undo" and try the next digit.

2. **Recursive structure:**
   - Base case: When you've placed n digits, print the combination
   - Recursive case: Try each valid digit (larger than previous), place it, recurse for next position

3. **Array to store combination:** Use an array of size n to hold current combination being built

4. **Key constraint:** Each digit must be larger than the previous, so pass the "minimum next value" to recursive calls

5. **Detecting last combination:** The last valid combination is when first digit equals (10 - n). Example: for n=3, last is 789, and 7 = 10-3

**💡 Key Insight:** Backtracking is like exploring a maze - go down a path, hit a dead end, back up, try another path. The recursion handles the "backing up" automatically!

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

**🧠 Logic & Approach:**

1. **Pointer = Address holder:** A pointer variable stores a memory address, not a value directly.

2. **Dereferencing:** The `*` operator "follows" the address to access the actual value stored there.

3. **The operation:** `*nbr = 42` means "go to the address stored in nbr, and put 42 there"

4. **Why this works:** When someone passes `&x` to your function, you receive the address of their variable. Changing `*nbr` changes their original variable!

**💡 Key Insight:** Think of a pointer like a house address. The pointer holds the address, `*pointer` lets you go inside the house and change things.

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

**🧠 Logic & Approach:**

1. **Pointer to pointer to pointer...:** Each `*` in the type declaration adds one level of indirection.

2. **Dereferencing chain:** To get to the actual int, you must dereference once for each level.

3. **9 stars = 9 dereferences:** If you have `int *********nbr`, you need `*********nbr` to reach the int.

**💡 Key Insight:** It's like having directions to a map, that leads to another map, that leads to another map... 9 times. Each `*` follows one step of directions.

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

**🧠 Logic & Approach:**

1. **The problem:** You can't just do `a = b; b = a;` because after the first assignment, original `a` is lost!

2. **The solution:** Use a temporary variable to save one value before overwriting it.

3. **Three steps:**
   - Save the first value in temp
   - Overwrite first with second's value
   - Put saved value (temp) into second

**💡 Key Insight:** Imagine swapping contents of two cups - you need a third empty cup to temporarily hold one drink!

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

**🧠 Logic & Approach:**

1. **C's limitation:** Functions can only return ONE value. But what if you need two results?

2. **Pointer solution:** Accept pointers as parameters, write results to those addresses.

3. **The caller's perspective:** They create two variables, pass addresses, and after the function call, both variables contain results.

**💡 Key Insight:** Pointers let you "return" multiple values by modifying variables that exist in the caller's scope.

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

**🧠 Logic & Approach:**

1. **The trap:** If you calculate `*a = *a / *b` first, you've lost the original `*a` value needed for the modulo!

2. **Solution:** Save the original `*a` in a temporary variable BEFORE modifying anything.

3. **Order matters:**
   - Save original `*a`
   - Calculate and store division result in `*a`
   - Calculate modulo using saved value, store in `*b`

**💡 Key Insight:** Whenever you need a value after you've changed it, save it first! This is a common pattern in programming.

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

**🧠 Logic & Approach:**

1. **Strings in C:** A string is just an array of characters ending with `'\0'` (null terminator, ASCII 0).

2. **Traversal pattern:** Start at index 0, print each character, increment index, stop when you hit `'\0'`.

3. **Loop condition:** `str[i]` is "truthy" when it's any character except `'\0'`. When it's `'\0'` (value 0), the loop stops.

**💡 Key Insight:** The null terminator is your "stop sign" - it tells you where the string ends without needing to know the length in advance.

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

**🧠 Logic & Approach:**

1. **Same traversal as ft_putstr:** Walk through the string until null terminator.

2. **Count instead of print:** Instead of printing each character, just increment a counter.

3. **Return the count:** The counter's final value is the string length.

**💡 Key Insight:** Length does NOT include the null terminator. "Hello" has length 5, not 6.

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

**🧠 Logic & Approach:**

1. **Two-pointer technique:** Use one pointer/index at the start, another at the end.

2. **Swap and move inward:** Swap the elements at both positions, then move both pointers toward the center.

3. **Stop condition:** When the pointers meet or cross, you're done (array is reversed).

4. **Iterations needed:** Only need to go through half the array (each swap handles two elements).

**💡 Key Insight:** Reversing in-place means no extra array needed - just swap elements from opposite ends moving toward the middle.

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

**🧠 Logic & Approach:**

1. **Bubble Sort idea:** Repeatedly walk through the array, comparing adjacent elements and swapping if they're in wrong order.

2. **Why "bubble"?:** Larger elements "bubble up" to the end of the array with each pass.

3. **Nested loops:**
   - Outer loop: Repeat the process (size-1) times
   - Inner loop: Compare and swap adjacent pairs

4. **Optimization:** After each outer loop iteration, the largest unsorted element is in its final position, so inner loop can shrink.

**💡 Key Insight:** After pass 1, the largest element is at the end. After pass 2, the second largest is in position. And so on...

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

**🧠 Logic & Approach:**

1. **Character by character:** Copy each character from src to corresponding position in dest.

2. **Don't forget the terminator:** After copying all characters, manually add `'\0'` at the end of dest.

3. **Return value:** Return the dest pointer (its original address, not modified).

**💡 Key Insight:** A string copy isn't complete without copying the null terminator - otherwise dest won't be a valid string!

</details>

---

### 🟢 ex01 — ft_strncpy

| | |
|:--|:--|
| **🎯 Required** | Copy at most n characters, pad with '\0' if needed |
| **📖 You'll Learn** | Bounded copying, null padding |
| **📄 File** | `ft_strncpy.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Two phases:**
   - Phase 1: Copy characters while src has content AND we haven't copied n yet
   - Phase 2: If we stopped because src ended (not because we hit n), fill remaining space with '\0'

2. **The padding rule:** If src is shorter than n, pad dest with null characters up to n total.

3. **Warning:** If src is >= n characters, dest will NOT be null-terminated!

**💡 Key Insight:** strncpy's padding behavior is often misunderstood - it doesn't guarantee null termination if src is too long!

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

**🧠 Logic & Approach:**

1. **Universal pattern:** Loop through string, check each character against criteria, return 0 immediately if any character fails.

2. **If loop completes:** All characters passed, return 1.

3. **Empty string edge case:** An empty string returns 1 (vacuously true - no characters violate the rule).

4. **ASCII ranges to memorize:**
   - 'A' to 'Z' = 65 to 90
   - 'a' to 'z' = 97 to 122
   - '0' to '9' = 48 to 57
   - Printable = 32 (space) to 126 (~)

**💡 Key Insight:** These functions are "validators" - one failure means instant rejection, success only after checking everything.

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

**🧠 Logic & Approach:**

1. **ASCII magic:** The difference between 'a' and 'A' is exactly 32. Same for all letters!

2. **The conversion:** To uppercase a letter: subtract 32 (or subtract 'a' - 'A').

3. **Only convert lowercase:** Check if character is between 'a' and 'z' before converting.

4. **Return original pointer:** Save the original address before modifying, return it at the end.

**💡 Key Insight:** 'a' - 32 = 'A', 'z' - 32 = 'Z'. The ASCII table was designed with this 32-offset pattern!

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

**🧠 Logic & Approach:**

1. **Opposite of strupcase:** ADD 32 instead of subtracting.

2. **Only convert uppercase:** Check if character is between 'A' and 'Z' before converting.

**💡 Key Insight:** 'A' + 32 = 'a'. The same 32-offset works in reverse!

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

**🧠 Logic & Approach:**

1. **What's a "word"?:** Sequence of alphanumeric characters separated by anything else.

2. **State tracking:** Use a flag to remember "am I at the start of a new word?"

3. **Algorithm:**
   - Start with flag = 1 (beginning is a word start)
   - If current char is alphanumeric AND flag is 1: uppercase it, set flag = 0
   - If current char is alphanumeric AND flag is 0: lowercase it
   - If current char is NOT alphanumeric: set flag = 1 (next alphanumeric starts a word)

4. **Pre-process option:** You can lowercase everything first, then only worry about capitalizing.

**💡 Key Insight:** The flag acts as "memory" - it remembers whether the previous character was a word separator.

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

**🧠 Logic & Approach:**

1. **Size = total buffer size:** Including space for null terminator. So you can copy at most (size - 1) characters.

2. **Always null-terminate:** Unless size is 0, dest will always end with '\0'.

3. **Return src length:** Always return the full length of src, regardless of how much was copied. This lets caller detect truncation.

4. **Edge case:** If size is 0, copy nothing, but still return src length.

**💡 Key Insight:** The return value lets you check if truncation occurred: if return value >= size, the string was truncated.

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

**🧠 Logic & Approach:**

1. **Printable range:** Characters 32-126 print normally. Everything else needs hex representation.

2. **Hex conversion:** Any byte value 0-255 can be represented as two hex digits.
   - First digit (high nibble): value / 16
   - Second digit (low nibble): value % 16

3. **Use unsigned char:** Regular char might be signed (-128 to 127), which causes problems. Cast to unsigned char (0 to 255).

4. **Hex lookup:** Use a string "0123456789abcdef" as a lookup table. Index into it with your nibble value.

**💡 Key Insight:** `hex[c / 16]` gives first hex digit, `hex[c % 16]` gives second. For c=42: 42/16=2, 42%16=10 → "2a"

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

**🧠 Logic & Approach:**

1. **Output format:** Each line shows: `address: hex_bytes ascii_representation`

2. **16 bytes per line:** Process memory in chunks of 16 bytes.

3. **Address printing:** Convert pointer to unsigned long, then convert to 16 hex digits using bit shifting.

4. **Hex bytes:** Print each byte as 2 hex digits, with space every 2 bytes.

5. **ASCII part:** Print printable chars as-is, non-printable as '.'

6. **Partial last line:** If size isn't multiple of 16, pad hex section with spaces.

**💡 Key Insight:** The address is just a number - cast pointer to unsigned long, then extract hex digits using shifts and masks.

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

**🧠 Logic & Approach:**

1. **Lexicographic order:** Compare character by character, like dictionary order.

2. **Walk together:** Move through both strings simultaneously while characters are equal.

3. **Stop conditions:** Stop when characters differ OR when you hit end of either string.

4. **Return value:** Difference between first differing characters (as unsigned chars to handle high ASCII correctly).

5. **Result interpretation:** Negative = s1 < s2, Zero = equal, Positive = s1 > s2

**💡 Key Insight:** Cast to unsigned char before subtracting - this ensures correct comparison for characters with values > 127.

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

**🧠 Logic & Approach:**

1. **Same as strcmp but with limit:** Add a counter, stop when you've compared n characters.

2. **Edge case n=0:** Return 0 immediately (comparing zero characters means they're "equal").

3. **Three stop conditions:** Characters differ, hit null terminator, OR reached n comparisons.

**💡 Key Insight:** The 'n' limit is about how many characters to COMPARE, not how far to walk. If strings differ before n, stop there.

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

**🧠 Logic & Approach:**

1. **Find end of dest:** Walk through dest until you find the null terminator.

2. **Copy src there:** Starting at dest's null terminator position, copy src character by character.

3. **Add new terminator:** Put '\0' after the last copied character.

4. **Return dest:** Return the original dest pointer.

**💡 Key Insight:** You're essentially doing strcpy, but starting at the END of dest instead of the beginning.

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

**🧠 Logic & Approach:**

1. **Same as strcat but with limit:** Copy at most nb characters from src.

2. **Always null-terminate:** Unlike strncpy, strncat ALWAYS adds a null terminator after the copied content.

3. **Stop conditions:** Stop when nb characters copied OR when src ends (whichever first).

**💡 Key Insight:** strncat is "safer" than strcat because you control how much is appended, but you still need enough space in dest!

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

**🧠 Logic & Approach:**

1. **Edge case:** Empty needle? Return haystack immediately.

2. **Outer loop:** Try each position in haystack as potential match start.

3. **Inner loop:** At each position, check if needle matches starting there.

4. **Match check:** Compare characters until they differ or needle ends.

5. **If needle ends:** Full match found! Return pointer to this position in haystack.

6. **If no match found:** Return NULL (or 0).

**💡 Key Insight:** It's a sliding window - "slide" the needle along the haystack, checking for a match at each position.

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

**🧠 Logic & Approach:**

1. **Size = total buffer size:** How much space dest has in total (including existing content and null terminator).

2. **Return value:** Length of string it TRIED to create = len(dest) + len(src).

3. **Edge case - size <= len(dest):** Can't add anything, return size + len(src).

4. **Available space:** size - len(dest) - 1 bytes available for new content.

5. **Always null-terminate:** (unless size is 0 or dest already fills/exceeds size)

**💡 Key Insight:** Return value > size means truncation occurred. This lets caller detect and handle overflow attempts.

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
║  ✦ String to integer conversion (atoi)                                    ║
║  ✦ Number base conversion (atoi_base, putnbr_base)                        ║
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

**🧠 Logic & Approach:**

1. **Simple counter:** Initialize counter to 0, walk through string, increment counter for each character.

2. **Stop at null:** When you hit '\0', return the counter.

3. **Length excludes null:** "Hello" → length 5, not 6.

**💡 Key Insight:** This is the foundation function - you'll use strlen in almost every other string function!

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

**🧠 Logic & Approach:**

1. **Two approaches:**
   - Loop + ft_putchar for each character
   - Single write() call with full string length

2. **Efficient method:** Get length with ft_strlen, then write entire string at once.

**💡 Key Insight:** One write() call for the whole string is more efficient than many calls for individual characters.

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

**🧠 Logic & Approach:**

1. **Handle INT_MIN specially:** -2147483648 can't be negated (overflow), so print it as a string literal.

2. **Handle negative:** Print '-', then work with positive version.

3. **Recursive approach:** Print all digits except last (recursively), then print last digit.

4. **Iterative approach:** Calculate largest power of 10 <= number, extract digits from left to right.

**💡 Key Insight:** Recursion naturally handles the "print left-to-right" problem because it processes digits in reverse order through the call stack.

</details>

---

### 🟡 ex03 — ft_atoi

| | |
|:--|:--|
| **🎯 Required** | Convert string to integer (like standard atoi) |
| **📖 You'll Learn** | Parsing, sign handling, whitespace skipping |
| **📄 File** | `ft_atoi.c` |

**🔍 Research These:**
- What characters are "whitespace"?
- How to handle multiple +/- signs?
- What happens with overflow?

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Phase 1 - Skip whitespace:** Space, tab, newline, carriage return, vertical tab, form feed (ASCII 9-13 and 32).

2. **Phase 2 - Handle signs:** Count + and - signs. Odd number of minuses = negative result.

3. **Phase 3 - Parse digits:** Convert each digit character to its numeric value, accumulate into result.

4. **Accumulation formula:** `result = result * 10 + (current_digit)`

5. **Digit to value:** `'5' - '0' = 5` (subtract ASCII of '0')

**💡 Key Insight:** Building a number digit by digit: each new digit means previous result shifts left (×10) and new digit adds in ones place.

</details>

---

### 🟡 ex04 — ft_putnbr_base

| | |
|:--|:--|
| **🎯 Required** | Display a number in a given base |
| **📖 You'll Learn** | Base conversion, custom numeral systems |
| **📄 File** | `ft_putnbr_base.c` |

**🔍 Research These:**
- How does base conversion work?
- What makes a valid base string?
- How to handle negative numbers in other bases?

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Base validation:** Check base has at least 2 characters, no duplicates, no '+' or '-'.

2. **Base length = radix:** Length of base string determines the number system (2 for binary, 16 for hex, etc.)

3. **Conversion algorithm:** Same as putnbr but use modulo with base length, index into base string for output character.

4. **Recursive pattern:**
   - If number >= base_length: recursively print (number / base_length)
   - Print base[number % base_length]

**💡 Key Insight:** The base string IS your digit set. "0123456789ABCDEF" for hex means A=10, B=11, etc. The position in the string IS the digit's value!

</details>

---

### 🟡 ex05 — ft_atoi_base

| | |
|:--|:--|
| **🎯 Required** | Convert a string in given base to integer |
| **📖 You'll Learn** | Reverse base conversion, character to value mapping |
| **📄 File** | `ft_atoi_base.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Base validation:** Same rules as putnbr_base.

2. **Find character value:** For each character, find its position in the base string. That position IS its numeric value.

3. **Accumulation with base:** `result = result * base_length + digit_value`

4. **Handle signs and whitespace:** Same pattern as regular atoi.

**💡 Key Insight:** If base is "0123456789ABCDEF" and you see 'B', find it at index 11 → its value is 11.

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

**🧠 Logic & Approach:**

1. **Factorial definition:** n! = n × (n-1) × (n-2) × ... × 2 × 1

2. **Base cases:** 0! = 1, 1! = 1, negative = return 0 (error)

3. **Iterative approach:** Start with result = 1, multiply by n, n-1, n-2... down to 2.

**💡 Key Insight:** 5! = 5 × 4 × 3 × 2 × 1 = 120. Use a loop that multiplies result by decreasing counter.

</details>

---

### 🟢 ex01 — ft_recursive_factorial

| | |
|:--|:--|
| **🎯 Required** | Calculate factorial using recursion |
| **📖 You'll Learn** | Recursive thinking, base cases |
| **📄 File** | `ft_recursive_factorial.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Recursive definition:** n! = n × (n-1)!

2. **Base case:** 0! = 1 or 1! = 1 (stop recursion here)

3. **Recursive case:** Return n * factorial(n-1)

**💡 Key Insight:** 5! = 5 × 4! = 5 × 4 × 3! = ... The function calls itself with smaller input until base case.

</details>

---

### 🟢 ex02 — ft_iterative_power

| | |
|:--|:--|
| **🎯 Required** | Calculate power (nb^power) iteratively |
| **📖 You'll Learn** | Exponentiation by repeated multiplication |
| **📄 File** | `ft_iterative_power.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Power definition:** nb^power = nb × nb × nb × ... (power times)

2. **Base cases:** power < 0 → return 0, power = 0 → return 1

3. **Loop:** Multiply result by nb, repeat 'power' times.

**💡 Key Insight:** 2^5 = 2 × 2 × 2 × 2 × 2 = 32. Start with result=1, multiply by base 'power' times.

</details>

---

### 🟢 ex03 — ft_recursive_power

| | |
|:--|:--|
| **🎯 Required** | Calculate power recursively |
| **📖 You'll Learn** | Recursive exponentiation |
| **📄 File** | `ft_recursive_power.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Recursive definition:** nb^power = nb × nb^(power-1)

2. **Base case:** power = 0 → return 1

3. **Recursive case:** Return nb × power(nb, power-1)

**💡 Key Insight:** 2^5 = 2 × 2^4 = 2 × 2 × 2^3 = ... Each recursive call reduces power by 1.

</details>

---

### 🟡 ex04 — ft_fibonacci

| | |
|:--|:--|
| **🎯 Required** | Return nth Fibonacci number |
| **📖 You'll Learn** | Fibonacci sequence, multiple recursive calls |
| **📄 File** | `ft_fibonacci.c` |

**🔍 Research These:**
- Fibonacci sequence definition
- Why is naive recursion slow for Fibonacci?

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Fibonacci definition:** F(n) = F(n-1) + F(n-2), with F(0)=0, F(1)=1

2. **Sequence:** 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...

3. **Base cases:** n=0 → 0, n=1 → 1, n<0 → -1 (error)

4. **Recursive case:** Return fib(n-1) + fib(n-2)

**💡 Key Insight:** Each number is the sum of the two before it. The recursion branches into two calls each time.

</details>

---

### 🟡 ex05 — ft_sqrt

| | |
|:--|:--|
| **🎯 Required** | Find square root if it's a perfect square |
| **📖 You'll Learn** | Integer square root, search algorithms |
| **📄 File** | `ft_sqrt.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Goal:** Find integer i where i × i = nb. If none exists, return 0.

2. **Simple approach:** Try i = 1, 2, 3... until i×i >= nb

3. **If i×i == nb:** Found it! Return i.

4. **If i×i > nb:** No perfect square root exists, return 0.

5. **Optimization:** Only need to check up to nb/2 (or sqrt estimate).

**💡 Key Insight:** If i×i overshoots nb, no larger i will work either. Stop searching once i×i exceeds nb.

</details>

---

### 🟡 ex06 — ft_is_prime

| | |
|:--|:--|
| **🎯 Required** | Check if a number is prime |
| **📖 You'll Learn** | Primality testing, optimization |
| **📄 File** | `ft_is_prime.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Prime definition:** Only divisible by 1 and itself. Must be > 1.

2. **Check for divisors:** Try dividing by 2, 3, 4... If any divides evenly, not prime.

3. **Optimization:** Only check up to √n. If n has a divisor > √n, it also has one < √n.

4. **Base cases:** n <= 1 → not prime. n == 2 → prime.

**💡 Key Insight:** If 36 is divisible by 9, it's also divisible by 4 (36/9=4). So checking divisors up to √n (6 for 36) is enough!

</details>

---

### 🟡 ex07 — ft_find_next_prime

| | |
|:--|:--|
| **🎯 Required** | Find the smallest prime >= nb |
| **📖 You'll Learn** | Using helper functions, incremental search |
| **📄 File** | `ft_find_next_prime.c` |

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Use ft_is_prime:** You already have a prime checker!

2. **Simple loop:** Starting from nb, check each number until you find a prime.

3. **Edge case:** If nb <= 2, return 2 (smallest prime).

**💡 Key Insight:** Just increment and check. Primes get sparser but there's always one nearby.

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

**🧠 Logic & Approach:**

1. **Board representation:** Array of 10 integers. `board[col] = row` means queen in column `col` is at row `row`.

2. **Conflict detection - for a new queen at (row, col):**
   - Same row: Any previous column has `board[i] == row`?
   - Same diagonal: `|board[i] - row| == |i - col|`?

3. **Backtracking algorithm:**
   - Try placing queen in column 0, row 0
   - Move to column 1, try each row, pick first valid
   - Continue to column 2, 3...
   - If stuck (no valid row), go back and try next row in previous column
   - When all 10 placed, print solution, then continue searching for more

4. **Recursive structure:**
   - Base case: column == 10 → found solution, print and count
   - Try each row 0-9, if valid: place queen, recurse to next column, then remove queen (backtrack)

5. **Diagonal math:** Two queens at (r1,c1) and (r2,c2) are on same diagonal if the row difference equals column difference in absolute value.

**💡 Key Insight:** Backtracking = explore, hit dead end, undo last choice, try alternative. The recursion + loop naturally explores all possibilities!

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
