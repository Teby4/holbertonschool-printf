# _printf  
![enter image description here](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSlGwmyN7ir0VEC3oCd6PoTz3uwxX3od3i1AGohcN2k0YPP5syIR4GbHwYPxBLadRLu2tY&usqp=CAU)

That is the prototype for this implementation(_printf). As you can see, this prototype is an implementation of the **printf standard function** and **variadic function** .  ## What is printf? "Writes the C string pointed by _format_ to the standard output ([stdout](http://www.cplusplus.com/stdout))"

In other words, the function receives a format (*const char* **format*) and a list of arguments (the magic of variadic functions). So printf inside, take the string format and search for specific patterns, then the pattern that was found it is passed to other function that prints the match pattern  

### Patterns 

![enter image description here](https://i.imgur.com/vmU0FhC.png) 	

That image shows specifiers that we can use in the printf.  In this case, _printf just allow specifiers like   
|Specifiers|Functions|Description| 
|--|--|--|
|s|print_string|print a string| 
|c|print_char|print just a char| 
|i|print_integer|print a number in base 10|
|d|print_integer|print a number in base 10|
## Flowcharts

These 4 functions are the bases for this project:
