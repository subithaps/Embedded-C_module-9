sfr P1 = 0x90;
sfr P2 = 0xA0;

sbit LCD_RS = P1^0;
sbit LCD_RW = P1^1;
sbit LCD_EN = P1^2;

void LCD_Cmd(unsigned char);
void LCD_Data(unsigned char);
void delay();

void main()
{   
	  LCD_Cmd(0x38);  // set as dot matrix 5x7
	  LCD_Cmd(0x01);  // clear screen
		LCD_Cmd(0x0F);  // Display on cursor blinking
		     
    LCD_Data('C'); 		       
		LCD_Data('O');		        	
    LCD_Data('M');		       
    LCD_Data('O');		       					
		LCD_Data('R');		      
		LCD_Data('I');		      
		LCD_Data('N');
	  
    while(1); // infinite loop
}

void LCD_Cmd(unsigned char val)
{
    P2 = val;
	  LCD_RS = 0;
	  LCD_RW = 0;
	  LCD_EN = 1;
	  delay();
	  LCD_EN = 0;
}
void LCD_Data(unsigned char val)
{
	  P2 = val;
	  LCD_RS = 1;
	  LCD_RW = 0;
	  LCD_EN = 1;
	  delay();
	  LCD_EN = 0;
}

void delay()
{
	  unsigned int i;
	  for(i = 0; i <2000; i++);
}
	  
	
	
	
	