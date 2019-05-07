sfr P1 = 0x90;
sfr P2 = 0xA0;
sfr P3 = 0xB0;

void main()
{
    P1 = 0x2C;
    P2 = 0x78;
    P3 = P1 & P2;
}
