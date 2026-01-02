/*VS Code + MinGW Setup (Short Steps)
Download VS Code
https://code.visualstudio.com
 → Install

Download MinGW
https://sourceforge.net/projects/mingw
 → Install
Select: gcc, g++

Set Path
This PC → Properties → Advanced → Environment Variables → Path
Add:

C:\MinGW\bin

Check GCC
Open CMD → Type:

gcc --version

Install C Extension
VS Code → Extensions → Install C/C++ (Microsoft)
Compile & Run

gcc file.c -o file
file*/
//Run First C Program
#include <stdio.h>
int main() {
    printf("Name: Avishek\n");
    printf("Age: 18\n");
    return 0;
}
