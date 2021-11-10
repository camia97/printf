# README
## _printef
**pritnf** is a C function belonging to the ANSI C standard library, and included in the file stdio.h.
Its purpose is to print formatted text to the standard output stream. Hence the "f" in the name stands for "formatted".
**printf** is a special function because it receives a variable number of arguments. The first parameter is fixed and is the format string.
It includes text to be printed literaly and marks to be replaced by the text obtained from the additional parameters.
Thus, printf is invoked with as many parameters as marks are included in the format string, plus one (the format string itself).
 ##### SPECIFIERS CHARACTERES:
|   specifier    | character |
| ----------- | ----------- |
| c    | character       |
| s  | string of characters |
| %  |% followed by another % character will write a single % to the stream   |
| d-i    | signed decimal integer  |
