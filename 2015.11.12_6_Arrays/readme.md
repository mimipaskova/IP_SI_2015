Задачи
=====================


*Масиви

### Задача 1: 
Напишете програма, която намира най-малкия елемент в масив.

Вход:
```
   5
   6 3 1 6 2
```

Изход:
```
    1
```

### Задача 2: Сума
Напишете програма, която извежда сумата на елементи в масив.


Вход:
```
   5
   6 3 1 6 2
```

Изход:
```
    18
```    

### Задача 3: Обърни
Напишете програма, която извежда числа от масив в обратен ред


Вход:
```
   5
   6 3 1 6 2
```

Изход:
```
    2 6 1 3 6
```    

### Задача 4: Среща ли се
Напишете програма, която извежда дали дадено число х се среща в масив. Въвеждаме дължина на масив и число, което искаме да проверим дали се среща.
1) Среща ли се?
2) Колко пъти се среща?

Вход:
```
   7
   5
   6 3 1 6 2 8 5
```

Изход:
```
    Среща се
```   


### Задача 5: Растяща ли е
Напишете програма, която извежда дали една редица е растяща(намаляваща).


Вход:
```
   6 3 1 6 
```

Изход:
```
    Не
```   

Вход:
```
   1 3 6 
```

Изход:
```
    Да
```  


### Задача 6: Скаларно произведение
Напишете програма, която извежда скаларното произведение на два масива..

Вход:
```
   4
   6 3 1 6
   1 2 3 1
```

Изход:
```
    21
```   

Hint: 6*1 + 3*2 + 1*3 + 6*1 = 21 ( Скаларно произведение)

### Задача 7: Палиндром
Напишете програма, която извежда дали едно число е палиндром.


Вход:
```
   6336
```

Изход:
```
    Да
```   

Вход:
```
   63366
```

Изход:
```
    Не
```   

### Задача 8: Сортирай
Напишете програма, която извежда сортирани числа от масив.


Вход:
```
   6 3 1 6 2
```

Изход:
```
    1 2 3 6 6
```    


### Задача 9: Най-дълга редица
Напишете програма, която извежда най-дългата ненамаляваща подредица.


Вход:
```
   6 3 1 6 
```

Изход:
```
    1 6
```   


### Задача 10: Binary
Напишете програма, която превръща дадено естествено число в двоична бройна система.

Вход:
```
    42
```

Изход:
```
    101010
``` 

### Задача 11: Буквииии
Напишете програма, която извежда следните букви.

Изход:
```
    A B C D E
    B C D E F
    C D E F G
    D E F G H
    E F G H I
```    

### Задача 12: Брой букви
Напишете програма, която намира и извежда на екрана броя на срещанията на всяка от буквите в масива.

Вход:
```
    abcssvsa
```

Изход:
```
    a 2
    b 1
    c 1
    s 3
    v 1
``` 


Bonus tasks

### Task 1 - Palindrome, return of the bits

Given a positive 64-bit integer, tell whether it's a palindrome in **base 2**.

**Input**

A single number `n` in the range [0; 2^64 - 1]

**Output**

`Yes` if `n` is a palindrome in base 2, `No` otherwise

**Example**

Input
```
‭7335‬
```

Output
```
Yes
```

Explanation: 7335 is 1110010100111 in binary. Since 1110010100111 is a palindrome, the program outputs `Yes`.

### Task 2 - Palindrome, the numbers strike back

This time instead of recognizing whether a number is palindrome,
your task is to generate all palindromes in base 10 in the range [0, `n`].

**Input**

A single number `n` that defines the range [0, `n`]

**Output**

All palindromes in base 10 in the range [0, `n`].

**Example**

Input

```
120
```

Output

```
1
2
3
4
5
6
7
8
9
11
22
33
44
55
66
77
88
99
101
111
```

### Task 3 - Unique number

You'll be given a list of numbers, all but one of which are repeated at least once.
This means that exactly one number does not repeat. Your task is to find it.

**Input**

On the first line of the standard input, the number of numbers `n` will be entered.
On the next line, exactly `n` numbers will be given such that all but on are repeated at least once.

**Output**

The one and only unique number.

**Example**

Input
```
11
1 1 2 2 3 3 4 4 5 5 6
```

```
Output
6
