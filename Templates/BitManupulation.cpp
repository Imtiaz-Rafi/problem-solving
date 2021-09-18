int computeXOR(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    else return 0;
}

bool isPowerOfTwo(int x) {
     return x && (!(x & (x - 1)));
}

void set(int & num,int pos) {
     num |= (1 << pos);
}
void unset(int &num,int pos) {
    num &= (~(1 << pos));
}
void toggle(int &num,int pos) {
    num ^= (1 << pos);
}
bool at_position(int num,int pos) {
    bool bit = num & (1<<pos);
    return bit;
}
void strip_last_set_bit(int &num) {
    num = num & (num-1);
}
int lowest_set_bit(int num) {
    int ret = num & (-num);
    return ret;
}

int countSetBits(int x) {
    int count = 0;
    while (x) { x &= (x-1); count++;  }
    return count;
}

mask = ~((1 << i+1 ) - 1); x &= mask;  //Clear all bits from LSB to ith bit
mask = (1 << i) - 1; x &= mask;        //Clearing all bits from MSB to i-th bit

Answer = pow(2, count of zero bits) // Refer Sum == XOR

// twos_complement = -num;

/* Swap two number
   a ^= b;
   b ^= a;
   a ^= b;
*/
/*Some Builtins:
   __builtin_popcount(n)); //Count of 1s
   __builtin_parity(n));   //Count of parity 1s
   __builtin_clz(n));      //Count of leading 0s
   __builtin_ctz(n));      //Count of trailing 0s
*/
