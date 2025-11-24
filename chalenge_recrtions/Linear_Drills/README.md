<div align="center">

# 🏃 Linear Drills

### *Fundamental Recursive Flow Control & Stack Visualization*

[![Exercises](https://img.shields.io/badge/Exercises-4-success?style=for-the-badge&logo=c&logoColor=white)](.)
[![Difficulty](https://img.shields.io/badge/Difficulty-Beginner-green?style=for-the-badge)](.)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](.)
[![Norminette](https://img.shields.io/badge/Norminette-Passing-success?style=for-the-badge)](.)

---

**Master the stack frame: Pre-order vs Post-order recursive execution** *Part of [c-challenges-solved](../../) repository*

[Overview](#-overview) • [Exercises](#-exercises) • [Compilation](#%EF%B8%8F-compilation) • [Testing](#-testing)

</div>

---

## 📋 Overview

**Linear Drills** focuses on the most fundamental building blocks of recursion: void functions and linear stack depth. These exercises demonstrate how the placement of the "action" (printf) relative to the "recursive call" completely changes the output order, effectively using the system stack as a storage buffer.

### 🎯 What You'll Learn

```mermaid
graph TD
    A[Function Call] --> B{Base Case Reached?}
    B -- Yes --> C[Return]
    B -- No --> D[Recursive Step]
    
    subgraph "Pre-Order (Winding)"
    E[Print BEFORE Call]
    end
    
    subgraph "Post-Order (Unwinding)"
    F[Print AFTER Call]
    end
    
    D -.-> E
    D -.-> F
    style A fill:#4CAF50
    style B fill:#FF9800
    style E fill:#2196F3
    style F fill:#9C27B0
````

| Category | Exercises | Complexity | Focus |
|:---------|:----------|:----------:|:------|
| **Stack Unwinding** | `put_n_number` | O(n) | Post-order (Print on return) |
| **Direct Descent** | `put_revn_number` | O(n) | Pre-order (Print on call) |
| **Alpha Traversal** | `put_alpha` | O(26) | Linear Iteration |
| **Reverse Alpha** | `put_rev_alpha` | O(26) | Stack Reversal |

-----

## 📚 Exercises

### 🔢 Exercise 1: `put_n_number`

> Count upwards using a decrementing recursive input

```c
void recrtion(int n); // Logic inside put_n_number.c
```

**Concept:** This uses **Post-order traversal**.
The function calls itself *before* printing. This builds the stack all the way down to 0, hits the base case, and then prints 0, 1, 2... as the stack frames pop (unwind).

\<details\>
\<summary\>📖 View Examples\</summary\>

```bash
$> ./put_n_number 5
0 > 1 > 2 > 3 > 4 > 5
$>
$> ./put_n_number 0
0
$>
```

\</details\>

**Requirements:**

  - ✅ Take exactly **one integer argument**
  - ✅ Recursion decreases `n`
  - ✅ Print happens **after** the recursive call
  - ✅ Resulting output is **Ascending** (0 to N)

**Decision Pattern:** Stack Unwinding (Last-In-First-Out behavior)

-----

### 🔙 Exercise 2: `put_revn_number`

> Count downwards using a decrementing recursive input

```c
void put_revn_number(int n);
```

**Concept:** This uses **Pre-order traversal**.
The function prints *before* calling itself. The action happens immediately at each step of the descent.

\<details\>
\<summary\>📖 View Examples\</summary\>

```bash
$> ./put_revn_number 5
5 > 4 > 3 > 2 > 1 > 0
$>
$> ./put_revn_number 1
1 > 0
$>
```

\</details\>

**Requirements:**

  - ✅ Take exactly **one integer argument**
  - ✅ Print happens **before** the recursive call
  - ✅ Resulting output is **Descending** (N to 0)

**Decision Pattern:** Direct Linear Recursion

-----

### 🔤 Exercise 3: `put_alpha`

> Print alphabet A-Z recursively

```c
void put_alpha(char c);
```

**Concept:** Linear traversal. We start at 'a', print it, and pass 'a' + 1 to the next call.

\<details\>
\<summary\>📖 View Examples\</summary\>

```bash
$> ./put_alpha a
a > b > c > ... > z
$>
$> ./put_alpha A
A > B > C > ... > Z
$>
```

\</details\>

**Requirements:**

  - ✅ Accept 'a' or 'A' as start
  - ✅ Base case at 'z' or 'Z'
  - ✅ Print arrows `>` between chars
  - ✅ Newline at the end

**Decision Pattern:** State passing (passing modified state `c+1` forward)

-----

### 🔠 Exercise 4: `put_rev_alpha`

> Print alphabet Z-A recursively starting from 'a'

```c
void put_rev_alpha(char c);
```

**Concept:** This is a "Stack Reversal".
We pass 'a' + 1 all the way down to 'z'. We print nothing until we hit 'z'. Then, as we return from each function call, we print the character stored in that stack frame.

\<details\>
\<summary\>📖 View Examples\</summary\>

```bash
$> ./put_rev_alpha a
z > y > x > ... > a
$>
```

\</details\>

**Requirements:**

  - ✅ Input is 'a' (start of alphabet)
  - ✅ Logic traverses to end *silently*
  - ✅ Printing happens on the return path
  - ✅ Output is **Reverse Alphabet**

**Decision Pattern:** Delayed Execution (Post-order)

-----

## 🛠️ Compilation

### Individual Exercise

```bash
gcc -Wall -Wextra -Werror put_n_number.c -o put_n_number
```

### All Exercises

```bash
# Quick compile script
gcc -Wall -Wextra -Werror put_n_number.c -o put_n_number
gcc -Wall -Wextra -Werror put_revn_number.c -o put_revn_number
gcc -Wall -Wextra -Werror put_alpha.c -o put_alpha
gcc -Wall -Wextra -Werror put_rev_alpha.c -o put_rev_alpha
```

-----

## 🧪 Testing

### Numeric Drills

```bash
# Ascending (via Stack Unwinding)
./put_n_number 10
./put_n_number 3

# Descending (via Direct Recursion)
./put_revn_number 10
./put_revn_number 0
```

### Alphabet Drills

```bash
# Forward
./put_alpha a
./put_alpha A

# Reverse (Implicit)
./put_rev_alpha a
./put_rev_alpha A
```

### Error Handling

```bash
# Check argument protection
./put_n_number
./put_alpha b
./put_alpha aa
```

-----

## 📊 Complexity Analysis

| Exercise | Time | Space (Stack) | Output | Logic Type |
|:---------|:----:|:-------------:|:------:|:-----------|
| `put_n_number` | O(n) | O(n) | 0 → N | Post-Order |
| `put_revn_number` | O(n) | O(n) | N → 0 | Pre-Order |
| `put_alpha` | O(1)\* | O(1)\* | a → z | Pre-Order |
| `put_rev_alpha` | O(1)\* | O(1)\* | z → a | Post-Order |

*\* Note: Alpha complexity is O(1) constant because max depth is fixed at 26 chars.*

-----

## 🎓 Patterns Explained

### 1️⃣ Pre-Order (Winding)

**Pattern:** Do work -\> Recurse

```c
printf("%d", n);    // 1. Work
recurse(n - 1);     // 2. Call
```

**Effect:** Things happen in the "natural" order you call them. Used in `put_revn_number` and `put_alpha`.

-----

### 2️⃣ Post-Order (Unwinding)

**Pattern:** Recurse -\> Do work

```c
recurse(n - 1);     // 1. Call (pushes to stack)
printf("%d", n);    // 2. Work (on return)
```

**Effect:** Things happen in **reverse** order. The first call finishes last. Used in `put_n_number` and `put_rev_alpha`.

-----

## ⚠️ Common Pitfalls

### 🔴 Infinite Recursion (Segfault)

```c
void f(int n) {
    printf("%d", n);
    f(n + 1); // ❌ No base case check!
}
```

### 🔴 Post/Pre Confusion

Thinking `put_n_number` will print `5 4 3...` because you passed `5`.
*Reality:* Because the print is *after* the call, it waits for `0` to return before printing `1`.

### 🔴 Pointer Arithmetic vs Value

Passing `i++` vs `i + 1` in recursion arguments.
*Correct:* `f(i + 1)` (Passes next value, keeps current `i` intact for this frame).

-----

\<div align="center"\>

### 📫 Need Help?

If you find any issues or have suggestions:

  - 🐛 [suspicious link removed]
  - ⭐ [suspicious link removed]

-----

**Made with ❤️ for mastering the stack**

*Next Step: Advanced Decision Making*

[suspicious link removed]
[](https://www.google.com/search?q=../Decision_Matrix/)

\</div\>
```
```
