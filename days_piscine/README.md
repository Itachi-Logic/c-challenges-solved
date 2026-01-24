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

<br>

<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">

</div>

---

<div align="center">

## 🧠 Philosophy

</div>

<table align="center">
<tr>
<td>

> ### 🎣 *"Don't be given the fish — learn how to fish."*
>
> This guide pushes you to **think and research first**. Each exercise contains hints that are **hidden by default**.  
> 
> ### ⚠️ **Try your best before peeking!**

</td>
</tr>
</table>

---

<div align="center">

## 📖 Quick Links

| 📄 Documentation | 🌐 Live Preview |
|:---:|:---:|
| [📚 Read the Docs](https://github.com/Itachi-Logic/c-challenges-solved/blob/main/days_piscine/README.md) | [🔗 Browse Site](https://itachi-logic.github.io/c-challenges-solved/days_piscine/) |

</div>

---

<div align="center">

## 📚 How to Use This Guide

</div>

<table align="center">
<tr>
<th>🎯 Required</th>
<th>📖 You'll Learn</th>
<th>🔍 Research</th>
<th>💡 Hint</th>
</tr>
<tr>
<td align="center">What to do</td>
<td align="center">Concepts gained</td>
<td align="center">Topics to search</td>
<td align="center">Only after trying!</td>
</tr>
</table>

---

<div align="center">

## 🗺️ Quick Navigation

<img src="https://user-images.githubusercontent.com/74038190/212284115-f47cd8ff-2ffb-4b04-b5bf-4d1c14c0247f.gif" width="500">

| Module | Topic | Exercises |
|:---:|:---:|:---:|
| [📕 C00](#-c00--introduction-to-c) | Introduction to C | 9 |
| [📗 C01](#-c01--pointers--arrays) | Pointers & Arrays | 9 |
| [📘 C02](#-c02--string-functions) | String Functions | 13 |
| [📙 C03](#-c03--string-comparison) | String Comparison | 6 |
| [📔 C04](#-c04--output-functions) | Output Functions | 6 |
| [📓 C05](#-c05--recursion--math) | Recursion & Math | 9 |

</div>

---

<div align="center">

# 📕 C00 — Introduction to C

<img src="https://user-images.githubusercontent.com/74038190/216656944-f8c1b44e-38cb-4fdd-be7b-de8171a5c164.gif" width="60">

</div>

```
╔═══════════════════════════════════════════════════════════════════════════╗
║                           🎯 LEARNING OBJECTIVES                              ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Using write() system call for output                                       ║
║  ✦ Understanding while loops and iteration                                    ║
║  ✦ Conditional statements (if/else)                                           ║
║  ✦ ASCII table and character manipulation                                     ║
║  ✦ Nested loops for generating combinations                                   ║
║  ✦ Handling edge cases (INT_MIN, INT_MAX)                                     ║
║  ✦ Introduction to recursion                                                  ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

---

### 🟢 ex00 — ft_putchar

<table>
<tr><td>🎯 <b>Required</b></td><td>Write a function that prints a single character to stdout</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>System calls, file descriptors, address-of operator</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_putchar.c</code></td></tr>
</table>

**🔍 Research These:**
- `man 2 write`
- What is a file descriptor?
- What is stdout (fd 1)?
- How does `&` (address-of) operator work?

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Understanding `write()` parameters:**
   - First parameter `1` = file descriptor for stdout (screen)
   - Second parameter `&c` = memory address of the character
   - Third parameter `1` = number of bytes to write

2. **Why `&c` instead of `c`?**
   - `write()` expects a memory address (pointer), not the value itself
   - The `&` operator gives the address where `c` is stored

3. **The flow:** Character → stored in memory → `write()` reads from that address → displays on screen

**💡 Key Insight:** Think of `write()` like mailing a letter - you need the destination (fd=1 screen), the content's location (&c), and how many pages (1 byte).

</details>

---

### 🟢 ex01 — ft_print_alphabet

<table>
<tr><td>🎯 <b>Required</b></td><td>Print the alphabet from 'a' to 'z'</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>While loops, character incrementation, ASCII values</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_print_alphabet.c</code></td></tr>
</table>

**🔍 Research These:**
- ASCII table (what number is 'a'? 'z'?)
- While loop syntax in C
- Can you do `'a' + 1`? What happens?

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Characters are numbers!** In ASCII, 'a' = 97, 'b' = 98, ..., 'z' = 122

2. **The algorithm:**
   - Start with a `char` variable initialized to `'a'`
   - Use a `while` loop that continues while the character is `<= 'z'`
   - Inside the loop: print the character, then increment it with `i++`

3. **Why `i++` works on chars:**
   - `'a'++` becomes `'b'` because 97+1 = 98 in ASCII
   - The loop naturally walks through the alphabet!

**💡 Key Insight:** `char` is just a small integer. When you do `i++` on a char, you're adding 1 to its ASCII value, which gives you the next letter!

</details>

---

### 🟢 ex02 — ft_print_reverse_alphabet

<table>
<tr><td>🎯 <b>Required</b></td><td>Print the alphabet in reverse (z to a)</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Reverse iteration, decrementing</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_print_reverse_alphabet.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Same concept, opposite direction:**
   - Start with `char c = 'z'`
   - Loop condition: `while (c >= 'a')`
   - Decrement: `c--` instead of `c++`

2. **The flow:** z → y → x → ... → b → a → stop

**💡 Key Insight:** If `++` moves forward in ASCII, then `--` moves backward. 'z' - 1 = 'y' in ASCII terms!

</details>

---

### 🟢 ex03 — ft_print_numbers

<table>
<tr><td>🎯 <b>Required</b></td><td>Print digits from 0 to 9</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Difference between <code>'0'</code> (char) and <code>0</code> (int)</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_print_numbers.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Critical distinction:**
   - `'0'` is a CHARACTER with ASCII value 48
   - `0` is the INTEGER zero
   - They are NOT the same!

2. **The algorithm:**
   - Initialize `char c = '0'` (the character zero, ASCII 48)
   - Loop while `c <= '9'` (ASCII 57)
   - Print and increment just like the alphabet

**💡 Key Insight:** When you want to DISPLAY a digit, you need the character version. The digit characters '0' through '9' are ASCII values 48 through 57.

</details>

---

### 🟢 ex04 — ft_is_negative

<table>
<tr><td>🎯 <b>Required</b></td><td>Print 'N' if negative, 'P' if zero or positive</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Conditional statements, comparison operators</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_is_negative.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Simple decision tree:**
   - Check if `n >= 0` → print 'P' (positive or zero)
   - Otherwise (`n < 0`) → print 'N' (negative)

2. **Implementation:** Use `if/else` with the comparison operator

**💡 Key Insight:** Zero is considered positive here (prints 'P'). The condition `n >= 0` catches both positive numbers AND zero in one check.

</details>

---

### 🟡 ex05 — ft_print_comb

<table>
<tr><td>🎯 <b>Required</b></td><td>Print all unique 3-digit ascending combinations: 012, 013... 789</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Nested loops, combination logic, int-to-char conversion</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_print_comb.c</code></td></tr>
</table>

**🔍 Research These:**
- Nested while loops
- Why `+ 48` or `+ '0'` converts int to char?
- Combinations vs Permutations

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Three nested loops with constraints:**
   - `num0`: ranges from 0 to 7 (first digit)
   - `num1`: starts at `num0 + 1`, ranges up to 8 (must be > first)
   - `num2`: starts at `num1 + 1`, ranges up to 9 (must be > second)

2. **Converting int to char for printing:**
   - Add 48 (or `'0'`) to convert: `num0 + 48` turns integer 5 into character '5'

3. **Comma logic:**
   - Print ", " after each combination EXCEPT the last one (789)
   - Check: if `num0 != 7`, there are more combinations coming

4. **Why these ranges?**
   - First digit max is 7 because you need room for two larger digits (8, 9)
   - The constraint `num0 < num1 < num2` is enforced by the starting points!

**💡 Key Insight:** The key is that each inner loop STARTS where the outer loop currently is + 1. This guarantees ascending order automatically!

</details>

---

### 🟡 ex06 — ft_print_comb2

<table>
<tr><td>🎯 <b>Required</b></td><td>Print all pairs of two-digit numbers: "00 01", "00 02"... "98 99"</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Division and modulo for digit extraction</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_print_comb2.c</code></td></tr>
</table>

**🔍 Research These:**
- How to extract tens digit: `num / 10`
- How to extract ones digit: `num % 10`

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Two nested loops for pairs:**
   - `num98`: first number, ranges 0 to 98
   - `num99`: second number, starts at `num98 + 1`, ranges to 99

2. **Printing two-digit numbers (the key technique!):**
   - For number 42:
     - Tens digit: `42 / 10 = 4`
     - Ones digit: `42 % 10 = 2`
   - Convert each to char by adding 48

3. **Output format:** "XX YY" with space between, then ", " separator

4. **Stop condition for comma:** When `num98 == 98`, don't print comma (last pair)

**💡 Key Insight:** Division (`/`) gives you the left digit(s), modulo (`%`) gives you the rightmost digit. This is your tool for "breaking apart" numbers!

</details>

---

### 🟡 ex07 — ft_putnbr

<table>
<tr><td>🎯 <b>Required</b></td><td>Print any integer (including INT_MIN and INT_MAX)</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Recursion, edge cases, integer limits</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_putnbr.c</code></td></tr>
</table>

**🔍 Research These:**
- What is recursion?
- Why is `-2147483648` special? (Can't be negated!)
- `INT_MIN` and `INT_MAX` values

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **The INT_MIN trap (CRITICAL!):**
   - `-2147483648 * -1` causes overflow because `2147483648` doesn't fit in an int!
   - Solution: Handle this case separately with a direct string write

2. **Handle negative numbers:**
   - Print the minus sign '-'
   - Then convert to positive: `nb = nb * -1`

3. **Recursive magic for digit printing:**
   - If `nb > 9`, recursively call with `nb / 10` (print left digits first)
   - Then print the last digit: `nb % 10 + 48`

4. **How recursion works here:**
   - For 1234: call(1234) → call(123) → call(12) → call(1)
   - Then unwind: print 1, print 2, print 3, print 4

**💡 Key Insight:** Recursion naturally handles "print left digits first" because the call stack reverses the order. The deepest call (leftmost digit) returns first!

</details>

---

### 🔴 ex08 — ft_print_combn ⭐

<table>
<tr><td>🎯 <b>Required</b></td><td>Print all combinations of n different digits</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Advanced recursion, backtracking, arrays</td></tr>
<tr><td>📄 <b>Files</b></td><td><code>ft_print_combn.c</code> (optimized) | <code>ex08_v0/ft_print_combn.c</code> (verbose)</td></tr>
</table>

**🔍 Research These:**
- Backtracking algorithm
- Recursive combination generation
- How to detect the last combination

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Use an array to build combinations:**
   - `int comb[10]` stores the current combination being built
   - Pass the array through recursive calls

2. **Recursive function parameters:**
   - `comb`: the array storing current combination
   - `n`: how many digits we need
   - `index`: current position we're filling (0 to n-1)
   - `value`: minimum digit value we can use (ensures ascending order)

3. **Base case (index == n):**
   - Combination is complete! Print all n digits from the array
   - Check if it's the last combination: `comb[0] == 10 - n`
   - If not last, print ", "

4. **Recursive case:**
   - Try each digit from `value` to 9
   - Place it in `comb[index]`
   - Recurse with `index + 1` and `value + 1` (next digit must be larger!)

5. **Detecting last combination:**
   - For n=3, last is "789" where first digit is 7 = 10-3

---

### 📄 Two Versions Comparison

| Aspect | Version 1 (Optimized) | Version 0 (Verbose) |
|:--|:--|:--|
| **Last combo check** | `comb[0] == 10 - n` | Separate `is_last_combination()` function |
| **Code size** | Compact, fewer lines | More readable, explicit logic |
| **Function count** | 2 functions | 3 functions |
| **Approach** | Direct mathematical check | Loop-based verification |

**Version 0's `is_last_combination()` logic:**
```c
// Checks if array equals [10-n, 10-n+1, ..., 9]
// For n=3: checks if [7, 8, 9]
int last_possible_digit = 10 - n;
for (i = 0; i < n; i++)
    if (array[i] != last_possible_digit + i)
        return (0);
```

**Version 1's optimization:**
```c
// Just check first element - if it's at max, we're at last combo
if (!(comb[0] == 10 - n))
    print(", ");
```

**💡 Key Insight:** Both versions work correctly! Version 0 is better for understanding the logic, Version 1 is more elegant once you understand WHY checking only the first element is sufficient.

</details>

---

<div align="center">

# 📗 C01 — Pointers & Arrays

<img src="https://user-images.githubusercontent.com/74038190/216656947-fb6a5ce7-32a1-4871-ac29-eb0e60e71621.gif" width="60">

</div>

```
╔═══════════════════════════════════════════════════════════════════════════╗
║                           🎯 LEARNING OBJECTIVES                              ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Understanding pointers and memory addresses                                ║
║  ✦ Dereferencing with * operator                                              ║
║  ✦ Address-of with & operator                                                 ║
║  ✦ Modifying variables through pointers                                       ║
║  ✦ Pointer arithmetic                                                         ║
║  ✦ Arrays and their relationship with pointers                                ║
║  ✦ Sorting algorithms (Bubble Sort)                                           ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

---

### 🟢 ex00 — ft_ft

<table>
<tr><td>🎯 <b>Required</b></td><td>Take a pointer to int and set the value to 42</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Basic pointer dereferencing</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_ft.c</code></td></tr>
</table>

**🔍 Research These:**
- What is a pointer?
- What does `*ptr` do? (dereferencing)
- Pass by reference vs pass by value

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Understanding the parameter `int *nbr`:**
   - This is a pointer - it holds a memory ADDRESS, not a value
   - Someone will call your function with `ft_ft(&x)` where `x` is an int

2. **The dereference operator `*`:**
   - `*nbr` means "go to the address stored in nbr and access the value there"
   - `*nbr = 42` means "put 42 at that address"

3. **Why this works:**
   - The caller's variable lives at some address
   - They pass that address to you
   - You write 42 to that address
   - Their variable now contains 42!

**💡 Key Insight:** Think of a pointer like a house address. The pointer holds the address, `*pointer` lets you go inside the house and change things.

</details>

---

### 🟡 ex01 — ft_ultimate_ft

<table>
<tr><td>🎯 <b>Required</b></td><td>Same but with 9 levels of pointers!</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Multi-level pointer dereferencing</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_ultimate_ft.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Understanding `int *********nbr`:**
   - This is a pointer to a pointer to a pointer... (9 levels!)
   - Each `*` in the declaration adds one level of indirection

2. **To reach the actual int:**
   - You must dereference 9 times: `*********nbr`
   - Each `*` "unwraps" one level of pointer

3. **The assignment:**
   - `*********nbr = 42` - nine stars to reach the int, then assign 42

4. **Visualizing the chain:**
   ```
   t9 → t8 → t7 → t6 → t5 → t4 → t3 → t2 → t1 → t0 (the actual int)
   ```

**💡 Key Insight:** It's like having directions to a map, that leads to another map, that leads to another map... 9 times. Each `*` follows one step of directions until you reach the treasure (the int).

</details>

---

### 🟢 ex02 — ft_swap

<table>
<tr><td>🎯 <b>Required</b></td><td>Swap two integer values using pointers</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Classic swap algorithm, temporary variables</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_swap.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **The problem with naive swap:**
   - `*a = *b; *b = *a;` DOESN'T WORK!
   - After first line, original `*a` is lost forever

2. **The solution - use a temporary variable:**
   ```c
   temp = *a;    // Step 1: save a's value
   *a = *b;      // Step 2: overwrite a with b's value
   *b = temp;    // Step 3: put saved value into b
   ```

3. **Why pointers are needed:**
   - Without pointers, you'd only swap local copies
   - With pointers, you're swapping the actual values at those addresses

**💡 Key Insight:** Imagine swapping contents of two cups - you NEED a third empty cup to temporarily hold one drink! That's what `temp` does.

</details>

---

### 🟢 ex03 — ft_div_mod

<table>
<tr><td>🎯 <b>Required</b></td><td>Calculate division and modulo, return via pointers</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Returning multiple values from a function</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_div_mod.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **The problem:**
   - C functions can only `return` ONE value
   - But we need to give back TWO results (division AND modulo)

2. **The pointer solution:**
   - Accept pointers `int *div` and `int *mod` as parameters
   - Write results directly to those addresses
   - `*div = a / b` - store division result
   - `*mod = a % b` - store modulo result

3. **How the caller uses it:**
   - They create two variables
   - Pass addresses: `ft_div_mod(10, 3, &result_div, &result_mod)`
   - After the call, both variables contain results!

**💡 Key Insight:** Pointers let you "return" multiple values by modifying variables that exist in the caller's scope. It's like filling in a form that someone else gave you.

</details>

---

### 🟡 ex04 — ft_ultimate_div_mod

<table>
<tr><td>🎯 <b>Required</b></td><td>Division and modulo, but results replace inputs</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Why temporary variables are crucial</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_ultimate_div_mod.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **The trap:**
   - If you do `*a = *a / *b` first, you've LOST the original `*a`!
   - Then `*b = *a % *b` uses the MODIFIED `*a` - wrong answer!

2. **The solution - save first, then modify:**
   ```c
   temp = *a;           // Save original value of a
   *a = *a / *b;        // Now safe to modify a
   *b = temp % *b;      // Use SAVED original value for modulo
   ```

3. **Order matters!**
   - Always save values you'll need later BEFORE modifying them

**💡 Key Insight:** Whenever you need a value AFTER you've changed it, save it first! This is a fundamental pattern in programming.

</details>

---

### 🟢 ex05 — ft_putstr

<table>
<tr><td>🎯 <b>Required</b></td><td>Print a string character by character</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>String traversal, null terminator</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_putstr.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Understanding C strings:**
   - A string is an array of chars ending with `'\0'` (null terminator)
   - `"Hello"` in memory: `['H', 'e', 'l', 'l', 'o', '\0']`

2. **The traversal pattern:**
   - Use an index `i` starting at 0
   - Loop condition: `while (str[i])` - continues while not null
   - Inside: print `str[i]` using ft_putchar, then `i++`

3. **Why `str[i]` works as a condition:**
   - Any character except `'\0'` is "truthy" (non-zero)
   - `'\0'` has value 0, which is "falsy" - stops the loop

**💡 Key Insight:** The null terminator `'\0'` is your "stop sign" - it tells you where the string ends without needing to know the length in advance!

</details>

---

### 🟢 ex06 — ft_strlen

<table>
<tr><td>🎯 <b>Required</b></td><td>Count the length of a string</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>String length calculation</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strlen.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Same traversal as ft_putstr, but counting:**
   - Initialize counter `i = 0`
   - Loop while `str[i]` is not null
   - Just increment `i++` (no printing)
   - Return `i` when loop ends

2. **What the count represents:**
   - The index where null terminator is found = length
   - "Hello" → i goes 0,1,2,3,4, stops at 5 → length is 5

**💡 Key Insight:** Length does NOT include the null terminator. "Hello" has length 5, not 6. The null is there, but we don't count it!

</details>

---

### 🟡 ex07 — ft_rev_int_tab

<table>
<tr><td>🎯 <b>Required</b></td><td>Reverse an integer array in-place</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Two-pointer technique, in-place algorithms</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_rev_int_tab.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Two-pointer technique:**
   - `f` (front) starts at index 0
   - `l` (last) starts at index `size - 1`

2. **The algorithm:**
   - While `f < size / 2`:
     - Swap elements at positions f and l (using temp variable)
     - Move f forward: `f++`
     - Move l backward: `l--`

3. **Why `size / 2`?**
   - Each swap handles TWO elements
   - After half the array, you've swapped everything
   - Going further would un-reverse it!

4. **The swap uses pointer arithmetic:**
   - `tab + f` is the address of element at index f
   - Pass these addresses to a swap helper function

**💡 Key Insight:** Reversing in-place means no extra array needed - just swap elements from opposite ends, moving toward the middle!

</details>

---

### 🟡 ex08 — ft_sort_int_tab

<table>
<tr><td>🎯 <b>Required</b></td><td>Sort an integer array in ascending order</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Bubble Sort algorithm</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_sort_int_tab.c</code></td></tr>
</table>

**🔍 Research These:**
- Bubble Sort algorithm
- Why nested loops?
- Time complexity O(n²)

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Bubble Sort concept:**
   - Compare adjacent elements
   - If they're in wrong order, swap them
   - Repeat until no more swaps needed

2. **Nested loop structure:**
   - Outer loop `i`: runs `size - 1` times (passes)
   - Inner loop `j`: compares adjacent pairs, runs `size - 1 - i` times

3. **Why `size - 1 - i` for inner loop?**
   - After each pass, the largest unsorted element "bubbles up" to the end
   - That element is now in its final position
   - No need to check it again! (optimization)

4. **The swap condition:**
   - If `tab[j] > tab[j + 1]`, swap them
   - Use pointer arithmetic: `tab + j` and `tab + j + 1`

**💡 Key Insight:** After pass 1, the largest element is at the end. After pass 2, the second largest is in position. Each pass "bubbles" the next largest into place!

</details>

---

<div align="center">

# 📘 C02 — String Functions

<img src="https://user-images.githubusercontent.com/74038190/216656949-32b8a73f-1415-4d13-b6e5-1b7e08c6a28c.gif" width="60">

</div>

```
╔═══════════════════════════════════════════════════════════════════════════╗
║                           🎯 LEARNING OBJECTIVES                              ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ String copying (safe and unsafe methods)                                   ║
║  ✦ Character classification (alpha, numeric, printable)                       ║
║  ✦ Case conversion (uppercase/lowercase)                                      ║
║  ✦ ASCII table mastery                                                        ║
║  ✦ Buffer safety and size limits                                              ║
║  ✦ Hexadecimal representation                                                 ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

---

### 🟢 ex00 — ft_strcpy

<table>
<tr><td>🎯 <b>Required</b></td><td>Copy string from src to dest</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Basic string copying</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strcpy.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Character-by-character copy:**
   - Use index `i = 0`
   - While `src[i]` is not null: copy `dest[i] = src[i]`, then `i++`

2. **Don't forget the null terminator!**
   - After the loop, manually add: `dest[i] = '\0'`
   - Without this, dest isn't a valid C string!

3. **Return value:**
   - Return `dest` (the original pointer, unchanged)

**💡 Key Insight:** A string copy isn't complete without copying the null terminator - otherwise dest won't know where the string ends!

</details>

---

### 🟢 ex01 — ft_strncpy

<table>
<tr><td>🎯 <b>Required</b></td><td>Copy at most n characters, pad with '\0' if needed</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Bounded copying, null padding</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strncpy.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Two-phase operation:**
   - **Phase 1:** Copy characters while `src[i]` exists AND `i < n`
   - **Phase 2:** If src ended early, pad remaining space with '\0' until `i == n`

2. **The padding rule (important!):**
   - If src is shorter than n: fill the rest of dest with null characters
   - If src is >= n: NO null terminator is added!

3. **Implementation:**
   ```c
   while (src[i] && i < n)  // Phase 1: copy
       dest[i] = src[i++];
   while (i < n)            // Phase 2: pad with '\0'
       dest[i++] = '\0';
   ```

**💡 Key Insight:** strncpy's behavior is tricky - if src is too long, dest will NOT be null-terminated! This is a common source of bugs.

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

1. **Universal pattern for all these functions:**
   - Loop through each character of the string
   - If ANY character fails the test → return 0 immediately
   - If loop completes (all passed) → return 1

2. **The character tests:**
   - **Alpha:** `c < 'A' || (c > 'Z' && c < 'a') || c > 'z'` → fails
   - **Numeric:** `c < '0' || c > '9'` → fails
   - **Lowercase:** `c < 'a' || c > 'z'` → fails
   - **Uppercase:** `c < 'A' || c > 'Z'` → fails
   - **Printable:** `c < 32 || c > 126` → fails

3. **Empty string edge case:**
   - Returns 1 (true) - no characters violate the rule!

4. **ASCII ranges to know:**
   - `'A'` to `'Z'` = 65 to 90
   - `'a'` to `'z'` = 97 to 122
   - `'0'` to `'9'` = 48 to 57
   - Printable = 32 (space) to 126 (~)

**💡 Key Insight:** These are "validators" - one bad character means instant rejection, success only comes after checking EVERY character.

</details>

---

### 🟢 ex07 — ft_strupcase

<table>
<tr><td>🎯 <b>Required</b></td><td>Convert string to uppercase</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Case conversion using ASCII arithmetic</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strupcase.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **The ASCII magic:**
   - 'a' = 97, 'A' = 65 → difference is 32
   - Same 32-difference for all letters!

2. **The algorithm:**
   - Save original pointer (to return later)
   - Loop through string with pointer arithmetic (`*str`, `str++`)
   - If character is lowercase (`>= 'a' && <= 'z'`): subtract 32
   - Return the saved original pointer

3. **Why subtract 32:**
   - `'a' - 32 = 'A'`
   - `'z' - 32 = 'Z'`
   - Only convert if it's actually lowercase!

**💡 Key Insight:** The ASCII table was cleverly designed - uppercase and lowercase letters are exactly 32 apart. Math makes case conversion simple!

</details>

---

### 🟢 ex08 — ft_strlowcase

<table>
<tr><td>🎯 <b>Required</b></td><td>Convert string to lowercase</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Case conversion using ASCII arithmetic</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strlowcase.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Opposite of strupcase:**
   - ADD 32 instead of subtracting
   - Check for uppercase (`>= 'A' && <= 'Z'`) before converting

2. **The conversion:**
   - `'A' + 32 = 'a'`
   - `'Z' + 32 = 'z'`

**💡 Key Insight:** Same 32-offset works in reverse! If subtracting 32 goes up, adding 32 goes down.

</details>

---

### 🟡 ex09 — ft_strcapitalize ⭐

<table>
<tr><td>🎯 <b>Required</b></td><td>Capitalize first letter of each word, lowercase rest</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>State machines, word boundaries, multiple approaches</td></tr>
<tr><td>📄 <b>Files</b></td><td><code>ft_strcapitalize.c</code> | <code>ex09_v2/</code> | <code>ex09_v3/</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Understanding the Problem:**

A "word" is a sequence of alphanumeric characters (letters OR digits) separated by anything else (space, punctuation, etc.).

**Input:** `"salut, comment tu vas ? 42mots quarante-deux; cinquante+et"`
**Output:** `"Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et"`

---

### 📄 Three Versions Comparison

#### Version 1: Previous Character Check (ft_strcapitalize.c)

**Approach:** Look at the character BEFORE current position

```c
// First, lowercase everything
str = ft_strlowcase(str);

// Capitalize first char if lowercase
if (ft_str_is_lowercase(*pointer))
    ft_strupcase(pointer);

// For each char, check if previous is NOT alphanumeric
while (*str) {
    c = *(str - 1);
    if (!ft_str_is_alpha(c) && !(c >= '0' && c <= '9'))
        if (ft_str_is_lowercase(*str))
            ft_strupcase(str);
    str++;
}
```

**Pros:** Direct logic - "if previous char is separator, capitalize current"
**Cons:** Requires helper functions, more function calls

---

#### Version 2: Flag-Based State Machine (ex09_v2)

**Approach:** Use a flag to track "am I at word start?"

```c
ft_strlowcase(str);  // First lowercase everything
flag = 1;            // 1 = next alphanumeric starts a word

while (*str) {
    if (!ft_str_is_alphanumeric(*str))
        flag = 1;    // Not alphanumeric = next might start word
    if (ft_str_is_alphanumeric(*str) && flag == 1) {
        ft_strupcase(str);
        flag = 0;    // We're now inside a word
    }
    str++;
}
```

**Pros:** Clean state machine logic, easy to understand
**Cons:** Still needs helper functions

---

#### Version 3: All-in-One (ex09_v3) ⭐ Most Elegant

**Approach:** Handle both lowercase and capitalize in single pass

```c
flag = 1;  // 1 = at word start

while (*str) {
    c = *str;
    if (ft_str_is_alphanumeric(*str)) {
        if (flag == 1 && c >= 'a' && c <= 'z')
            *str -= 32;  // Capitalize
        else if (flag == 0 && c >= 'A' && c <= 'Z')
            *str += 32;  // Lowercase
        flag = 0;
    }
    else
        flag = 1;
    str++;
}
```

**Pros:** Single pass, no pre-processing needed, minimal code
**Cons:** Slightly more complex logic per iteration

---

### 📊 Performance Comparison

| Version | Passes | Helper Functions | Lines of Logic |
|:--|:--|:--|:--|
| V1 | 2 (lowercase + capitalize) | 3-4 | More |
| V2 | 2 (lowercase + capitalize) | 2-3 | Medium |
| V3 | 1 (all at once) | 1 | Fewer |

**💡 Key Insight:** The "flag" pattern is a simple state machine with two states:
- `flag = 1`: "I'm at a word boundary, next letter should be capitalized"
- `flag = 0`: "I'm inside a word, letters should be lowercase"

This pattern appears everywhere in parsing and text processing!

</details>

---

### 🟡 ex10 — ft_strlcpy

<table>
<tr><td>🎯 <b>Required</b></td><td>Copy string with size limit, return src length</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Safe string copying, buffer overflow prevention</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strlcpy.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Understanding the `size` parameter:**
   - `size` = total buffer size of dest (including space for '\0')
   - You can copy at most `size - 1` characters

2. **Edge case: size == 0:**
   - Copy nothing, but still return src length

3. **The algorithm:**
   - Calculate and save `len = strlen(src)`
   - If size > 0: copy up to `size - 1` characters, then add '\0'
   - Return the saved len (always full length of src!)

4. **Why return src length?**
   - Lets caller detect truncation
   - If return value >= size, the string was truncated

**💡 Key Insight:** Unlike strcpy, strlcpy ALWAYS null-terminates (if size > 0) and tells you if data was lost. The return value >= size means truncation occurred!

</details>

---

### 🔴 ex11 — ft_putstr_non_printable

<table>
<tr><td>🎯 <b>Required</b></td><td>Print non-printable chars as <code>\xx</code> (hex)</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Hexadecimal conversion, unsigned chars</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_putstr_non_printable.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Printable vs non-printable:**
   - Printable: ASCII 32 to 126 → print normally
   - Non-printable: anything else → print as `\xx`

2. **CRITICAL: Use unsigned char!**
   - Regular `char` might be signed (-128 to 127)
   - Causes problems with high ASCII values
   - Cast to `unsigned char` (0 to 255) before hex conversion

3. **Hexadecimal conversion technique:**
   ```c
   char *hex = "0123456789abcdef";
   // For any byte value c:
   hex[c / 16]  // High nibble (first hex digit)
   hex[c % 16]  // Low nibble (second hex digit)
   ```

4. **Output format:**
   - Print `\` then two hex digits
   - Example: newline (ASCII 10) → `\0a`

**💡 Key Insight:** Any byte 0-255 can be split into two hex digits using division and modulo by 16. The hex string acts as a lookup table!

</details>

---

### 🔴 ex12 — ft_print_memory

<table>
<tr><td>🎯 <b>Required</b></td><td>Display memory content in hexdump format</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Memory visualization, hexadecimal formatting, bit manipulation</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_print_memory.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Output format (each line):**
   ```
   0000000000000000: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
   ```
   - Address (16 hex digits) + `: `
   - Hex bytes (16 bytes, space every 2 bytes)
   - ASCII representation (printable or '.')

2. **Process in chunks of 16 bytes:**
   - Main loop: `while (i < size)`, increment by 16

3. **Printing the address (bit manipulation):**
   ```c
   // Extract each hex digit from address using bit shifting
   digit = (addr >> (i * 4)) & 0xf;  // Get 4 bits at position i
   ```
   - `>> (i * 4)`: shift right by i nibbles (4 bits each)
   - `& 0xf`: mask to get only lowest 4 bits (one hex digit)

4. **Printing hex bytes:**
   - For each byte: two hex digits (same technique as ex11)
   - Add space after every 2 bytes
   - If fewer than 16 bytes remain, pad with spaces

5. **Printing ASCII content:**
   - Printable chars (32-126): print as-is
   - Non-printable: print '.'

**💡 Key Insight:** The address is just a number! Cast the pointer to unsigned long, then extract each hex digit using bit manipulation. Each 4 bits = 1 hex digit.

</details>

---

<div align="center">

# 📙 C03 — String Comparison

<img src="https://user-images.githubusercontent.com/74038190/216656951-06e258dc-5266-44f4-9d58-07fb78f11e27.gif" width="60">

</div>

```
╔═══════════════════════════════════════════════════════════════════════════╗
║                           🎯 LEARNING OBJECTIVES                              ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Lexicographic string comparison                                            ║
║  ✦ String concatenation                                                       ║
║  ✦ Substring search algorithms                                                ║
║  ✦ Safe/bounded string operations                                             ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

---

### 🟢 ex00 — ft_strcmp

<table>
<tr><td>🎯 <b>Required</b></td><td>Compare two strings, return difference</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Lexicographic comparison</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strcmp.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Walk through both strings together:**
   ```c
   while (*s1 && *s1 == *s2) {
       s1++;
       s2++;
   }
   ```

2. **Stop when:**
   - Characters differ, OR
   - End of either string (hit null)

3. **Return value:**
   - Difference between first differing characters
   - Cast to `unsigned char` before subtracting!
   - `*(unsigned char *)s1 - *(unsigned char *)s2`

4. **What the return means:**
   - Negative: s1 comes before s2 (s1 < s2)
   - Zero: strings are equal
   - Positive: s1 comes after s2 (s1 > s2)

**💡 Key Insight:** Cast to unsigned char is crucial! Without it, characters > 127 would be negative, giving wrong comparison results.

</details>

---

### 🟢 ex01 — ft_strncmp

<table>
<tr><td>🎯 <b>Required</b></td><td>Compare up to n characters</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Bounded string comparison</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strncmp.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Same as strcmp but with counter:**
   - Add a counter `i` starting at 1
   - Loop condition adds: `&& i < n`

2. **Edge case n == 0:**
   - Return 0 immediately (comparing zero characters = equal)

3. **Three stop conditions:**
   - Characters differ
   - Hit null terminator
   - Compared n characters

**💡 Key Insight:** The 'n' limit is about how many characters to COMPARE. If strings differ before reaching n, stop there and return the difference.

</details>

---

### 🟢 ex02 — ft_strcat

<table>
<tr><td>🎯 <b>Required</b></td><td>Concatenate src to end of dest</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>String concatenation</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strcat.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Find end of dest:**
   - Initialize `end = 0`
   - Loop: `while (dest[end])` → `end++`
   - Now `end` is at the null terminator position

2. **Copy src starting there:**
   - Loop through src: `while (*src)`
   - Copy: `dest[end] = *src`
   - Advance both: `src++`, `end++`

3. **Add null terminator:**
   - `dest[end] = '\0'`

4. **Return dest pointer**

**💡 Key Insight:** You're essentially doing strcpy, but starting at the END of dest instead of the beginning. Find the null, then copy there!

</details>

---

### 🟡 ex03 — ft_strncat

<table>
<tr><td>🎯 <b>Required</b></td><td>Concatenate at most nb characters</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Bounded concatenation</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strncat.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Same as strcat but with limit:**
   - Save original dest pointer in `buffer`
   - Find end of dest
   - Copy from src while `*src && nb > 0`
   - Decrement `nb` each iteration

2. **Important difference from strncpy:**
   - strncat ALWAYS adds null terminator after copying
   - Even if you copy exactly nb characters

3. **Edge case nb == 0:**
   - Return dest unchanged

**💡 Key Insight:** Unlike strncpy, strncat is "safer" - it always null-terminates. But you still need enough space in dest for the appended content!

</details>

---

### 🟡 ex04 — ft_strstr

<table>
<tr><td>🎯 <b>Required</b></td><td>Find first occurrence of needle in haystack</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Substring search algorithm</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strstr.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Edge case: empty needle:**
   - If `*to_find == '\0'`, return str immediately

2. **Outer loop: try each starting position:**
   - Loop through str: `while (*str)`
   - At each position, check if needle matches starting here

3. **Inner matching logic:**
   ```c
   idx_str = str;
   idx_find = to_find;
   while (*idx_str == *idx_find && *idx_find) {
       idx_find++;
       idx_str++;
   }
   ```

4. **Check for match:**
   - If `*idx_find == '\0'` → needle exhausted = full match found!
   - Return current `str` position (where match started)

5. **No match at this position:**
   - Advance str and try next position
   - If str exhausted, return NULL (0)

**💡 Key Insight:** It's a "sliding window" search - slide the needle along the haystack, checking for a match at each position until you find it or run out of haystack.

</details>

---

### 🟡 ex05 — ft_strlcat

<table>
<tr><td>🎯 <b>Required</b></td><td>Safe concatenation with size limit</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Buffer overflow prevention</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strlcat.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Understanding `size` parameter:**
   - `size` = total buffer size of dest (not remaining space!)
   - Includes existing content AND space for null

2. **Calculate lengths:**
   - `len_d = strlen(dest)`
   - `len_s = strlen(src)`

3. **Edge case: size <= len_d:**
   - Buffer is already full or overspecified
   - Return `size + len_s`

4. **Concatenation with bounds:**
   ```c
   dest += len_d;                    // Move to end
   end = dest + (size - len_d - 1);  // Calculate boundary
   while (*src && dest < end)
       *dest++ = *src++;
   *dest = '\0';
   ```

5. **Return value:**
   - Always `len_d + len_s` (what total length WOULD be)
   - If return >= size, truncation occurred!

**💡 Key Insight:** strlcat tells you what it TRIED to create. Comparing return value to size lets you detect and handle truncation gracefully.

</details>

---

<div align="center">

# 📔 C04 — Output Functions

<img src="https://user-images.githubusercontent.com/74038190/216656953-1c3e6e8f-cd5a-4d8d-b1c7-1b3f9f1c2e2f.gif" width="60">

</div>

```
╔═══════════════════════════════════════════════════════════════════════════╗
║                           🎯 LEARNING OBJECTIVES                              ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ String length calculation                                                  ║
║  ✦ String output to stdout                                                    ║
║  ✦ Integer to string conversion (multiple approaches)                         ║
║  ✦ String to integer conversion (parsing)                                     ║
║  ✦ Number base conversion (binary, hex, etc.)                                 ║
║  ✦ Input validation                                                           ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

---

### 🟢 ex00 — ft_strlen

<table>
<tr><td>🎯 <b>Required</b></td><td>Return the length of a string</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>String traversal, counting</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_strlen.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Simple counting loop:**
   - Initialize counter `i = 0`
   - While `str[i]` is not null: increment `i`
   - Return `i` (cast to int if using unsigned counter)

**💡 Key Insight:** This is THE fundamental string function - you'll use strlen in almost every other string operation!

</details>

---

### 🟢 ex01 — ft_putstr

<table>
<tr><td>🎯 <b>Required</b></td><td>Display a string to stdout</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>String output using write</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_putstr.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Get the length first:**
   - Call `ft_strlen(str)` to get length

2. **Single write call:**
   - `write(1, str, len)` - write entire string at once
   - More efficient than calling putchar for each character!

**💡 Key Insight:** One write() call for the whole string is much more efficient than many calls for individual characters. Use strlen to know how many bytes to write.

</details>

---

### 🟡 ex02 — ft_putnbr ⭐

<table>
<tr><td>🎯 <b>Required</b></td><td>Display an integer</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Number to string conversion, recursion vs iteration</td></tr>
<tr><td>📄 <b>Files</b></td><td><code>ft_putnbr.c</code> (iterative) | <code>ft_putnbr_v1.c</code> (recursive)</td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

### 📄 Two Approaches Comparison

---

#### Approach 1: Recursive (ft_putnbr_v1.c)

**Concept:** Use the call stack to reverse digit order naturally

```c
void ft_putnbr(int nb)
{
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);  // Special case!
        return;
    }
    if (nb < 0) {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);  // Recurse first (prints left digits)
    ft_putchar((nb % 10) + 48);  // Then print last digit
}
```

**How it works for 1234:**
```
call(1234) → call(123) → call(12) → call(1)
                                     print '1'
                         print '2'
             print '3'
print '4'
```

**Pros:**
- Elegant and short code
- Natural digit ordering via call stack
- Easy to understand conceptually

**Cons:**
- Uses stack space for each digit (could overflow for huge numbers in theory)
- Multiple write() calls (one per digit)

---

#### Approach 2: Iterative with Buffer (ft_putnbr.c)

**Concept:** Build all digits in a buffer, then write once

```c
void ft_putnbr(int nb)
{
    char  buffer[20];
    long  num = nb;
    long  pwr = 1;
    int   i = 0;
    
    if (num < 0) {
        write(1, "-", 1);
        num = -num;  // Safe with long!
    }
    
    // Find largest power of 10
    while (num / 10 >= pwr)
        pwr *= 10;
    
    // Extract digits left to right
    while (pwr >= 1) {
        buffer[i++] = (num / pwr) + '0';
        num %= pwr;
        pwr /= 10;
    }
    
    write(1, buffer, i);  // Single write!
}
```

**How it works for 1234:**
```
pwr = 1000
1234 / 1000 = 1, buffer[0] = '1', num = 234, pwr = 100
234 / 100 = 2, buffer[1] = '2', num = 34, pwr = 10
34 / 10 = 3, buffer[2] = '3', num = 4, pwr = 1
4 / 1 = 4, buffer[3] = '4'
write(buffer, 4)
```

**Pros:**
- Single write() call (more efficient)
- No recursion (no stack buildup)
- Uses `long` to handle INT_MIN cleanly

**Cons:**
- More code to write
- Need to calculate power of 10 first

---

### 📊 Key Differences

| Aspect | Recursive | Iterative |
|:--|:--|:--|
| **INT_MIN handling** | Special case with string | `long` type handles it |
| **write() calls** | One per digit | Single call |
| **Memory** | Stack frames | Fixed buffer |
| **Code length** | Shorter | Longer |
| **Efficiency** | Good | Better |

**💡 Key Insight:** Both approaches solve the "digits come out backwards" problem differently:
- Recursive: Let the call stack reverse them for you
- Iterative: Calculate the largest power of 10 first, then extract digits left-to-right

</details>

---

### 🟡 ex03 — ft_atoi

<table>
<tr><td>🎯 <b>Required</b></td><td>Convert a string to an integer</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>String parsing, handling whitespace and signs</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_atoi.c</code></td></tr>
</table>

**🔍 Research These:**
- What are whitespace characters? (space, tab, newline, etc.)
- How do multiple signs work? (`--5` = 5, `---5` = -5)
- ASCII values of digit characters

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

### Three Phases of Parsing

```c
int ft_atoi(char *str)
{
    int num = 0;
    int sign = 1;
    
    // Phase 1: Skip whitespace
    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    
    // Phase 2: Handle signs
    while (*str == '-' || *str == '+') {
        if (*str == '-')
            sign *= -1;  // Each '-' flips the sign
        str++;
    }
    
    // Phase 3: Convert digits
    while (*str >= '0' && *str <= '9')
        num = num * 10 + (*str++ - '0');
    
    return (num * sign);
}
```

---

### Phase 1: Whitespace Characters

| ASCII | Character | Name |
|:--|:--|:--|
| 9 | `\t` | Tab |
| 10 | `\n` | Newline |
| 11 | `\v` | Vertical tab |
| 12 | `\f` | Form feed |
| 13 | `\r` | Carriage return |
| 32 | ` ` | Space |

The condition `(*str >= 9 && *str <= 13) || *str == ' '` catches all of them!

---

### Phase 2: Multiple Signs Logic

```
"--5"   → sign = 1 * -1 * -1 = 1  → result: 5
"---5"  → sign = 1 * -1 * -1 * -1 = -1 → result: -5
"+-+-5" → sign = 1 * 1 * -1 * 1 * -1 = 1 → result: 5
```

Each `-` flips the sign, `+` does nothing.

---

### Phase 3: Building the Number

The formula `num = num * 10 + digit` shifts existing digits left:
```
"123" builds as:
num = 0
num = 0 * 10 + 1 = 1
num = 1 * 10 + 2 = 12
num = 12 * 10 + 3 = 123
```

**💡 Key Insight:** `*str++ - '0'` does two things:
1. `*str - '0'` converts char '5' to int 5
2. `str++` advances to next character

This is a common C idiom for compact code!

</details>

---

### 🔴 ex04 — ft_putnbr_base ⭐⭐

<table>
<tr><td>🎯 <b>Required</b></td><td>Display a number in any base (binary, hex, etc.)</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Base conversion, input validation, recursion vs iteration</td></tr>
<tr><td>📄 <b>Files</b></td><td><code>ft_putnbr_base.c</code> (iterative) | <code>ft_putnbr_base_v2.c</code> (recursive)</td></tr>
</table>

**🔍 Research These:**
- How number bases work (binary=2, octal=8, decimal=10, hex=16)
- Why validate the base string?
- Division and modulo for base conversion

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

### 🧠 Understanding Base Conversion

**The base string defines the digits:**
- Binary: `"01"` (length 2)
- Octal: `"01234567"` (length 8)
- Decimal: `"0123456789"` (length 10)
- Hex: `"0123456789abcdef"` (length 16)
- Custom: `"poneyvif"` (length 8, like octal but with different symbols!)

**Key formula:** `base[nbr % base_len]` gives the character for the rightmost digit

---

### 📋 Base Validation (Shared by Both Versions)

```c
int ft_is_base_valid(char *base)
{
    int i, len = 0;
    
    while (base[len]) {
        // No + or - allowed (reserved for signs)
        if (base[len] == '-' || base[len] == '+')
            return (0);
        
        // Check for duplicates
        i = len + 1;
        while (base[i])
            if (base[len] == base[i++])
                return (0);
        len++;
    }
    
    // Base must have at least 2 digits
    return (len < 2 ? 0 : len);
}
```

**Why these rules?**
- No `+` or `-`: They're used for the number's sign
- No duplicates: Each digit must be unique
- Length >= 2: Base 1 doesn't make sense, base 0 is impossible

---

### 📄 Two Approaches Comparison

#### Approach 1: Iterative with Buffer (ft_putnbr_base.c)

```c
void ft_solve_helper(long nbr, char *base, int len_base)
{
    char buffer[100];
    long pwr = 1;
    int  i = 0;
    
    // Find largest power of base
    while (nbr / len_base >= pwr)
        pwr *= len_base;
    
    // Extract digits left to right
    while (pwr >= 1) {
        int index = nbr / pwr;
        buffer[i++] = base[index];
        nbr %= pwr;
        pwr /= len_base;
    }
    
    write(1, buffer, i);
}
```

**How it works for 42 in binary ("01"):**
```
pwr = 32 (largest power of 2 ≤ 42)
42/32 = 1, buffer[0] = '1', nbr = 10, pwr = 16
10/16 = 0, buffer[1] = '0', nbr = 10, pwr = 8
10/8 = 1,  buffer[2] = '1', nbr = 2,  pwr = 4
2/4 = 0,   buffer[3] = '0', nbr = 2,  pwr = 2
2/2 = 1,   buffer[4] = '1', nbr = 0,  pwr = 1
0/1 = 0,   buffer[5] = '0'
Result: "101010"
```

---

#### Approach 2: Recursive (ft_putnbr_base_v2.c)

```c
void ft_solve_helper(long nbr, char *base, int len_base)
{
    if (nbr >= len_base)
        ft_solve_helper(nbr / len_base, base, len_base);
    write(1, &base[nbr % len_base], 1);
}
```

**How it works for 42 in binary ("01"):**
```
call(42) → call(21) → call(10) → call(5) → call(2) → call(1)
                                                      print '1'
                                            print '0'
                                  print '1'
                       print '0'
            print '1'
print '0'
Result: "101010"
```

---

### 📊 Key Differences

| Aspect | Iterative | Recursive |
|:--|:--|:--|
| **write() calls** | Single call | One per digit |
| **Memory** | Fixed buffer | Stack frames |
| **Code length** | Longer | Much shorter |
| **Complexity** | More complex | Elegant |
| **Power calculation** | Manual | Not needed |

---

### 🎯 Main Function (Same for Both)

```c
void ft_putnbr_base(int nbr, char *base)
{
    int  len_base;
    long nb;
    
    len_base = ft_is_base_valid(base);
    if (!len_base)
        return;
    
    nb = nbr;  // Use long to handle INT_MIN
    if (nb < 0) {
        write(1, "-", 1);
        nb *= -1;
    }
    
    ft_solve_helper(nb, base, len_base);
}
```

**💡 Key Insight:** The recursive version is beautiful in its simplicity - just 4 lines! It lets the call stack naturally reverse the digit order. The iterative version is more efficient but requires calculating the power first.

**Example outputs:**
```
ft_putnbr_base(42, "01")              → "101010" (binary)
ft_putnbr_base(42, "0123456789abcdef") → "2a" (hex)
ft_putnbr_base(42, "poneyvif")         → "vn" (custom base!)
```

</details>

---

### 🔴 ex05 — ft_atoi_base ⭐⭐

<table>
<tr><td>🎯 <b>Required</b></td><td>Convert string in any base to decimal integer</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Base parsing, complex validation, character lookup</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_atoi_base.c</code></td></tr>
</table>

**🔍 Research These:**
- How to convert from any base to decimal
- Character position lookup in base string
- Combining multiple validation checks

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

### 1. Base Validation (Enhanced)

```c
int is_base_valid(char *base)
{
    int l = 0, i;
    
    while (base[l]) {
        // Check for duplicates
        i = l + 1;
        while (base[i])
            if (base[l] == base[i++])
                return (0);
        
        // No whitespace allowed in base
        if (base[l] >= 9 && base[l] <= 13)
            return (0);
        // No space, +, or - allowed
        if (base[l] == ' ' || base[l] == '-' || base[l] == '+')
            return (0);
        l++;
    }
    
    return (l < 2 ? 0 : l);
}
```

**Additional validation:** Base string cannot contain whitespace characters!

---

### 2. Character Lookup in Base

```c
int is_c_valid(char c, char *base)
{
    int index = 0;
    
    while (base[index]) {
        if (c == base[index])
            return (index);  // Return position in base!
        index++;
    }
    return (-1);  // Not found
}
```

**Example:** In base "01", character '1' returns index 1, character '0' returns index 0.

---

### 3. Number Building

```c
int ft_count(char *str, char *base, int len_base)
{
    int result = 0;
    int index;
    
    while (*str) {
        index = is_c_valid(*str++, base);
        if (index == -1)
            return (result);  // Stop at invalid char
        result = (result * len_base) + index;
    }
    return (result);
}
```

**How it builds "101" in binary:**
```
result = 0
'1' → index=1 → result = 0*2 + 1 = 1
'0' → index=0 → result = 1*2 + 0 = 2
'1' → index=1 → result = 2*2 + 1 = 5
```

---

### 4. Complete Solution with Sign Handling

```c
int ft_solve_helper(char *str, char *base, int len_base)
{
    int sign = 1;
    
    // Skip whitespace
    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    
    // Handle signs
    while (*str == '-' || *str == '+') {
        if (*str++ == '-')
            sign *= -1;
    }
    
    return (sign * ft_count(str, base, len_base));
}

int ft_atoi_base(char *str, char *base)
{
    int len_base = is_base_valid(base);
    
    if (!len_base)
        return (0);
    
    return ft_solve_helper(str, base, len_base);
}
```

---

### 📊 Examples

| Input String | Base | Output |
|:--|:--|:--|
| `"101"` | `"01"` | 5 (binary) |
| `"2a"` | `"0123456789abcdef"` | 42 (hex) |
| `"vn"` | `"poneyvif"` | 42 (custom) |
| `"  -101"` | `"01"` | -5 (with sign) |

**💡 Key Insight:** The formula `result = result * base + digit` works for ANY base! It's the universal algorithm for base conversion. The character lookup tells us what each digit's VALUE is in that base.

</details>

---

<div align="center">

# 📓 C05 — Recursion & Math

<img src="https://user-images.githubusercontent.com/74038190/216656956-c5a1c854-38d0-4b23-a95e-6c1c7c0e3b0b.gif" width="60">

</div>

```
╔═══════════════════════════════════════════════════════════════════════════╗
║                           🎯 LEARNING OBJECTIVES                              ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Recursive functions and base cases                                         ║
║  ✦ Mathematical operations (factorial, power, Fibonacci)                      ║
║  ✦ Iterative vs recursive approaches                                          ║
║  ✦ Backtracking algorithms                                                    ║
║  ✦ Constraint checking                                                        ║
║  ✦ The famous N-Queens puzzle!                                                ║
╚═══════════════════════════════════════════════════════════════════════════╝
```

---

### 🟢 ex00 — ft_iterative_factorial

<table>
<tr><td>🎯 <b>Required</b></td><td>Calculate factorial using iteration (n!)</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Iterative loops, factorial concept</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_iterative_factorial.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Understanding factorial:**
   - 5! = 5 × 4 × 3 × 2 × 1 = 120
   - 0! = 1 (by definition)
   - Negative numbers: return 0 (undefined)

2. **Iterative algorithm:**
   ```c
   int ft_iterative_factorial(int nb)
   {
       int result = 1;
       
       if (nb < 0)
           return (0);
       
       while (nb > 1) {
           result *= nb;
           nb--;
       }
       return (result);
   }
   ```

3. **Why start result at 1?**
   - Multiplying by 1 doesn't change anything (identity element)
   - Handles 0! correctly (returns 1 without entering loop)

**💡 Key Insight:** Start with result=1 and multiply by each number from nb down to 2. No need to multiply by 1!

</details>

---

### 🟢 ex01 — ft_recursive_factorial

<table>
<tr><td>🎯 <b>Required</b></td><td>Calculate factorial using recursion</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Recursive thinking, base cases</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_recursive_factorial.c</code></td></tr>
</table>

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

1. **Recursive definition:**
   - 5! = 5 × 4!
   - 4! = 4 × 3!
   - 3! = 3 × 2!
   - 2! = 2 × 1!
   - 1! = 1 (base case)

2. **Implementation:**
   ```c
   int ft_recursive_factorial(int nb)
   {
       if (nb < 0)
           return (0);
       if (nb <= 1)
           return (1);  // Base case!
       
       return (nb * ft_recursive_factorial(nb - 1));
   }
   ```

3. **How recursion works for 5!:**
   ```
   call(5) returns 5 * call(4)
                       call(4) returns 4 * call(3)
                                           call(3) returns 3 * call(2)
                                                               call(2) returns 2 * call(1)
                                                                                   call(1) returns 1
   ```
   Then it unwinds: 2×1=2, 3×2=6, 4×6=24, 5×24=120

**💡 Key Insight:** Recursion breaks the problem into smaller pieces. The base case (n≤1) stops the recursion. Trust that the recursive call works!

</details>

---

### 🔴 ex08 — ft_ten_queens_puzzle ⭐⭐⭐

<table>
<tr><td>🎯 <b>Required</b></td><td>Place 10 queens on 10×10 board with no conflicts, count all solutions</td></tr>
<tr><td>📖 <b>You'll Learn</b></td><td>Backtracking, constraint checking, recursion</td></tr>
<tr><td>📄 <b>File</b></td><td><code>ft_ten_queens_puzzle.c</code></td></tr>
</table>

**🔍 Research These:**
- N-Queens problem
- Backtracking algorithm
- How queens attack (row, column, diagonals)

<details>
<summary>💡 <b>Tried hard and still stuck? Click here</b></summary>

<br>

**🧠 Logic & Approach:**

### 1. Board Representation
```c
int board[10];  // board[col] = row where queen is placed
// Example: board = [0, 2, 4, 1, 3, ...] means:
// Queen in column 0 is at row 0
// Queen in column 1 is at row 2
// Queen in column 2 is at row 4, etc.
```

This representation automatically prevents column conflicts (one queen per column)!

---

### 2. Validity Check

For a new queen at position (row, col), check against all previously placed queens:

```c
int is_valid(int *board, int row, int col)
{
    int i = 0;
    while (i < col) {
        // Same row?
        if (board[i] == row)
            return (0);
        
        // Same diagonal? |row_diff| == |col_diff|
        if (ft_abs(board[i] - row) == ft_abs(i - col))
            return (0);
        i++;
    }
    return (1);
}
```

**Diagonal check explained:**
```
Two queens are on the same diagonal if and only if:
|row1 - row2| == |col1 - col2|

Example: (2,0) and (4,2)
|2-4| = 2, |0-2| = 2 → Same diagonal! ❌
```

---

### 3. Recursive Solver (Backtracking)

```c
int solve_helper(int *board, int col)
{
    int total_solutions = 0;
    int row;
    
    // Base case: all queens placed!
    if (col >= 10) {
        ft_putboard(board);
        return (1);
    }
    
    // Try each row for this column
    row = 0;
    while (row < 10) {
        if (is_valid(board, row, col)) {
            board[col] = row;        // Place queen
            total_solutions += solve_helper(board, col + 1);  // Recurse
            board[col] = -1;         // Backtrack (remove queen)
        }
        row++;
    }
    
    return (total_solutions);
}
```

**Backtracking visualized:**
```
Try col=0, row=0 ✓
  Try col=1, row=0 ✗ (same row)
  Try col=1, row=1 ✗ (diagonal)
  Try col=1, row=2 ✓
    Try col=2, row=0 ✗
    Try col=2, row=1 ✗
    ...
    Dead end → backtrack to col=1
  Try col=1, row=3 ✓
    ... continue
```

---

### 4. Printing Solutions

```c
void ft_putboard(int *board)
{
    int i = 0;
    while (i <= 9) {
        char c = board[i] + '0';  // Convert row number to character
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}
```

Output format: `"0257948136\n"` means queens at:
- Column 0: Row 0
- Column 1: Row 2
- Column 2: Row 5
- ... and so on

---

### 5. Main Function

```c
int ft_ten_queens_puzzle(void)
{
    int board[10];
    int i = 0;
    
    // Initialize all positions to -1 (no queen)
    while (i < 10)
        board[i++] = -1;
    
    // Start solving from column 0
    return solve_helper(board, 0);
}
```

**Answer:** There are **724 solutions** for the 10-queens puzzle!

**💡 Key Insight:** Backtracking is like exploring a maze - when you hit a dead end, you go back to the last junction and try a different path. The algorithm systematically explores ALL possibilities by "undoing" choices and trying alternatives.

</details>

---

<div align="center">

## 🎯 Golden Tips for Success

<img src="https://user-images.githubusercontent.com/74038190/212284158-e840e285-664b-44d7-b79b-e264b5e54825.gif" width="400">

</div>

<table align="center">
<tr>
<th>✅ DO</th>
<th>❌ DON'T</th>
</tr>
<tr>
<td>📖 Read <code>man</code> pages (<code>man 2 write</code>)</td>
<td>📋 Copy code blindly</td>
</tr>
<tr>
<td>🧪 Test edge cases (0, -1, INT_MIN, empty)</td>
<td>🏃 Start with the hardest exercise</td>
</tr>
<tr>
<td>⚠️ Use <code>gcc -Wall -Wextra -Werror</code></td>
<td>🚫 Ignore Norminette</td>
</tr>
<tr>
<td>✏️ Draw diagrams before coding</td>
<td>😤 Give up too quickly</td>
</tr>
<tr>
<td>👥 Ask peers for help</td>
<td>🖨️ Use <code>printf</code> in submissions</td>
</tr>
</table>

---

<div align="center">

## 🚀 Quick Commands

</div>

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

## 📚 Common Patterns Summary

</div>

| Pattern | Used In | Description |
|:--|:--|:--|
| **Two-pointer** | rev_int_tab, strcmp | Start from both ends, move toward middle |
| **Flag/State machine** | strcapitalize | Remember state between iterations |
| **Recursive unwinding** | putnbr, combn | Use call stack to reverse order |
| **Buffer building** | putnbr, putnbr_base | Collect output, write once |
| **Backtracking** | combn, ten_queens | Try options, undo if failed |
| **Validation first** | putnbr_base, atoi | Check input before processing |

---

<div align="center">

<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="700">

### 💭 *"The only way to learn programming is by writing programs."*
#### — Dennis Ritchie, Creator of C

<br>

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:00C9FF,100:92FE9D&height=120&section=footer" />

**Made with ❤️ by [Itachi-Logic](https://github.com/Itachi-Logic) | 🏫 1337 Morocco | 🌍 42 Network**

</div>
