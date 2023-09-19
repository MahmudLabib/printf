# Creating our own version of 'printf'

This repository contains our own version of the function printf, originally included in the library stdio.h.


## Introduction
Emulates the operation of the printf function which delivers an output according to a format composed by zero or more directives and conversion specifiers:

Specifier | Input example | Output example
| --- | --- | --- |
%c | "Printing a char: [%c]\n", 'H' | Printing a char: [H]
%s | "Printing a string: [%s]\n", "Hello, World!" | Printing a string: [Hello, World!]
%d or %i | "Printing a number: [%i]\n", 557 | Printing a number: [557]
%% | "Printing a percent sign: [%%]\n", % | Printing a percent sign: [%]



## Compilation


gcc -Wall -Werror -Wextra -pedantic *.c


## Environment
 This project has been tested on `Ubuntu 14.06.6 LTS`
 This is a team project
 This is a function doing the same thing that printf doing.


## Authors

- ***[Mahmoud Labib Sallam](https://github.com/MahmudLabib)***
- ***[AbdElrahman Mohammed Eldemerdash](https://github.com/engakhattab)***
