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
  <img src="https://img.shields.io/badge/Exercises-41+-orange?style=flat-square" alt="Exercises"/>
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
║  🎯 LEARNING OBJECTIVES                                                       ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Using write() system call for output                                      ║
║  ✦ Understanding while loops and iteration                                   ║
║  ✦ Conditional statements (if/else)                                          ║
║  ✦ ASCII table and character manipulation                                    ║
║  ✦ Nested loops for generating combinations                                  ║
║  ✦ Handling edge cases (INT_MIN, INT_MAX)                                    ║
║  ✦ Introduction to recursion                                                 ║
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

**How it works:** The `write()` function outputs bytes to a file descriptor.

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	/* 
	 * 1   = file descriptor (stdout)
	 * &c  = address of the character
	 * 1   = number of bytes to write
	 */
}
```

**💡 Key insight:** `&c` gives the memory address of variable `c`. The `write()` function needs an address, not the value directly.

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

**How it works:** Characters are just numbers! `'a'` = 97, `'z'` = 122. You can increment them!

```c
void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;  /* 'a' becomes 'b', 'b' becomes 'c', etc. */
	}
}
```

**💡 Key insight:** In C, `char` is just a small integer. `i++` increases its ASCII value by 1.

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

**How it works:** Same logic, but start from 'z' and decrement.

```c
void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;  /* 'z' becomes 'y', 'y' becomes 'x', etc. */
	}
}
```

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

**How it works:** `'0'` is ASCII 48, not the number 0!

```c
void	ft_print_numbers(void)
{
	char	c;

	c = '0';       /* ASCII 48, the CHARACTER zero */
	while (c <= '9')  /* ASCII 57, the CHARACTER nine */
	{
		ft_putchar(c);
		c++;
	}
}
```

**💡 Key insight:** `'0'` ≠ `0`. The character '0' has ASCII value 48.

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

```c
void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
```

**⚠️ Note:** Zero is considered positive here (prints 'P').

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

**How it works:** Use 3 nested loops ensuring `num0 < num1 < num2`.

```c
void	ft_print_comb(void)
{
	int	num0;
	int	num1;
	int	num2;

	num0 = 0;
	while (num0 <= 7)  /* First digit: 0-7 */
	{
		num1 = num0 + 1;
		while (num1 <= 8)  /* Second digit: always > first */
		{
			num2 = num1 + 1;
			while (num2 <= 9)  /* Third digit: always > second */
			{
				ft_putchar(num0 + 48);  /* Convert int to char */
				ft_putchar(num1 + 48);
				ft_putchar(num2 + 48);
				if (num0 != 7)
					write(1, ", ", 2);
				num2++;
			}
			num1++;
		}
		num0++;
	}
}
```

**💡 Key insight:** `num + 48` or `num + '0'` converts a digit (0-9) to its character representation ('0'-'9').

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

**How it works:** Use `/` and `%` to extract individual digits.

```c
void	ft_print_comb2(void)
{
	int	num98;
	int	num99;

	num98 = 0;
	while (num98 <= 98)
	{
		num99 = num98 + 1;
		while (num99 <= 99)
		{
			ft_putchar((num98 / 10) + 48);  /* Tens digit */
			ft_putchar((num98 % 10) + 48);  /* Ones digit */
			ft_putchar(' ');
			ft_putchar((num99 / 10) + 48);
			ft_putchar((num99 % 10) + 48);
			if (num98 != 98)
				write(1, ", ", 2);
			num99++;
		}
		num98++;
	}
}
```

**💡 Key insight:** `42 / 10 = 4` (tens), `42 % 10 = 2` (ones).

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

**How it works:** Use recursion to print digits from left to right.

```c
void	ft_putnbr(int nb)
{
	/* Special case: INT_MIN can't be negated! */
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	/* Handle negative numbers */
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	/* Recursion: print all digits except last first */
	if (nb > 9)
		ft_putnbr(nb / 10);
	/* Print the last digit */
	ft_putchar((nb % 10) + 48);
}
```

**💡 Key insight:** `-2147483648 * -1` overflows! That's why we handle it separately.

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

**How it works:** Recursively build combinations using backtracking.

```c
void	ft_generate_comb(int *comb, int n, int index, int value)
{
	int	i;

	if (index == n)  /* Base case: combination complete */
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(comb[i] + 48);
			i++;
		}
		if (!(comb[0] == 10 - n))  /* Not the last combination */
			write(1, ", ", 2);
		return ;
	}
	while (value < 10)  /* Try each digit from 'value' to 9 */
	{
		comb[index] = value;
		ft_generate_comb(comb, n, index + 1, value + 1);
		value++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (0 < n && n < 10)
		ft_generate_comb(comb, n, 0, 0);
}
```

**💡 Key insight:** `value + 1` ensures each subsequent digit is larger, creating ascending combinations.

</details>

---

# 📗 C01 — Pointers & Arrays

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                       ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Understanding pointers and memory addresses                               ║
║  ✦ Dereferencing with * operator                                             ║
║  ✦ Address-of with & operator                                                ║
║  ✦ Modifying variables through pointers                                      ║
║  ✦ Pointer arithmetic                                                        ║
║  ✦ Arrays and their relationship with pointers                               ║
║  ✦ Sorting algorithms (Bubble Sort)                                          ║
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

```c
void	ft_ft(int *nbr)
{
	*nbr = 42;  /* Dereference: access the value AT the address */
}

/* Usage in main:
   int x = 0;
   ft_ft(&x);  // Pass address of x
   // Now x == 42
*/
```

**💡 Key insight:** `*nbr = 42` means "put 42 at the address stored in nbr".

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

```c
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;  /* 9 asterisks to dereference 9 levels */
}
```

**💡 Key insight:** Each `*` dereferences one level. 9 pointer levels = 9 asterisks.

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

```c
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;   /* Save value of a */
	*a = *b;     /* Put b's value into a */
	*b = temp;   /* Put saved value into b */
}
```

**💡 Key insight:** Without `temp`, you'd lose one value when overwriting!

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

```c
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
```

**💡 Key insight:** C functions can only return one value, but pointers let you "return" multiple!

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

```c
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;       /* MUST save *a first! */
	*a = *a / *b;    /* Now *a is modified */
	*b = temp % *b;  /* Use saved value for modulo */
}
```

**⚠️ Warning:** If you don't use `temp`, the modulo calculation uses the already-modified `*a`!

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

```c
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])  /* Loop until null terminator '\0' */
	{
		ft_putchar(str[i]);
		i++;
	}
}
```

**💡 Key insight:** Strings in C end with `'\0'` (null terminator). The condition `str[i]` is false when `str[i] == '\0'`.

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

```c
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])  /* Count until null terminator */
		i++;
	return (i);
}
```

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

```c
void	ft_rev_int_tab(int *tab, int size)
{
	int	f;    /* Front pointer */
	int	l;    /* Last pointer */
	int	temp;

	f = 0;
	l = size - 1;
	while (f < size / 2)
	{
		/* Swap front and back elements */
		temp = tab[f];
		tab[f] = tab[l];
		tab[l] = temp;
		f++;
		l--;
	}
}
```

**💡 Key insight:** Two pointers moving toward each other, swapping elements they point to.

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

```c
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < (size - 1 - i))  /* Optimization: -i because largest bubbles up */
		{
			if (tab[j] > tab[j + 1])  /* Compare adjacent */
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
```

**💡 Key insight:** Bubble Sort repeatedly swaps adjacent elements if they're in wrong order. Largest "bubbles up" to the end.

</details>

---

# 📘 C02 — String Functions

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                       ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ String copying (safe and unsafe methods)                                  ║
║  ✦ Character classification (alpha, numeric, printable)                      ║
║  ✦ Case conversion (uppercase/lowercase)                                     ║
║  ✦ ASCII table mastery                                                       ║
║  ✦ Buffer safety and size limits                                             ║
║  ✦ Hexadecimal representation                                                ║
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

```c
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';  /* Don't forget null terminator! */
	return (dest);
}
```

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

```c
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)  /* Copy up to n chars */
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)  /* Pad remaining with '\0' */
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
```

**⚠️ Important:** If `src` is shorter than `n`, pad the rest of `dest` with `'\0'`.

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

**Pattern:** Return 1 if ALL chars pass, 0 if ANY fails, 1 for empty string.

```c
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		/* Check if NOT a letter */
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
```

**💡 ASCII Ranges:**
- `'A'` to `'Z'` = 65 to 90
- `'a'` to `'z'` = 97 to 122
- `'0'` to `'9'` = 48 to 57
- Printable = 32 to 126

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

```c
char	*ft_strupcase(char *str)
{
	char	*pointer;

	pointer = str;  /* Save original address to return */
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;  /* 'a' - 32 = 'A' */
		str++;
	}
	return (pointer);
}
```

**💡 Key insight:** The difference between 'a' and 'A' in ASCII is exactly 32.

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

```c
char	*ft_strlowcase(char *str)
{
	char	*pointer;

	pointer = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;  /* 'A' + 32 = 'a' */
		str++;
	}
	return (pointer);
}
```

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

```c
char	*ft_strcapitalize(char *str)
{
	int		flag;
	char	*pointer;

	flag = 1;  /* 1 = we're at start of a word */
	pointer = str;
	while (*str)
	{
		/* Convert to lowercase first */
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		/* If alphanumeric and start of word, capitalize */
		if (flag == 1 && *str >= 'a' && *str <= 'z')
			*str -= 32;
		/* Update flag: alphanumeric = in word, else = new word coming */
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')
			|| (*str >= '0' && *str <= '9'))
			flag = 0;
		else
			flag = 1;
		str++;
	}
	return (pointer);
}
```

**💡 Key insight:** Use a flag to track "are we at the start of a new word?"

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

```c
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
```

**💡 Key insight:** Always returns the length of src, even if truncated.

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

```c
void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = (unsigned char) str[i];  /* Must be unsigned! */
		if (c < 32 || c > 126)  /* Non-printable */
		{
			write(1, "\\", 1);
			write(1, &hex[c / 16], 1);  /* High nibble */
			write(1, &hex[c % 16], 1);  /* Low nibble */
		}
		else
			write(1, (str + i), 1);
		i++;
	}
}
```

**💡 Key insight:** Any byte `c` in hex is: `hex[c/16]` + `hex[c%16]`.

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

```c
void	ft_print_addr(unsigned long addr)
{
	char	*hex_digits;
	int		i;
	int		digit;

	hex_digits = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		digit = (addr >> (i * 4)) & 0xf;
		ft_putchar(hex_digits[digit]);
		i--;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	addrs;
	unsigned int	i;
	unsigned int	size_curr;

	i = 0;
	while (i < size)
	{
		addrs = (unsigned long) addr;
		size_curr = size - i;
		if (size_curr > 16)
			size_curr = 16;
		ft_print_addr(addrs + i);
		ft_puthex4((char *) addr + i, size_curr);
		ft_print_content((char *) addr + i, size_curr);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
```

**💡 Key insight:** Memory dump shows 16 bytes per line with address, hex, and ASCII.

</details>

---

# 📙 C03 — String Comparison

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                       ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Lexicographic string comparison                                           ║
║  ✦ String concatenation                                                      ║
║  ✦ Substring search algorithms                                               ║
║  ✦ Safe/bounded string operations                                            ║
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

```c
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
```

**💡 Key insight:** Cast to `unsigned char` for correct comparison of high ASCII values.

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

```c
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 1;
	while (*s1 && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}
```

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

```c
char	*ft_strcat(char *dest, char *src)
{
	int	end;

	end = 0;
	while (dest[end])
		end++;
	while (*src)
	{
		dest[end] = *src;
		src++;
		end++;
	}
	dest[end] = '\0';
	return (dest);
}
```

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

```c
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*buffer;

	if (nb == 0)
		return (dest);
	buffer = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (buffer);
}
```

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

```c
char	*ft_strstr(char *str, char *to_find)
{
	char	*idx_str;
	char	*idx_find;

	if (*to_find == '\0')  /* Empty needle */
		return (str);
	while (*str)
	{
		idx_str = str;
		idx_find = to_find;
		while (*idx_str == *idx_find && *idx_find)
		{
			idx_find++;
			idx_str++;
		}
		if (*idx_find == '\0')  /* Full match found! */
			return (str);
		str++;
	}
	return (0);  /* Not found */
}
```

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

```c
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	char			*end;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (size + len_s);
	dest += len_d;
	end = dest + (size - len_d - 1);
	while (*src && dest < end)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (len_d + len_s);
}
```

</details>

---

# 📓 C04 — Output Functions

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                       ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ String length calculation                                                 ║
║  ✦ String output to stdout                                                   ║
║  ✦ Integer to string conversion                                              ║
║  ✦ Number base conversion (atoi, atoi_base, putnbr_base)                     ║
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

```c
int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return ((int) i);
}
```

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

```c
int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return ((int) i);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}
```

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

```c
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}
```

</details>

---

# 📔 C05 — Recursion & Math

<div align="center">

```
╔═══════════════════════════════════════════════════════════════════════════╗
║  🎯 LEARNING OBJECTIVES                                                       ║
╠═══════════════════════════════════════════════════════════════════════════╣
║  ✦ Iteration vs Recursion                                                    ║
║  ✦ Factorial calculation                                                     ║
║  ✦ Power functions                                                           ║
║  ✦ Fibonacci sequence                                                        ║
║  ✦ Square root approximation                                                 ║
║  ✦ Prime number checking                                                     ║
║  ✦ Backtracking algorithms                                                   ║
║  ✦ The famous N-Queens puzzle!                                               ║
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

```c
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
```

**💡 Key insight:** 5! = 5 × 4 × 3 × 2 × 1 = 120

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

```c
int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	is_valid(int *board, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row)  /* Same row */
			return (0);
		if (ft_abs(board[i] - row) == ft_abs(i - col))  /* Diagonal */
			return (0);
		i++;
	}
	return (1);
}

int	solve_helper(int *board, int col)
{
	int	total_solutions;
	int	row;

	total_solutions = 0;
	if (col >= 10)  /* All queens placed! */
	{
		/* Print solution */
		return (1);
	}
	row = 0;
	while (row < 10)
	{
		if (is_valid(board, row, col))
		{
			board[col] = row;  /* Place queen */
			total_solutions += solve_helper(board, col + 1);
			board[col] = -1;  /* Backtrack */
		}
		row++;
	}
	return (total_solutions);
}
```

**💡 Key insight:** `board[col] = row` means "queen in column `col` is at row `row`". Diagonal check: if `|row1-row2| == |col1-col2|`, they're on same diagonal.

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
