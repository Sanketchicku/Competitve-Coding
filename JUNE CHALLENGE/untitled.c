
#include <stdio.h>
#include <inttypes.h>

int main()
{
  int t;

    
    scanf( "%d" , &t);


    while (t--) {
      uint64_t n;

    
      while ((scanf("%" SCNu64, &n) != 1) || (n == 0)) {
        
        int c;

        while ((c = getchar()) != '\n') {
          if (c == EOF)
            return -1;
        }

   
      }

    
      uint64_t v = n*10-1;
      uint64_t s;

      do {
        
        uint64_t vv = ++v;

        s = 0;

        while (vv != 0) {
          s += vv%10;
          vv /= 10;
        }
      } while ((s % 10) != 0);

      printf( PRIu64 PRIu64 "\n", n, v);
    }
  }

  
