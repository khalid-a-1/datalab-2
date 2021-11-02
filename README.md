# CS 181: Data Systems

## Datalabs

#### Datalab 2

getByte - Extract byte n from word x

Bytes numbered from 0 (least significant) to 3 (most significant)

Examples: getByte(0x12345678,1) = 0x56

Legal ops: ! ~ & ^ | + << >>

Max ops: 6

```
int getByte(int x, int n) {
  return 2;
}
```

bitParity - returns 1 if x contains an odd number of 0's

Examples: bitParity(5) = 0, bitParity(7) = 1

Legal ops: ! ~ & ^ | + << >>

Max ops: 20
```
int bitParity(int x) {
  return 2;
}
```

bang - Compute !x without using !

Examples: bang(3) = 0, bang(0) = 1 

Legal ops: ~ & ^ | + << >>

Max ops: 12

```
 int bang(int x) {
   return 2;
 }
```
