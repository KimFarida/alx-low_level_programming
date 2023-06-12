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

        
        
        
        
        
        
        
        
        
        
        
        
        
        

