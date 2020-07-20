# c-simple-shell

The Shell or Command Line Interpreter is the fundamental user interface to an Operating System.
The shell interprets the input, takes appropriate action, and finally prompts for more input.
The shell can be used either: as interactively - enter commands at the command prompt, or as an interpreter to execute a shell script.

Code of shell is written in C using the compiler of gcc.

My Shell have following commands:

1. cd <directory> - changes from the current directory to <directory>

2. clr - clears the screen

3. dir - lists the content of a current directory

4. environ - lists all the environment strings

5. echo <comment> - displays the <comment>

6. help - displays the help file - user manual

7. pause - pauses everything in the shell until 'Enter' is pressed

8. quit - exits the shell.

My shell also supports running a batchfile. Script can be executed by running the executable and giving it a file name ./myshell <batchfile>

I/O-redirection is supported, the sample command line: dir < myshell.c > outputfile.txt executes the command dir, the stdin FILE stream
replaced by myshell.c and the stdout FILE stream replaced by outputfile.txt.

Generally, when a command is being executed, you have to wait for the completion and type another command. Especially, when the command
is executed from a batchfile, much time is wasted in waiting. Background execution allows you not to wait for the execution.
My shell supports background execution of programs. An ampersand (&) at the end of the command line indicates that the
shell should return to the command line prompt immediately after launching that program.
