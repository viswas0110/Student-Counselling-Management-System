#include <stdio.h> 
#define MAXSIZE 10 
int stack[MAXSIZE];  
int top = -1;  
int isEmpty() 
 { 
   if(top == -1) 
      return 1; 
   else 
      return 0; 
} 
 
int isFull()  
{ 
   if(top == MAXSIZE-1) 
      return 1; 
   else 
      return 0; 
} 
void push(int element) { 
   if(!isFull()) { 
top++; 
      stack[top] = element; 
   } else { 
      printf("Error: Stack is full\n"); 
   } 
} 
int pop() { 
   int element;  
   if(!isEmpty()) { 
      element = stack[top]; 
      top--; 
      return element; 
   } else { 
      printf("Error: Stack is empty\n"); 
      return -1; 
   } 
} 
void display() { 
   int i; 
   if(!isEmpty()) { 
      printf("Stack elements are:\n"); 
 
      for(i=top; i>=0; i--) 
         printf("%d\n",stack[i]); 
   } else { 
      printf("Stack is empty\n"); 
   } 
} 
int main()  
{ 
   push(5); 
   push(10); 
   push(15); 
   push(20); 
   display(); 
   printf("Popped element: %d\n",pop()); 
   display(); 
   return 0; 
}