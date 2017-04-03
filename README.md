# Create C/c++ Library
Create C/C++ library (Static) on Linux enviroment

Compile:     gcc -c *.c      //all c files which we want to make library file

Create library "libcalc.a":     ar -cvq libcalc.a *.o       //include all compiled code to create library file

List files in library:     ar -t libcalc.a       //list all included file in library file.

Linking with the library:     gcc -o calculator main.c libcalc.a

Execute your program:     ./calculator
