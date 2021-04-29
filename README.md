# Self-written class for complex numbers 
In this class one can do math operation for complex numbers directly by the objects themselves.  
See main.cpp wich illustrates how to use the class. It is's very simple to use.

## Code running and compilation
I assume that the user has a running g++ compiler in his terminal for Windows users. For Linux users I suppose you need no preparation to run this code.  

Simply run this command in the terminal
```
g++ -std=c++11 -Wall *.cpp -o complex && .\complex
```
The output in terminal should be as follows
```
x1 = 3 + -2i
abs of x1 = 3.60555
arg of x1 = = -33.6901
x1 is equal to y
arg = 36.8699
x3 = 1 + 5i
x4 = 18 + 1i
18 + -1i
x5/x6 = -0.170732 + 0.536585i
C = C1 + C2 - C3 / C4 * C5 + 9 - 8 * 2 / 3 = 4.63514 + 5.31081i
C1 = 9.63514 + 5.31081i
polar(2,.5) = 1.75517 + 0.958851i
```