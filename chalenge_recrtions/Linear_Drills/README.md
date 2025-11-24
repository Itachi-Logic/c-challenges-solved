<div align="center">

# 🎨 Linear_Drills

### *Recursive Functions that Print Output*

[![Exercises](https://img.shields.io/badge/Exercises-4-success?style=for-the-badge&logo=c&logoColor=white)](.)
[![Difficulty](https://img.shields.io/badge/Difficulty-Beginner-4CAF50?style=for-the-badge)](.)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](.)
[![Norminette](https://img.shields.io/badge/Norminette-Passing-success?style=for-the-badge)](.)

---

**A collection of beginner-friendly recursive functions that print formatted output**  
*Part of [c-challenges-solved](../../) repository*

[Overview](#-overview) • [Exercises](#-exercises) • [Compilation](#%EF%B8%8F-compilation) • [Testing](#-testing)

</div>

---

## 📋 Overview

This module introduces **void-type recursive functions** that focus on printing formatted sequences. These exercises are perfect for understanding the basics of recursion, call stack behavior, and the difference between printing before vs. after recursive calls.

### 🎯 What You'll Learn

```mermaid
graph LR
    A[Print Before Call] --> B[Print After Call]
    B --> C[Forward Sequences]
    C --> D[Reverse Sequences]
    style A fill:#4CAF50
    style B fill:#2196F3
    style C fill:#FF9800
    style D fill:#9C27B0
```

| Concept | Exercises | Pattern |
|:--------|:----------|:--------|
| **Print After** | put_n_number, put_alpha | Forward: 0 > 1 > 2 > 3 |
| **Print Before** | put_revn_number, put_rev_alpha | Reverse: 3 > 2 > 1 > 0 |

---

## 📚 Exercises

### 🔢 Exercise 1: `put_n_number`

> Print numbers from 0 to N in ascending order

```c
void recrtion(int n);
```

**Pattern:** Print **after** recursive call
```
recrtion(3):
  recrtion(2)
    recrtion(1)
      recrtion(0)
        print "0"
      print " > 1"
    print " > 2"
  print " > 3"
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./put_n_number 5
0 > 1 > 2 > 3 > 4 > 5
$>
$> ./put_n_number 0
0
$>
$> ./put_n_number 10
0 > 1 > 2 > 3 > 4 > 5 > 6 > 7 > 8 > 9 > 10
$>
$> ./put_n_number
# Prints only newline
$>
```
</details>

**Requirements:**
- ✅ Take exactly **one argument** (or none)
- ✅ Base case: **n == 0**
- ✅ Print **after** recursive call (forward order)
- ✅ Format: `0 > 1 > 2 > ... > N\n`
- ✅ Always print **newline** at the end

**Key Learning:** When you print **after** the recursive call, output appears in **forward order** (0 → N).

---

### 🔄 Exercise 2: `put_revn_number`

> Print numbers from N to 0 in descending order

```c
void put_revn_number(int n);
```

**Pattern:** Print **before** recursive call
```
put_revn_number(3):
  print "3 > "
  put_revn_number(2)
    print "2 > "
    put_revn_number(1)
      print "1 > "
      put_revn_number(0)
        print "0\n"
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./put_revn_number 5
5 > 4 > 3 > 2 > 1 > 0
$>
$> ./put_revn_number 0
0
$>
$> ./put_revn_number 10
10 > 9 > 8 > 7 > 6 > 5 > 4 > 3 > 2 > 1 > 0
$>
$> ./put_revn_number
# No output (argc != 2)
$>
```
</details>

**Requirements:**
- ✅ Take exactly **one argument** (or none)
- ✅ Base case: **n == 0** (print with `\n`)
- ✅ Print **before** recursive call (reverse order)
- ✅ Format: `N > N-1 > ... > 1 > 0\n`
- ✅ Base case handles **newline**

**Key Learning:** When you print **before** the recursive call, output appears in **reverse order** (N → 0).

---

### 🔤 Exercise 3: `put_alpha`

> Print alphabet from a/A to z/Z in ascending order

```c
void put_alpha(char c);
```

**Pattern:** Print **after** recursive call (like put_n_number)
```
put_alpha('a'):
  print "a > "
  put_alpha('b')
    ...
      put_alpha('z')
        print " > z"  (base case)
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./put_alpha a
a > b > c > d > e > f > g > h > i > j > k > l > m > n > o > p > q > r > s > t > u > v > w > x > y > z
$>
$> ./put_alpha A
A > B > C > D > E > F > G > H > I > J > K > L > M > N > O > P > Q > R > S > T > U > V > W > X > Y > Z
$>
$> ./put_alpha b
Please enter a for lowercase alpha or A for uppercase alpha
$>
$> ./put_alpha
Please enter a for lowercase alpha or A for uppercase alpha
$>
```
</details>

**Requirements:**
- ✅ Take exactly **'a'** or **'A'** as argument
- ✅ Must be **single character** only
- ✅ Base case: **c == 'z'** or **c == 'Z'**
- ✅ Print **after** recursive call (forward order)
- ✅ Format: `a > b > ... > z\n`
- ✅ Error message for invalid input
- ✅ Return **1** on error

**Key Learning:** Same pattern as numbers, but with characters. Validate input strictly!

---

### 🔁 Exercise 4: `put_rev_alpha`

> Print alphabet from z/Z to a/A in descending order

```c
void put_rev_alpha(char c);
```

**Pattern:** Print **after** recursive call but process backwards
```
put_rev_alpha('a'):
  put_rev_alpha('b')
    ...
      put_rev_alpha('z')
        print "z"
    print " > y"
  print " > b"
print " > a"
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./put_rev_alpha a
z > y > x > w > v > u > t > s > r > q > p > o > n > m > l > k > j > i > h > g > f > e > d > c > b > a
$>
$> ./put_rev_alpha A
Z > Y > X > W > V > U > T > S > R > Q > P > O > N > M > L > K > J > I > H > G > F > E > D > C > B > A
$>
$> ./put_rev_alpha z
Please enter a for lowercase alpha or A for uppercase alpha
$>
$> ./put_rev_alpha AA
Please enter a for lowercase alpha or A for uppercase alpha
$>
```
</details>

**Requirements:**
- ✅ Take exactly **'a'** or **'A'** as argument
- ✅ Must be **single character** only
- ✅ Base case: **c == 'z'** or **c == 'Z'** (print without separator)
- ✅ Print **after** recursive call (prints in reverse)
- ✅ Format: `z > y > ... > a\n`
- ✅ Error message for invalid input
- ✅ Return **1** on error

**Key Learning:** Even with print **after** call, we can get reverse order by recursing forward first!

---

## 🛠️ Compilation

### Individual Exercise
```bash
gcc -Wall -Wextra -Werror <exercise>.c -o <exercise>
```

### All Exercises
```bash
# Quick compile script
for f in put_*.c; do
    gcc -Wall -Wextra -Werror "$f" -o "${f%.c}"
done
```

### With Debug Symbols
```bash
gcc -Wall -Wextra -Werror -g <exercise>.c -o <exercise>
```

---

## 🧪 Testing

### Basic Tests
```bash
# Numbers - Forward
./put_n_number 5
./put_n_number 0
./put_n_number 100

# Numbers - Reverse  
./put_revn_number 5
./put_revn_number 0
./put_revn_number 100

# Alphabet - Forward
./put_alpha a
./put_alpha A

# Alphabet - Reverse
./put_rev_alpha a
./put_rev_alpha A
```

### Edge Cases
```bash
# No arguments
./put_n_number
./put_revn_number
./put_alpha
./put_rev_alpha

# Invalid arguments for alpha
./put_alpha b
./put_alpha abc
./put_alpha 1
./put_rev_alpha Z
```

### Validation Tests
```bash
# Test strict input validation
./put_alpha "a"     # Valid
./put_alpha "aa"    # Invalid - multiple chars
./put_alpha ""      # Invalid - empty
./put_alpha "b"     # Invalid - not 'a' or 'A'
```

---

## 📊 Understanding Print Order

### 🔄 Print After Call (Forward Order)

```c
void forward(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    forward(n - 1);     // Recurse first
    printf(" > %d", n);  // Print after
}
```

**Execution Flow for n=3:**
```
Call Stack:           Output Order:
forward(3)           
  forward(2)         
    forward(1)       
      forward(0) →   "0"
    return       →   " > 1"
  return         →   " > 2"
return           →   " > 3"
```
**Result:** `0 > 1 > 2 > 3`

---

### 🔁 Print Before Call (Reverse Order)

```c
void reverse(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    printf("%d > ", n);  // Print first
    reverse(n - 1);      // Then recurse
}
```

**Execution Flow for n=3:**
```
Call Stack:           Output Order:
reverse(3)       →   "3 > "
  reverse(2)     →   "2 > "
    reverse(1)   →   "1 > "
      reverse(0) →   "0\n"
```
**Result:** `3 > 2 > 1 > 0`

---

## 📈 Complexity Analysis

| Exercise | Time | Space | Depth | Output |
|:---------|:----:|:-----:|:-----:|:------:|
| `put_n_number` | O(n) | O(n) | n | Forward |
| `put_revn_number` | O(n) | O(n) | n | Reverse |
| `put_alpha` | O(26) | O(26) | 26 | Forward |
| `put_rev_alpha` | O(26) | O(26) | 26 | Reverse |

**Note:** All exercises have **linear complexity** but differ in **when** they print.

---

## ⚠️ Common Pitfalls

### 🔴 Forgetting Base Case
```c
// Infinite recursion!
void bad_print(int n) {
    printf("%d > ", n);
    bad_print(n - 1);  // Never stops!
}
```

### 🔴 Wrong Print Position
```c
// Wanted forward but got reverse
void wrong_forward(int n) {
    if (n == 0) return;
    printf("%d > ", n);  // ❌ Prints before call
    wrong_forward(n - 1);
}
```

### 🔴 Incorrect Format
```c
// Missing separator or newline
void bad_format(int n) {
    if (n == 0) {
        printf("0");  // ❌ Missing \n
        return;
    }
    bad_format(n - 1);
    printf("%d", n);  // ❌ Missing " > "
}
```

### 🔴 Not Validating Input (Alpha)
```c
// Should reject non-'a'/'A' inputs
if (argv[1][0] == 'a' || argv[1][0] == 'A') {
    // ❌ What if argv[1][1] != '\0'?
    // ❌ Need: argv[1][1] == '\0'
}
```

---

## 💡 Pro Tips

### ✨ Understanding the Pattern

| When to Print | Order | Use Case |
|:-------------|:------|:---------|
| **After Call** | Forward | Count up, a→z |
| **Before Call** | Reverse | Count down, z→a |
| **After + Forward Recursion** | Reverse | z→a with print after |

### 🎯 Debugging Tips
```bash
# Add trace to understand flow
void put_n_number(int n) {
    printf("[Entering: n=%d]\n", n);  // Trace
    if (n == 0) {
        printf("0");
        printf("[Base case reached]\n");  // Trace
        return;
    }
    put_n_number(n - 1);
    printf(" > %d", n);
    printf("[Returning from n=%d]\n", n);  // Trace
}
```

### 📝 Good Practices
- ✅ Always validate input strictly
- ✅ Handle edge cases (0, negative, invalid chars)
- ✅ Use clear base case conditions
- ✅ Be consistent with formatting
- ✅ Always end with newline

---

## 📈 Progression Path

```
Start Here          Basic Understanding      Master the Pattern
    ↓                      ↓                        ↓
put_n_number  →  put_revn_number  →  put_alpha  →  put_rev_alpha
    ↓                      ↓                        ↓
Print After         Print Before          Character Recursion
(Forward)           (Reverse)             (Same Patterns)
```

**Recommended Order:**
1. ✅ `put_n_number` - Learn print **after** (forward)
2. ✅ `put_revn_number` - Learn print **before** (reverse)
3. ✅ `put_alpha` - Apply to characters (forward)
4. ✅ `put_rev_alpha` - Apply to characters (reverse)

---

## 🔗 Related Topics

### In This Repository
- [Decision_Matrix](../return_recrtions/) - Functions that return values
- [42 Piscine Practice](../../42-piscine-practice/) - Fundamental C exercises
- [Level 0](../../42-piscine-practice/level_0/) - Basic output functions
- [Level 1](../../42-piscine-practice/level_1/) - String manipulation

### Key Differences

| Linear_Drills | Decision_Matrix |
|:----------------|:------------------|
| Focus on **output** | Focus on **computation** |
| Print to screen | Return values |
| No return value needed | Combine results recursively |
| Simpler to understand | More complex logic |

---

## 🎓 Visualization Guide

### Call Stack Visualization

```
put_n_number(3) call stack:

┌─────────────────┐
│  main()         │
├─────────────────┤
│  put_n_number(3)│ ← Waiting
├─────────────────┤
│  put_n_number(2)│ ← Waiting
├─────────────────┤
│  put_n_number(1)│ ← Waiting
├─────────────────┤
│  put_n_number(0)│ ← Executing (base case)
└─────────────────┘
        ↓
    Prints "0"
        ↓
┌─────────────────┐
│  main()         │
├─────────────────┤
│  put_n_number(3)│ ← Waiting
├─────────────────┤
│  put_n_number(2)│ ← Waiting
├─────────────────┤
│  put_n_number(1)│ ← Resuming
└─────────────────┘
        ↓
    Prints " > 1"
        ↓
    And so on...
```

---

<div align="center">

### 🎓 Learning Outcomes

After mastering these exercises, you will understand:

**Core Concepts** | **Output Control** | **Best Practices**
:---: | :---: | :---:
Recursion basics | Print before vs after | Input validation
Call stack flow | Forward sequences | Error handling
Base cases | Reverse sequences | Clean formatting

---

### 📫 Need Help?

If you find any issues or have suggestions:
- 🐛 [Report a bug](../../issues)
- 💡 [Request a feature](../../issues)
- ⭐ [Star this repo](../../)

---

**Made with ❤️ for learning void recursion**

*Perfect starting point before tackling [Decision_Matrix](../return_recrtions/)*

[![Back to Main](https://img.shields.io/badge/←_Back_to_Main-4CAF50?style=for-the-badge)](../../)
[![View Decision_Matrix](https://img.shields.io/badge/View_Return_Recursions_→-2196F3?style=for-the-badge)](../return_recrtions/)

</div>
