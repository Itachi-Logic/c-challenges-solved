# Mathematical Recursion Exercises

*Recursive Solutions for Mathematical Problems*

---

## 📚 Exercise Subjects

### Exercise 1: `ft_factorial`

**Objective:** Calculate the factorial of a number using recursion

**Description:**
Write a program that takes a positive integer as argument and calculates its factorial using recursion. The factorial of a number n (written as n!) is the product of all positive integers less than or equal to n.

**Prototype:**
```c
int ft_factorial(int n);
```

**Mathematical Definition:**
```
n! = n × (n-1) × (n-2) × ... × 2 × 1
0! = 1
```

**Requirements:**
- The program must take exactly one argument
- The argument must be a non-negative integer
- Use recursion to solve the problem
- Return 1 for n = 0 or negative numbers
- Display the result with a clear message

**Examples:**
```bash
$> ./ft_factorial 5
factorial 5 is: 120
$>

$> ./ft_factorial 0
factorial 0 is: 1
$>

$> ./ft_factorial 10
factorial 10 is: 3628800
$>

$> ./ft_factorial 3
factorial 3 is: 6
$>
```

**Note:** Be careful with large numbers as factorials grow very quickly and may cause integer overflow.

---

### Exercise 2: `ft_power`

**Objective:** Calculate base raised to the power of exponent using recursion

**Description:**
Write a program that takes two integers as arguments (base and exponent) and calculates base^exponent using recursion.

**Prototype:**
```c
long ft_power(int base, int exp);
```

**Mathematical Definition:**
```
base^exp = base × base^(exp-1)
base^0 = 1
base^1 = base
```

**Requirements:**
- The program must take exactly two arguments
- First argument: base (any integer)
- Second argument: exponent (non-negative integer)
- Use recursion to solve the problem
- Return 1 for exp = 0 or negative exponents
- Use `long` return type to handle larger results
- Display the result with a clear message

**Examples:**
```bash
$> ./ft_power 2 5
2 power 5 is: 32
$>

$> ./ft_power 5 3
5 power 3 is: 125
$>

$> ./ft_power 10 0
10 power 0 is: 1
$>

$> ./ft_power 3 4
3 power 4 is: 81
$>

$> ./ft_power -2 3
-2 power 3 is: -8
$>
```

**Note:** This implementation treats exponent 0 and negative exponents as returning 1.

---

### Exercise 3: `ft_sum_array`

**Objective:** Calculate the sum of all elements in an array using recursion

**Description:**
Write a program that takes multiple integers as command-line arguments, stores them in a dynamically allocated array, and calculates the sum of all elements using recursion.

**Prototype:**
```c
int ft_sum_array(int *arr, int size);
```

**Algorithm:**
```
sum_array(arr, size) = arr[size-1] + sum_array(arr, size-1)
sum_array(arr, 0) = 0  (base case)
```

**Requirements:**
- The program must take at least one argument
- All arguments are integers to be summed
- Dynamically allocate memory for the array
- Use recursion to calculate the sum
- Process array from the end (size-1) backwards
- Display the array and its sum
- Free allocated memory before exiting
- Handle malloc failure

**Examples:**
```bash
$> ./ft_sum_array 1 2 3 4 5
Array is: [1, 2, 3, 4, 5]
Sum of array is: 15
$>

$> ./ft_sum_array 10 20 30
Array is: [10, 20, 30]
Sum of array is: 60
$>

$> ./ft_sum_array 5
Array is: [5]
Sum of array is: 5
$>

$> ./ft_sum_array -5 10 -3 8
Array is: [-5, 10, -3, 8]
Sum of array is: 10
$>

$> ./ft_sum_array
Usage: ./a.out <num1> <num2> ...
$>
```

**Note:** This exercise combines recursion with dynamic memory allocation.

---

## 🎯 Learning Objectives

These exercises teach you:
- **Mathematical recursion** - Solving mathematical problems recursively
- **Base cases** - Identifying when to stop recursion
- **Recursive reduction** - Breaking problems into smaller subproblems
- **Memory management** - Using malloc/free with recursion
- **Type considerations** - Using appropriate data types (int vs long)

## 💡 Key Concepts

### Factorial

The factorial function is one of the classic examples of recursion:
```
5! = 5 × 4 × 3 × 2 × 1 = 120
```

**Recursive Thinking:**
```
5! = 5 × 4!
4! = 4 × 3!
3! = 3 × 2!
2! = 2 × 1!
1! = 1 × 0!
0! = 1  (base case)
```

### Power Function

Exponentiation can be elegantly expressed with recursion:
```
2^5 = 2 × 2^4
2^4 = 2 × 2^3
2^3 = 2 × 2^2
2^2 = 2 × 2^1
2^1 = 2 × 2^0
2^0 = 1  (base case)
```

### Array Sum

Summing array elements recursively:
```
sum([1,2,3,4,5]) = 5 + sum([1,2,3,4])
sum([1,2,3,4]) = 4 + sum([1,2,3])
sum([1,2,3]) = 3 + sum([1,2])
sum([1,2]) = 2 + sum([1])
sum([1]) = 1 + sum([])
sum([]) = 0  (base case)
```

---

## 📊 Complexity Analysis

| Exercise | Time Complexity | Space Complexity | Notes |
|:---------|:---------------:|:----------------:|:------|
| ft_factorial | O(n) | O(n) | n recursive calls on stack |
| ft_power | O(exp) | O(exp) | exp recursive calls |
| ft_sum_array | O(n) | O(n) | n is array size |

---

## 🛠️ Compilation

```bash
gcc -Wall -Wextra -Werror exercise.c -o exercise
```

## 📝 Testing Tips

### For ft_factorial:
- Test 0 (should return 1)
- Test 1 (should return 1)
- Test small numbers (2, 3, 4, 5)
- Test larger numbers (10, 12)
- Be aware: 13! = 6,227,020,800 may overflow int

### For ft_power:
- Test with exponent 0 (should return 1)
- Test with exponent 1 (should return base)
- Test positive base and exponent
- Test negative base with odd exponent
- Test negative base with even exponent

### For ft_sum_array:
- Test with single element
- Test with multiple positive numbers
- Test with negative numbers
- Test with mixed positive and negative
- Test with no arguments (usage message)
- Verify memory is freed (use valgrind)

---

## ⚠️ Common Pitfalls

1. **Integer Overflow**
   - Factorials grow extremely fast
   - Powers can exceed int range
   - Use appropriate data types (long, unsigned long)

2. **Memory Leaks**
   - In ft_sum_array, always free allocated memory
   - Check malloc return value

3. **Base Cases**
   - Factorial: n <= 0 returns 1
   - Power: exp <= 0 returns 1
   - Sum Array: size == 0 returns 0

4. **Stack Overflow**
   - Very large inputs cause deep recursion
   - May exceed stack size

---

## 🔍 Debugging Tips

```bash
# Check for memory leaks
valgrind ./ft_sum_array 1 2 3 4 5

# Test with edge cases
./ft_factorial 0
./ft_factorial 1
./ft_power 2 0
./ft_sum_array
```

---

## 📚 Additional Resources

- [Factorial](https://en.wikipedia.org/wiki/Factorial)
- [Exponentiation](https://en.wikipedia.org/wiki/Exponentiation)
- [Dynamic Memory Allocation](https://en.wikipedia.org/wiki/C_dynamic_memory_allocation)
- [Recursion Patterns](https://www.geeksforgeeks.org/recursion/)

---

*Master these mathematical recursion patterns - they form the foundation for more advanced algorithms!*
