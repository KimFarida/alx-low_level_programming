<h1>0x00. C - Hello, World<h1>

<h2>Requirements</h2>
<h3>C</h3>
<ul>
    <li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -        Werror -Wextra -pedantic -std=gnu89
 </li>
    <li>
        All your files should end with a new line
    </li>
    <li>
        A README.md file at the root of the repo, containing a description of the repository         </li>
    <li>
        A README.md file, at the root of the folder of this project, containing a description of the project
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
<h3>Shell Scripts</h3>
     <ul>
        <li>
            Allowed editors: vi, vim, emacs
         </li>
        <li> 
            All your scripts will be tested on Ubuntu 20.04 LTS
         </li>
        <li> 
            All your scripts should be exactly two lines long ($ wc -l file should print 2)             </li>
        <li>
            All your files should end with a new line
         </li>
        <li>
            The first line of all your files should be exactly #!/bin/bash
         </li>
    </ul>
<h2>More Info</h2>
    <h3>Betty linter</h3>
    To run the Betty linter just with command betty <filename>:
    <ul>
        <li>Go to the Betty repository</li>
        <li>Clone the repo to your local machine</li>
        <li>cd into the Betty directory</li>
        <li>Install the linter with sudo ./install.sh</li>
        <li>emacs or vi a new file called betty, and copy the script below:</li>
    </ul>
        
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
    
```   
    
<ul>
<li>Once saved, exit file and change permissions to apply to all users with chmod a+x           betty</li>
<li>
Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
</li>
</ul>
You can now type betty <filename> to run the Betty linter!
    
    
<h2>Tasks</h2>
    <h3>0. Preprocessor</h3>
    <p>
        Write a script that runs a C file through the preprocessor and save the result into another file.
    </p>
     <ul>
        <li>The C file name will be saved in the variable $CFILE</li>
        <li>The output should be saved in the file c</li>
    </ul>
    
```
julien@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 
```
<h4></h4>
    <ul>
        <li>File: 0-preprocessor</li>
    </ul>
   
    
<h3>1. Compiler</h3
    <p>Write a script that compiles a C file but does not link.</p>
 <ul>
    <li>The C file name will be saved in the variable $CFILE</li>
    <li>The output file should be named the same as the C file, but with the extension .o instead of .c</li>
     <ul><li>Example: if the C file is main.c, the output file should be main.o</li></ul>
</ul>

```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./1-compiler 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$ 
```
<h4></h4>
    <ul>
        <li>File: 0-preprocessor</li>
    </ul>



<h3>2. Assembler</h3
    <p>Write a script that generates the assembly code of a C code and save it in an output file.
    </p>
 <ul>
    <li>The C file name will be saved in the variable $CFILE</li>
    <li>The output file should be named the same as the C file, but with the extension .s instead of .c.
    </li>
    <ul>
        <li>Example: if the C file is main.c, the output file should be main.s
        </li>
     </ul>
</ul>
    
```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
return (0);
}
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
.file   "main.c"
.text
.globl  main
.type   main, @function
main:
.LFB0:
.cfi_startproc
pushq   %rbp
.cfi_def_cfa_offset 16
.cfi_offset 6, -16
movq    %rsp, %rbp
.cfi_def_cfa_register 6
movl    $0, %eax
popq    %rbp
.cfi_def_cfa 7, 8
ret
.cfi_endproc
.LFE0:
.size   main, .-main
.ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
.section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 
```
<h4></h4>
    <ul>
        <li>File: 2-assembler</li>
    </ul>

    
<h3>3. Name</h3
<p>Write a script that compiles a C file and creates an executable named cisfun.</p>
<ul>
<li>The C file name will be saved in the variable $CFILE</li>
</ul>
    
```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
return (0);
}
julien@ubuntu:~/c/0x00$ ./3-name 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
julien@ubuntu:~/c/0x00$ 
```
<h4></h4>
    <ul>
        <li>File: 3-name</li>
    </ul>
    
    
<h3>4. Hello, puts</h3
    <p>
        Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
    </p>
 <ul>
    <li>Use the function puts</li>
    <li>You are not allowed to use printf</li>
    <li>
        Your program should end with the value 0
    </li>
</ul>
    
```
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
```
<h4></h4>
    <ul>
        <li>File: 4-puts.c</li>
    </ul>
    
    
<h3>5. Hello, printf</h3
    <p>
    Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
    </p>
 <ul>
    <li>
        Use the function printf
    </li>
    <li>
        You are not allowed to use the function puts
    </li>
    <li>Your program should return 0</li>
    <li>Your program should compile without warning when using the -Wall gcc option</li>
</ul>
    
```
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out 
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
```
<h4></h4>
    <ul>
        <li>File: 5-printf.c</li>
    </ul>
    
    
<h3>Size is not grandeur, and territory does not make a nation</h3
    <p>
    Write a C program that prints the size of various types on the computer it is compiled and run on.
    </p>
 <ul>
    <li>You should produce the exact same output as in the example</li>
    <li>Warnings are allowed</li>
    <li>Your program should return 0</li>
    <li>
        You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
     </li>
</ul>
    
```
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 

```
<h4></h4>
    <ul>
        <li>File: 6-size.c</li>
    </ul>
    
    
<h3>7. Intel</h3
    <p>
    Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
    </p>
 <ul>
    <li>The C file name will be saved in the variable $CFILE.</li>
    <li>
        The output file should be named the same as the C file, but with the extension .s instead of .c.
    </li>
    <ul>
        <li>Example: if the C file is main.c, the output file should be main.s</li>
    </ul>
</ul>
    
```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
return (0);
}
julien@ubuntu:~/c/0x00$ ./100-intel 
julien@ubuntu:~/c/0x00$ cat main.s
.file   "main.c"
.intel_syntax noprefix
.text
.globl  main
.type   main, @function
main:
.LFB0:
.cfi_startproc
push    rbp
.cfi_def_cfa_offset 16
.cfi_offset 6, -16
mov rbp, rsp
.cfi_def_cfa_register 6
mov eax, 0
pop rbp
.cfi_def_cfa 7, 8
ret
.cfi_endproc
.LFE0:
.size   main, .-main
.ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
.section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 
```
<h4></h4>
    <ul>
        <li>File: 100-intel</li>
    </ul>
    
    
<h3>8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity </h3
    <p>Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.</p>
 <ul>
    <li>
        You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
     </li>
    <li>
        Your program should return 1
    </li>
    <li>Your program should compile without any warnings when using the -Wall gcc option</li>
</ul>
    
```
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2> q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf < 101-quote.c
julien@ubuntu:~/c/0x00$ grep put < 101-quote.c
julien@ubuntu:~/c/0x00$ 

```
<h4></h4>
    <ul>
        <li>File: 101-quote.c</li>
    </ul>
    
    
    
    
    
    
    
    
    
    


        
        
        
        
        
        
        
        
        
        
        
        
        
        

