<div align="center">

# 🧮 String Sorting Challenges

### *Master Sorting Algorithms Through Practical Exercises*

[![Challenges](https://img.shields.io/badge/Challenges-5-important?style=for-the-badge&logo=c&logoColor=white)](.)
[![Difficulty](https://img.shields.io/badge/Difficulty-Intermediate-FF9800?style=for-the-badge)](.)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](.)
[![Time Required](https://img.shields.io/badge/Time~Required-3~hours-blue?style=for-the-badge)](.)

---

**A series of progressively challenging string sorting exercises**  
*Part of [c-challenges-solved](../../) repository*

[Overview](#-overview) • [Challenges](#-challenges) • [Compilation](#%EF%B8%8F-compilation) • [Testing](#-testing)

</div>

---

## 📋 Overview

This module presents **five carefully designed challenges** to master string sorting algorithms in C. Each challenge builds upon the previous one, guiding you from basic concepts to optimized implementations.

### 🎯 What You'll Practice

```mermaid
graph LR
    A[String Comparison] --> B[Basic Bubble Sort]
    B --> C[Optimized Sorting]
    C --> D[Advanced Algorithms]
    style A fill:#4CAF50
    style B fill:#2196F3
    style C fill:#FF9800
    style D fill:#9C27B0
```

| Skill Level | Challenges | Focus Area |
|:------------|:-----------|:-----------|
| **Beginner** | 1, 2 | Fundamentals, basic algorithms |
| **Intermediate** | 3, 4 | Optimization, efficiency |
| **Advanced** | 5 | Complex data structures |

---

## 📚 Challenges

### 🔢 Challenge 1: `ft_strcmp`

> Implement a string comparison function from scratch

**Objective:** Create a function that compares two strings lexicographically.

```c
int ft_strcmp(char *s1, char *s2);
```

**Requirements:**
- ✅ Return negative value if s1 < s2
- ✅ Return 0 if s1 == s2  
- ✅ Return positive value if s1 > s2
- ✅ Handle empty strings correctly
- ✅ Compare characters as unsigned values
- ✅ **Do not** use standard library functions

**Test Cases to Consider:**
```bash
"apple" vs "banana"    # Should return negative
"hello" vs "hello"     # Should return 0
"zebra" vs "apple"     # Should return positive
"" vs ""              # Should return 0
"abc" vs "abcd"       # Should return negative
```

**Key Learning:** Understand character-by-character comparison and ASCII values.

---

### 🔄 Challenge 2: `sort_string_classic`

> Implement classic bubble sort for strings

**Objective:** Sort a character array (string) in ascending order using bubble sort.

```c
void sort_string_classic(char *str);
```

**Requirements:**
- ✅ Sort characters in ascending ASCII order
- ✅ Implement standard bubble sort algorithm
- ✅ Handle NULL pointer gracefully
- ✅ Leave empty strings unchanged
- ✅ Sort in-place (modify the original string)
- ✅ Use your `ft_strcmp` function
- ✅ **Do not** use standard sorting functions

**Example Input/Output:**
```c
char str[] = "421337";
sort_string_classic(str);
// str should now be "123347"
```

**Algorithm Hint:**
```
For i from 0 to length-2:
    For j from 0 to length-i-2:
        If str[j] > str[j+1]:
            Swap str[j] and str[j+1]
```

---

### 🔤 Challenge 3: `sort_string_optimized`

> Optimize bubble sort with early termination

**Objective:** Improve the bubble sort algorithm to stop early when no swaps occur.

```c
void sort_string_optimized(char *str);
```

**Requirements:**
- ✅ Same functionality as Challenge 2
- ✅ Add early termination when array is sorted
- ✅ Maintain in-place sorting
- ✅ Use swap counter or flag variable
- ✅ Handle already-sorted strings efficiently
- ✅ Test with partially sorted data

**Optimization Hint:**
```
Initialize swapped = true
While swapped is true:
    Set swapped = false
    For each pair in string:
        If out of order:
            Swap them
            Set swapped = true
```

**Performance Consideration:** What's the best-case time complexity now?

---

### 🔁 Challenge 4: `sort_string_window`

> Implement optimized bubble sort with shrinking window

**Objective:** Further optimize bubble sort by reducing the comparison window each iteration.

```c
void sort_string_window(char *str);
```

**Requirements:**
- ✅ Same functionality as previous challenges
- ✅ Reduce inner loop range each pass
- ✅ Last i elements are already sorted after i passes
- ✅ Implement without early termination first
- ✅ Then combine with early termination
- ✅ Document time complexity improvements

**Algorithm Insight:**
```
After first pass: largest element at end
After second pass: two largest elements at end
Thus: inner loop can shrink by 1 each iteration
```

**Challenge:** Compare performance with previous implementations using various test cases.

---

### 🗂️ Challenge 5: `ft_sort_string_tab`

> Sort an array of strings

**Objective:** Sort an array of strings (char**) in ascending lexicographic order.

```c
void ft_sort_string_tab(char **tab);
```

**Requirements:**
- ✅ Sort array of strings (not characters)
- ✅ Each string ends with NULL character
- ✅ Array ends with NULL pointer
- ✅ Use your `ft_strcmp` function
- ✅ Implement any sorting algorithm (bubble, selection, etc.)
- ✅ Sort in-place (rearrange pointers, not copy strings)
- ✅ Handle empty arrays gracefully

**Example:**
```c
char *tab[] = {"banana", "apple", "cherry", NULL};
ft_sort_string_tab(tab);
// tab should now be: {"apple", "banana", "cherry", NULL}
```

**Advanced Considerations:**
- Which sorting algorithm is most appropriate?
- How to handle duplicate strings?
- What about case-sensitive vs case-insensitive sorting?

---

## 🛠️ Compilation Guidelines

### For Each Challenge
Create a separate `.c` file for each challenge. Test with a main function:

```c
// Example test for Challenge 1
int main(void)
{
    printf("Compare 'apple' and 'banana': %d\n", ft_strcmp("apple", "banana"));
    printf("Compare 'hello' and 'hello': %d\n", ft_strcmp("hello", "hello"));
    return 0;
}
```

### Compilation Command
```bash
gcc -Wall -Wextra -Werror challenge_name.c -o challenge_name
```

### Recommended Structure
```
string_sorting_algorithm/
├── ft_strcmp.c          # Challenge 1
├── sort_string_classic.c    # Challenge 2
├── sort_string_optimized.c  # Challenge 3
├── sort_string_window.c     # Challenge 4
├── ft_sort_string_tab.c     # Challenge 5
└── README.md
```

---

## 🧪 Testing Your Solutions

### Basic Test Suite
```bash
# Test 1: String Comparison
./test_strcmp

# Test 2: Single String Sorting
./test_sort_string

# Test 3: String Array Sorting  
./test_sort_string_tab
```

### Edge Cases to Test
```bash
# Empty strings
# NULL pointers
# Single character strings
# Already sorted strings
# Reverse sorted strings
# Strings with special characters
# Very long strings (if possible)
```

### Validation Script Example
```bash
#!/bin/bash
echo "Testing ft_strcmp..."
echo "Test 1: 'a' vs 'b'" 
./test_strcmp "a" "b"
echo "Expected: negative value"
```

---

## 📊 Algorithm Analysis

### Understanding Complexity
For each challenge, analyze:

| Challenge | Best Case | Worst Case | Space Complexity |
|:----------|:----------|:-----------|:-----------------|
| 1: ft_strcmp | O(1) | O(n) | O(1) |
| 2: Classic Bubble Sort | O(n²) | O(n²) | O(1) |
| 3: Optimized Bubble Sort | O(n) | O(n²) | O(1) |
| 4: Window Optimization | O(n) | O(n²) | O(1) |
| 5: Array Sorting | Depends on algorithm chosen | | |

**Question:** Why does optimized bubble sort have O(n) best case?

---

## ⚠️ Common Pitfalls to Avoid

### 🔴 Memory Management Issues
```c
// Wrong: Modifying string literals
char *str = "hello";  // String literal - read only!
sort_string(str);     // ❌ Will cause segmentation fault

// Right: Use array
char str[] = "hello"; // Array - can be modified
sort_string(str);     // ✅ Works correctly
```

### 🔴 Off-by-One Errors
```c
// Common mistake in loop boundaries
for (int i = 0; i <= len; i++)  // ❌ Accesses str[len] (null terminator)
for (int i = 0; i < len; i++)   // ✅ Correct
```

### 🔴 Ignoring Edge Cases
```c
void sort_string(char *str)
{
    // ❌ Missing NULL check
    int len = strlen(str);  // Crashes if str is NULL
    
    // ✅ Always check inputs
    if (!str) return;
}
```

### 🔴 Inefficient Algorithms
```c
// ❌ O(n³) naive approach
for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
        for (k = 0; k < n; k++)
            // Too many comparisons!
```

---

## 💡 Learning Strategies

### ✨ Progressive Implementation
1. **First**: Make it work (correctness)
2. **Then**: Make it right (clean code)
3. **Finally**: Make it fast (optimization)

### 🎯 Debugging Tips
```c
// Add debug prints to understand flow
void sort_string_debug(char *str)
{
    printf("Starting to sort: %s\n", str);
    // ... sorting logic ...
    printf("Intermediate state: %s\n", str);
    // ... more logic ...
    printf("Final result: %s\n", str);
}
```

### 📝 Implementation Checklist
For each challenge, verify:
- [ ] Compiles without warnings
- [ ] Handles all edge cases
- [ ] Follows C coding standards
- [ ] Includes necessary comments
- [ ] Passes your test cases
- [ ] Memory safe (no leaks, no invalid access)

---

## 📈 Recommended Progression

```
Start Here          Build Foundation      Master Optimization
    ↓                      ↓                        ↓
Challenge 1    →    Challenge 2     →    Challenge 3 & 4
(String Comparison) (Basic Sorting)     (Advanced Sorting)
    ↓
Challenge 5
(Array Sorting)
```

**Weekly Schedule Suggestion:**
- **Day 1-2**: Complete Challenges 1 & 2
- **Day 3-4**: Complete Challenges 3 & 4  
- **Day 5-6**: Complete Challenge 5
- **Day 7**: Review, optimize, and document

---

## 🔗 Related Challenges

### In This Repository
- [Array Sorting](../array_sorting/) - Sorting numerical arrays
- [String Manipulation](../string_manipulation/) - Other string operations
- [Algorithm Fundamentals](../../algorithm_basics/) - Big O, data structures
- [Memory Management](../memory_management/) - Pointers and dynamic allocation

### Skill Connections
| Current Skill | Connected To |
|:--------------|:-------------|
| String comparison | Search algorithms, parsing |
| Bubble sort | Other O(n²) sorts (selection, insertion) |
| Optimization techniques | All algorithm design |
| Pointer arrays | Linked lists, trees |

---

## 🎓 Success Metrics

### Completion Checklist
- [ ] All 5 challenges implemented
- [ ] Each function passes basic tests
- [ ] Code follows consistent style
- [ ] Memory safe (no valgrind errors)
- [ ] Understanding of time/space complexity
- [ ] Can explain algorithm choices

### Knowledge Verification
Can you answer these questions?
1. What's the difference between comparing strings and comparing characters?
2. Why does bubble sort have O(n²) worst-case complexity?
3. How does early termination improve bubble sort?
4. What are the trade-offs between different sorting algorithms?
5. How would you sort strings case-insensitively?

---

<div align="center">

### 🏆 Challenge Accepted?

Ready to master string sorting algorithms? Start with Challenge 1 and work your way up!

**Remember:** The goal isn't just to write code, but to understand why it works and how to make it better.

---

### 📫 Need Help or Want to Contribute?

- 🤔 **Stuck on a challenge?** Try breaking it down into smaller steps
- 🔍 **Found a bug?** Report it in the issues section
- 💡 **Have a better challenge idea?** We'd love to hear it!
- ⭐ **Enjoying the challenges?** Star the repository!

---

**Become a String Sorting Expert – One Challenge at a Time**

*Build strong fundamentals for advanced algorithm study*

[![Back to Main](https://img.shields.io/badge/←_Back_to_Main-4CAF50?style=for-the-badge)](../../)
[![Start Challenge 1](https://img.shields.io/badge/Start_Challenge_1_→-2196F3?style=for-the-badge)](#-challenges)

</div>
