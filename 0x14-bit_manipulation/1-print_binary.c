#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if b is NULL or contains non-binary digits
 */
unsigned int binary_to_uint(const char *b) 
 { 
         int i; 
         unsigned int k; 
  
         k = 0; 
         if (!b) 
                 return (0); 
         for (i = 0; b[i] != '\0'; i++) 
         { 
                 if (b[i] != '0' && b[i] != '1') 
                         return (0); 
         } 
         for (i = 0; b[i] != '\0'; i++) 
         { 
                 k <<= 1; 
                 if (b[i] == '1') 
                         k += 1; 
         } 
         return (k); 
 }
