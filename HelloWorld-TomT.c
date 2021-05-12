int main(void) {

    unsigned char s[] = 
    {

        0x93, 0x9c, 0x20, 0x5e, 0x5b, 0xcb, 0xa, 0x9d, 
        0x6a, 0x6f, 0x2a, 0x6e, 0xdc, 0xde
    };

    for (unsigned int m = 0; m < sizeof(s); ++m)
    {
        unsigned char c = s[m];
        c -= 0x81;
        c ^= m;
        c -= m;
        c = (c >> 0x6) | (c << 0x2);
        c ^= m;
        s[m] = c;
    }

    register char* arg2 asm("rsi") = s;
    asm("mov $1, %rax;");
    asm("mov $1, %rdi;");
    asm("mov $14, %rdx;");
    asm("syscall;");

    return 0;
}
