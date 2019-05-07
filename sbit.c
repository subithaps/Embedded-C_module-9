sfr P1 = 0x90;    // SFR for P1 //
sbit P1_0 = P1^0; // SFR for P1.0 //
sbit P1_1 = P1^1; // SFR for P1.1 //

void main()
{
	  P1_0 = 0;     // configure P1.0 as input //
	  P1_1 = P1_0;  // copy the value of P1.0 to P1.1 //
}