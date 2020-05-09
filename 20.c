int main(void)
{
	u8 a;
	u8 b=0xff;
	u8 c=0xff;
	u16  d=0xfffe;
	Debug_USART_Config();

	a=0x85;
	b=b+1;
	c=c+2;
  d=d+5;
	
  printf("a=%d\r\n",a);
  printf("b=%d\r\n",b);
  printf("c=%d\r\n",c);
  printf("d=%d\r\n",d);
//  printf("e=%d\r\n",e);
//  printf("f=%d\r\n",f);
//  printf("g=%d\r\n",g);
//  printf("h=%d\r\n",h);


{}
