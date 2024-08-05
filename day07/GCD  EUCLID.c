/*

GCD ( a, b ) = gcd ( b , a%b )


        n1      n2      n1_mod_n2
        175     50         25
        50      25          0

        */
    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>
    typedef long long int lli;

   int main()
   {
      lli n1;
      lli n2;
      lli n1_mod_n2;
      n1 = 741632876231987*97LL;
      n2 = 7864873268732*97LL;
      n1_mod_n2 = ( n1 % n2 );

      while ( n1_mod_n2 != 0)
      {
          printf("n1 = %lld     n2 = %lld\n", n1,n2);
          n1 = n2;
          n2 = n1_mod_n2;
          n1_mod_n2 = n1 % n2;
      }
      printf("gcd = %lld", n2);







        return EXIT_SUCCESS;
    }

