<h1>0x01. C - Variables, if, else, while<h1>

<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors: vi, vim, emacs</li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -        Werror -Wextra -pedantic -std=gnu89
    </li>
    <li>
        All your files should end with a new line
    </li>
    <li>
        A README.md file, at the root of the folder of this project
    </li>
    <li>
        There should be no errors and no warnings during compilation
     </li>
    <li>
        You are not allowed to use system
     </li>
    <li>
        Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
     </li>
</ul>

<h2>Tasks</h2>
  <h3>0. Positive anything is better than negative nothing</h3>
  <p>
      This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
    </p>
   <ul>
      <li>You can find the source code <a href="https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c">here</a></li>
      <li>
        The variable n will store a different value every time you will run this program
      </li>
     <li>You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
      </li>
      <li>The output of the program should be:</li>
      <li>
          <ul>
             <li>
               The number, followed by
             </li> 
               <ul>
                <li>if the number is greater than 0: is positive</li>
                <li>if the number is 0: is zero</li>
                <li>if the number is less than 0: is negative</li>
              </ul>
            <li>followed by a new line</li>
          </ul>
     </li>
  </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
```
<h4></h4>
    <ul>
        <li>File: 0-positive_or_negative.c</li>
    </ul>
  
  
  <h3>1. The last digit</h3>
  <p>
    This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
  </p>
  <ul>
    <li>You can find the source code <a href="https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c">here</a></li>
    <li>The variable n will store a different value every time you run this program</li>
    <li>You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
    </li>
    <li>The output of the program should be:</li>
    <ul>
      <li>The string Last digit of, followed by</li>
      <li>n, followed by</li>
      <li>the string is, followed by</li>
      <ul>
        <li>if the last digit of n is greater than 5: the string and is greater than 5</li>
        <li>if the last digit of n is 0: the string and is 0</li>
        <li>if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
        </li>
      </ul>
      <li>followed by a new line</li>
    </ul>
  </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
```
<h4></h4>
    <ul>
        <li>File: 1-last_digit.c</li>
    </ul>
  
  
  <h3>2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
  </h3>
  <p>
    Write a program that prints the alphabet in lowercase, followed by a new line.
  </p>
   <ul>
      <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
     </li>
      <li>All your code should be in the main function</li>
     <li>You can only use putchar twice in your code</li>
  </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
```
<h4></h4>
    <ul>
        <li>File: 2-print_alphabet.c</li>
    </ul>
  
  
  <h3>3. alphABET</h3>
  <p>
    Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
  </p>
   <ul>
      <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
      </li>
      <li>All your code should be in the main function</li>
      <li>You can only use putchar three times in your code</li>
  </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 
```
<h4></h4>
    <ul>
        <li>File: 3-print_alphabets.c</li>
    </ul>
  
  
  <h3>4. When I was having that alphabet soup, I never thought that it would pay off</h3>
  <p>
    Write a program that prints the alphabet in lowercase, followed by a new line.
  </p>
   <ul>
      <li>Print all the letters except q and e</li>
     <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
     </li>
     <li>All your code should be in the main function</li>
     <li>You can only use putchar twice times in your code</li>
  </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
```
<h4></h4>
    <ul>
        <li>File: 4-print_alphabt.c</li>
    </ul>
  
  
 <h3>5. Numbers</h3>
    <p>
        Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
    </p>
     <ul>
        <li>All your code should be in the main function</li>
    </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 

```
<h4></h4>
    <ul>
        <li>File: 5-print_numbers.c</li>
    </ul>

  
 <h3>6. Numberz</h3>
    <p>
        Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
    </p>
     <ul>
        <li>You are not allowed to use any variable of type char</li>
        <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
       </li>
        <li>You can only use putchar twice in your code</li>
        <li>All your code should be in the main function</li>
    </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
```
<h4></h4>
    <ul>
        <li>File: 6-print_numberz.c</li>
    </ul>

  
 <h3>7. Smile in the mirror</h3>
    <p>
        Write a program that prints the lowercase alphabet in reverse, followed by a new line.
    </p>
     <ul>
        <li>
          You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
       </li>
        <li>All your code should be in the main function</li>
        <li>You can only use putchar twice in your code</li>
    </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
```
<h4></h4>
    <ul>
        <li>File: 7-print_tebahpla.c</li>
    </ul>

  
 <h3>8. Hexadecimal</h3>
    <p>
        Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
    </p>
     <ul>
        <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
        </li>
        <li>All your code should be in the main function</li>
        <li>You can only use putchar three times in your code</li>
    </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$

```
<h4></h4>
    <ul>
        <li>File: 8-print_base16.c</li>
    </ul>

  
 <h3>Patience, persistence and perspiration make an unbeatable combination for success</h3>
    <p>
        Write a program that prints all possible combinations of single-digit numbers.
    </p>
     <ul>
       <li>Numbers must be separated by ,, followed by a space</li>
       <li>Numbers should be printed in ascending order</li>
       <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
       </li>
       <li>All your code should be in the main function</li>
       <li>You can only use putchar four times maximum in your code</li>
       <li>You are not allowed to use any variable of type char</li>
    </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
```
<h4></h4>
    <ul>
        <li>File: 9-print_comb.c</li>
    </ul>

  
 <h3>10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
 </h3>
    <p>
        Write a program that prints all possible different combinations of two digits.
    </p>
     <ul>
        <li>Numbers must be separated by ,, followed by a space</li>
        <li>The two digits must be different</li>
        <li>01 and 10 are considered the same combination of the two digits 0 and 1</li>
        <li>Print only the smallest combination of two digits</li>
        <li>Numbers should be printed in ascending order, with two digits</li>
        <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
        </li>
        <li>You can only use putchar five times maximum in your code</li>
        <li>You are not allowed to use any variable of type char</li>
        <li>All your code should be in the main function</li>
    </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$
```
<h4></h4>
    <ul>
        <li>File: 100-print_comb3.c</li>
    </ul>

  
 <h3>11. The success combination in business is: Do what you do better... and: do more of what you do...
 </h3>
    <p>
        Write a program that prints all possible different combinations of three digits.
    </p>
     <ul>
        <li>Numbers must be separated by ,, followed by a space</li>
        <li>The three digits must be different</li>
        <li>
          012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
        </li>
        <li>Print only the smallest combination of three digits</li>
        <li>Numbers should be printed in ascending order, with three digits</li>
        <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
        </li>
        <li>You can only use putchar six times maximum in your code</li>
        <li>You are not allowed to use any variable of type char</li>
        <li>All your code should be in the main function</li>
    </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/0x01$ 
```
<h4></h4>
    <ul>
        <li>File: 101-print_comb4.c</li>
    </ul>
  
  
 <h3>12. Software is eating the World</h3>
    <p>
        Write a program that prints all possible combinations of two two-digit numbers.
    </p>
     <ul>
        <li>The numbers should range from 0 to 99</li>
        <li>The two numbers should be separated by a space</li>
        <li>All numbers should be printed with two digits. 1 should be printed as 01</li>
        <li>The combination of numbers must be separated by comma, followed by a space</li>
        <li>The combinations of numbers should be printed in ascending order</li>
        <li>00 01 and 01 00 are considered as the same combination of the numbers 0 and 1</li>
        <li>You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
       </li>
        <li>You can only use putchar eight times maximum in your code</li>
        <li>You are not allowed to use any variable of type char</li>
        <li>All your code should be in the main function</li>
    </ul>
    
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99

```
<h4></h4>
    <ul>
        <li>File: 102-print_comb5.c</li>
    </ul>

  
  
  
  
  
  
  
