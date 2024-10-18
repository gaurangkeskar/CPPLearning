Problem Statement
understanding input output and loops.
Create a program that reads input until an invalid input is encountered.
create a pattern using nested for-loops and user input. 

Solution
used cin to take input and assigned it using auto variable_name to check what gets allocated by compiler for different values.
for example, when i auto a = cin >> 3.0, will it give a 4 bytes or 8 bytes?
checked if i can create a copy of cout and cin objects. 

Learning
found out that the copy constructor is deleted for cin and cout.
auto depends upon the user implementation and takes usually more than 24 bytes.