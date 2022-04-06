#include <stdio.h>
int main() 
{
   int a[10] = {10,55,3,999,32,-4,-10,0,9,7};
   int n=10;
   int i, j, p, s;
   for (i = 0; i < (n - 1); i++)
   {
      p = i;
      for (j = i + 1; j < n; j++)
       {
         if (a[p] > a[j])
            p = j;
      }
      if (p != i)
      {
         s = a[i];
         a[i] = a[p];
         a[p] = s;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", a[i]);
   return 0;
}