sfr number = 0x80;
sfr mask = 0x90;
sfr P2 = 0xA0;

void main()
{
    number = 0xAE;
	  mask = 0x3C;
	  P2 = number & mask;
}
