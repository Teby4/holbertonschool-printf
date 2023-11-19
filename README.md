# _printf  
![enter image description here](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSlGwmyN7ir0VEC3oCd6PoTz3uwxX3od3i1AGohcN2k0YPP5syIR4GbHwYPxBLadRLu2tY&usqp=CAU)

That is the prototype for this implementation(_printf). As you can see, this prototype is an implementation of the **printf standard function** and **variadic function** .What is printf? "Writes the C string pointed by _format_ to the standard output ([stdout](http://www.cplusplus.com/stdout))"

In other words, the function receives a format (*const char* **format*) and a list of arguments (the magic of variadic functions). So printf inside, take the string format and search for specific patterns, then the pattern that was found it is passed to other function that prints the match pattern  

### Patterns 

![enter image description here](https://i.imgur.com/vmU0FhC.png) 	

That image shows specifiers that we can use in the printf.  In this case, _printf just allow specifiers like   
|Specifiers|Functions|Description| 
|--|--|--|
|s|_printstring|print a string| 
|c|_putchar|print just a char| 
|i|printeg|print a number in base 10|
|d|printeg|print a number in base 10|
## Flowchart
![enter image description here](C:\Users\ignac\OneDrive\Escritorio\Captura de pantalla 2023-11-19 115332.png) 


## Authors

* Ignacio Rivero <a href="https://github.com/riveroignacio04" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
* Felipe Olivera <a href="https://github.com/Teby4" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
