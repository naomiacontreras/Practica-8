/* Miranda Contreras Naomi Alexa 
Practica 8 */
#include <stdio.h>
int main()
{
  int n1,n2, i;
  for (i=1; i<=2; i++)
   {
     printf("Ingrese el número (%d) entero:",i);
     scanf("%d", &n2);
     if(i==1)
     {
       n1=n2;
     }
     else 
     {
       if (n2>n1)
         printf("El segundo numero (%d) es mayor que el primero (%d)\n", n2, n1);
       else
         if(n2<n1)
           printf("El primer numero (%d) es mayor que el segundo (%d)\n", n1, n2);
         else 
           printf("Ambos números son iguales (%d)\n", n1);
     }
   }
return 0; 
}
