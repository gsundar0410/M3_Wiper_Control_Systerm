#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)



#define RCC_BASE_ADDR 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)



#define GPIOA_BASE_ADDR 0x40020000
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)



#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)



#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)


int main()
{
int sun=0,raj;  //Declaring and Initilizing Variables
RCC_AHB1ENR |= (1<<3)|(1<<0); //Enabling the LED and the switch
GPIOD_MODE = 0; //For Clear LED
GPIOA_MODE = 0; //For Clear Switch
GPIOA_IDR |= 1<<3;
GPIOA_MODE |= (0<<1)|(0<<0);    //to assign Switch as input pin as per the Datasheet
GPIOD_MODE |= (0<<29)|(1<<28);  //to assign LED 14 as output pin
GPIOD_MODE |= (0<<27)|(1<<26);  //to assign LED 13 as output pin
GPIOD_MODE |= (0<<25)|(1<<24);  //to assign LED 12 as output pin
GPIOD_MODE |= (0<<31)|(1<<30);  //to assign LED 14 as output pin as per the Datasheet

GPIOD_ODR = 0X00;
while(1)
{
while((GPIOA_IDR & 0x01) == 1) // Switch Status On
{
sun++; //Increment for Switch
}
if(sun>30000)
   {
sun=0;//RED Led should be in ON state
GPIOD_ODR |= 1<<14;
while(1)
{
GPIOD_ODR |= 1<<15;
for(raj=0;raj<50000000;raj++){};
GPIOD_ODR &= ~(1<<15);
GPIOD_ODR |= 1<<12;
for(raj=0;raj<50000000;raj++){};
GPIOD_ODR &= ~(1<<12);
GPIOD_ODR |= 1<<13;
for(raj=0;raj<50000000;raj++){};
GPIOD_ODR &= ~(1<<13);
GPIOD_ODR |= 1<<12;
for(raj=0;raj<50000000;raj++){};
GPIOD_ODR &= ~(1<<12);
GPIOD_ODR |= 1<<15;
for(raj=0;raj<50000000;raj++){};
GPIOD_ODR &= ~(1<<15);
}
   }




}
return 0;
}
