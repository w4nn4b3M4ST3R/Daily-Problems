/*
- This is the 'Classics' in bitwise application
- Goal: Create a number that has all bits set to 1, matching the length of the given number n in binary.
- Use left shift to generate the mask: (1 << n.bit_length()) - 1
Ex: n = 5 (101) -> mask = '1000' - '0001' = '0111'
- Finally, use the XOR (^) operation. XOR-ing a number with 1 will toggle the bits (0 → 1 and 1 → 0).
*/
int bitwiseComplement(int n) {
    if ( n== 0) return 1;
    int mask = 1;
    while(mask <= n) mask <<= 1;

    return (mask-1)^n;
    }