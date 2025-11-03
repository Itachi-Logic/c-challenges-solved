# Recursion Exercises

*Practice Recursive Programming Techniques*

---

## 📚 Exercise Subjects

### Exercise 1: `put_nnumber`

**Objective:** Print numbers from 0 to N using recursion

**Description:**
Write a program that takes a positive integer as argument and displays all numbers from 0 to N separated by " > ".

**Prototype:**
```c
void recrtion(int n);
```

**Requirements:**
- The program must take exactly one argument
- The argument must be a positive integer
- Use recursion to solve the problem
- Numbers must be separated by " > "
- Print a newline at the end

**Examples:**
```bash
$> ./put_nnumber 5
0 > 1 > 2 > 3 > 4 > 5
$>

$> ./put_nnumber 10
0 > 1 > 2 > 3 > 4 > 5 > 6 > 7 > 8 > 9 > 10
$>

$> ./put_nnumber 0
0
$>
```

---

### Exercise 2: `put_revn_number`

**Objective:** Print numbers from N to 0 in reverse order using recursion

**Description:**
Write a program that takes a positive integer as argument and displays all numbers from N to 0 in descending order, separated by " > ".

**Prototype:**
```c
void put_revn_number(int n);
```

**Requirements:**
- The program must take exactly one argument
- The argument must be a positive integer
- Use recursion to solve the problem
- Numbers must be separated by " > "
- Print a newline at the end

**Examples:**
```bash
$> ./put_revn_number 5
5 > 4 > 3 > 2 > 1 > 0
$>

$> ./put_revn_number 10
10 > 9 > 8 > 7 > 6 > 5 > 4 > 3 > 2 > 1 > 0
$>

$> ./put_revn_number 0
0
$>
```

---

### Exercise 3: `put_alpha`

**Objective:** Print alphabet from starting letter to 'z' (or 'Z') using recursion

**Description:**
Write a program that takes exactly one character as argument ('a' or 'A') and displays the alphabet from that character to 'z' (or 'Z' for uppercase), separated by " > ".

**Prototype:**
```c
void put_alpha(char c);
```

**Requirements:**
- The program must take exactly one argument
- The argument must be either 'a' (for lowercase) or 'A' (for uppercase)
- The argument must be a single character
- Use recursion to solve the problem
- Letters must be separated by " > "
- The last letter ('z' or 'Z') should have " > " before it
- Print a newline at the end
- Display error message for invalid input

**Examples:**
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

---

### Exercise 4: `put_rev_alpha`

**Objective:** Print alphabet from 'z' (or 'Z') to starting letter in reverse using recursion

**Description:**
Write a program that takes exactly one character as argument ('a' or 'A') and displays the alphabet from 'z' (or 'Z' for uppercase) down to the starting character in reverse order, separated by " > ".

**Prototype:**
```c
void put_rev_alpha(char c);
```

**Requirements:**
- The program must take exactly one argument
- The argument must be either 'a' (for lowercase) or 'A' (for uppercase)
- The argument must be a single character
- Use recursion to solve the problem
- Letters must be separated by " > "
- The first letter ('z' or 'Z') should not have " > " before it
- Print a newline at the end
- Display error message for invalid input

**Examples:**
```bash
$> ./put_rev_alpha a
z > y > x > w > v > u > t > s > r > q > p > o > n > m > l > k > j > i > h > g > f > e > d > c > b > a
$>

$> ./put_rev_alpha A
Z > Y > X > W > V > U > T > S > R > Q > P > O > N > M > L > K > J > I > H > G > F > E > D > C > B > A
$>

$> ./put_rev_alpha b
Please enter a for lowercase alpha or A for uppercase alpha
$>

$> ./put_rev_alpha
Please enter a for lowercase alpha or A for uppercase alpha
$>
```

---

## 🎯 Learning Objectives

These exercises help you understand:
- **Recursion fundamentals** - How functions can call themselves
- **Base cases** - When to stop the recursion
- **Recursive cases** - How to break down the problem
- **Stack management** - Understanding call stack behavior
- **Order of operations** - Print before or after recursive call

## 💡 Key Concepts

### What is Recursion?

Recursion is when a function calls itself to solve a smaller instance of the same problem.

**Basic Structure:**
```c
void recursive_function(parameters)
{
    if (base_case)
        return; // Stop recursion
    
    // Do something
    recursive_function(modified_parameters); // Recursive call
    // Do something else (optional)
}
```

### Recursion vs Iteration

| Aspect | Recursion | Iteration |
|:-------|:----------|:----------|
| **Code** | Often cleaner | Can be more verbose |
| **Memory** | Uses call stack | Uses less memory |
| **Performance** | Slower (function calls) | Faster |
| **Best for** | Tree-like problems | Simple loops |

---

## 🛠️ Compilation

```bash
gcc -Wall -Wextra -Werror exercise.c -o exercise
```

## 📝 Testing Tips

1. **Test base cases** - What happens with 0, 1?
2. **Test normal cases** - Try various inputs
3. **Test boundaries** - Large numbers, edge cases
4. **Check output format** - Separators, newlines
5. **Verify recursion** - Make sure you're not using loops

---

## ⚠️ Common Pitfalls

1. **Missing base case** - Infinite recursion (stack overflow)
2. **Wrong base case** - Recursion doesn't stop correctly
3. **Incorrect order** - Print before vs after recursive call
4. **Stack overflow** - Too many recursive calls with large inputs

---

## 📚 Additional Resources

- [Recursion in C](https://en.wikipedia.org/wiki/Recursion_(computer_science))
- [Understanding the Call Stack](https://en.wikipedia.org/wiki/Call_stack)
- [Recursive Algorithms](https://www.geeksforgeeks.org/recursion/)

---

*Practice makes perfect! Master these exercises to understand recursion deeply.*
