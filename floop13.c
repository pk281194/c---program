//while printing pattern.....(2nd method.)..
     /*  col  j5 j4 j3 j2 j1
   row i5   *  
       i4    *  * 
       i3    *  *  *  
       i2    *  *  *  *  
       i1    *  *  *  *  *  */
       #include<stdio.h>
       void main()
       {
           int i,j;
           for(i=5;i>=1;i--)//row
           {
               for(j=5;j>=i;j--)//column
               {
                   printf("*");
               }
            
              printf("\n");

           }
       
       }