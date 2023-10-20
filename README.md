# What is a transpiler ?   
Transpilers are also known as source-to-source compilers. So essentially they are a subset of compilers which take in a source code file and convert it to another source code file in some other language or a different version of the same language.   
In this project, I created a transpiler from an imaginary programming language Kappa to C  

# The tools  
The tools I used are **flex** to create a lexical analyzer and **bison** to create a syntactical analyzer   

# How to run the project ? 
1. Compile with : ```make```   
2. Run with : ```./mycompiler < correct1.ka```  
3. To check the correctness of the code, compile the file created by the previous step called output.c with : ```gcc -Wall -g output.c -o output```  
4. And run with : ```./output```  
If you run the 2nd step with correct1.ka as input, the program in step 4 will expect an integer which will then use to calculate the prime numbers 
