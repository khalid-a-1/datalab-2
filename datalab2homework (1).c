//1 Due Monday February 3
/*
* getByte - Extract byte n from word x
*   Bytes numbered from 0 (least significant) to 3 (most significant)
*   Examples: getByte(0x12345678,1) = 0x56
*   Legal ops: ! ~ & ^ | + << >>
*   Max ops: 6
*/
int getByte(int x, int n) {
  int s = n<<3;
  int u = x>>s;
  return 0xff & u;
}

/*
* bitParity - returns 1 if x contains an odd number of 0's
*   Examples: bitParity(5) = 0, bitParity(7) = 1
*   Legal ops: ! ~ & ^ | + << >>
*   Max ops: 20
*/
int bitParity(int x) {
  int z = x>>16;
  int s = x^z;
  int u = z>>8;
  int m = z^u;
  int c = u>>4;
  int y = u^c;
  int d = c>>2;
  int hu= d^c;
  int e = d>>1;
  int yy= e^d;
  return !(yy & 0x1)
}

/*
 * bang - Compute !x without using !
 *   Examples: bang(3) = 0, bang(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 */
 int bang(int x) {
   int z = x>>16;
   int s = x|z;
   int u = z>>8;
   int m = z|u;
   int c = u>>4;
   int y = u|c;
   int d = c>>2;
   int hu= d|c;
   int e = d>>1;
   int yy= e|d;
   return (~(yy) & 0x1)
 }
