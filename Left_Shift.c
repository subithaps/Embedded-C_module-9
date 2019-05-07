sfr P0 = 0x80;
sfr P1 = 0x90;

void main()
{
    P0 = 0x3C;
	  P1 = P0;
    P1 = P1 << 1;
}