sfr P1 = 0x90;
sbit green = P1^0;
sbit red = P1^1;
void main()
{
    int i;
	  green = 0;
	  red = 1;
	  
	  while(1)
		{
			  red =! red;
			  green =! green;			
			  for(i = 0; i <= 1000; i++);
		}
}
			  