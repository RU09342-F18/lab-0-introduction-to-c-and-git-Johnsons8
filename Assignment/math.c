#include 'math.h'

int math(int num1, int num2, char Operator){ // inputs num1, num2 as numbers to do math with, and Operator a character of which that is used to do math functions
if(num1 != NULL && num2 != NULL && Operator != NULL)
{  
 if(Operator == '+')
 {
   return num1 + num2;
 }
 elseif (Operator == '-')
 {
   return num1 - num2;
 }
 elseif (Operator == '*')
 {
   return num1 * num2;
 }
 elseif (Operator == '/')
 {
   return num1 / num2;
 }
 elseif (Operator == '%')
 {
   return num1 % num2;
 }
 elseif (Operator == '<')
 {
   return num1 << num2;
 }
 elseif (Operator == '>')
 {   
   return num1 >> num2;
 }
 elseif (Operator == '&')
 {   
   return num1 & num2;
 }
 elseif (Operator == '|')
 {
   return num1 | num2;
 }
 elseif (Operator == '^')
 {
   return num1 ^ num2;
 }
 elseif (Operator == '~')
 {   
   return ~num1;
 }  
 else
 {
    return -1;
 }
}
 else
{
   return -1;
}
}
 

  
