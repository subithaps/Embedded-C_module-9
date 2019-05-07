sfr P1 = 0x90;
sbit red = P1^1;
void main()
{
    int i;
	  red = 0;
	  
	  while(1)
		{
			  red =! red;
			  for(i = 0; i <= 1000; i++);
		}
}
			  