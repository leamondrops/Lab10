/* Task description:


We can get any element of an arithmetic sequence (arithmetic progression) by adding the common difference to the previous element:

an = an-1 + d

Considering the sequence as a function, realize a recursive function than returns the nth element of the sequence! The parameters of the function are: arithmetig_seq(n, start, diff), the sequence number of the required element, the starting value and the difference. What shall be the base case for this recursion?

Realize a similar (recursive) function that returns the nth element of a geometric sequence. The definition is very similar to AP but a quotient is given and multiple instaed of add:

bn = bn-1 · q

Complete the program to print the first 10 elements of the sequences! For arithmetic, the base case is 1 and it is increasing by 5, for geometric sequence the first element is 2 and the multiplication factor is 2.

    1     6     11    16    21    26    31    36    41    46 
    2     4     8     16    32    64   128   256   512  1024 



*/


#include <stdio.h>

int arith(int n,int start,int diff){
  if(n == 1){
    return start;
  }
  return arith(n-1, start, diff) + diff;
}

int geom(int n,int start,int mult){
  if(n == 1){
    return start;
  }
  return geom(n-1, start, mult) * mult;
}

int main(){
  int n = arith(10, 1, 5);
  int m = geom(10, 2, 2);

  printf("%d\n", n);
  printf("%d\n", m);

  return 0;
}
