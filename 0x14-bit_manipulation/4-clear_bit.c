#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index) 
 { 
         int mask; 
  
         if (index > 63 || !n) 
                 return (-1); 
         mask = 1 << index; 
         *n = (*n & ~mask) | ((0 << index) & mask); 
         return (1); 
 }
