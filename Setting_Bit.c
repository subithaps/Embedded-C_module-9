sfr number = 0x80;
sfr mask = 0x90;
sfr P2 = 0xA0;

void main()
{
    number = 0xB6;
	  mask = 0x01;
	  P2 = number | (mask << 3);
}
