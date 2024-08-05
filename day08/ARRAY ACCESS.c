/*
   days_in_months

    31,28,31,30,31,30,31,31,30,31,30,31


          int days_in_months [ 12 ] = {31,28,31,30,31,30,31,31,30,31,30,31};
                                       // list
          int [] days_in_months =
          I*/
          #include<stdio.h>
          #include<stdlib.h>
          int main()
          {
              int arr [] = {6,9,1,2,4,7};
              int arr_ind;
              int arr_size;
              arr_size = sizeof arr / sizeof arr [ 0 ];
              for( arr_ind = 0; arr_ind < arr_size ; arr_ind +=1)
              {
                  printf("%d %d %d %d\n", arr[arr_ind], arr_ind[arr], *(arr+arr_ind),*(arr_ind +arr));
              }


              return EXIT_SUCCESS;
          }
