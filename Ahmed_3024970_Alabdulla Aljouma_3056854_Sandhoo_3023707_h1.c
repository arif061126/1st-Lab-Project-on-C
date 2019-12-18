#include <stdio.h>
#include <stdlib.h>
#include<math.h>


/* FoP-Practical Homework 1*/
/* Participant 1: Ahmed, Arif (3024970) <ISE CE> */
/* Participant 2: Alabdulla Aljouma, Muntaser (3056854) <ISE CE> */
/* Participant 3: Sandhoo, Muhammad Adeel Sarwar (3023707) <ISE EEE> */

int main()
{/* declaration and definitions */
    int ch;
    /* kernel */
    printf("please choice one of the thus choices\n");
    printf("");
    printf("    (1)perfect numbers\n");
    printf("    (2)octal-decimal converting\n");
    printf("    (3)float-binary representation\n");
    scanf("%d",&ch);
    //the perfect number program
   if(ch==1 )
   {
       system("color 3D");
   printf(" _____     ______   _____    _____   ______    ______  __________         __        ______        \n");
   printf("|     |   |        ||    |  |       |         |            |            // ||   // |      |     \n");
   printf("|_____|   |______  ||____|  |_____  |______   |            |           //  ||  //  |      |        \n");
   printf("|         |        ||\\      |       |         |           |          //   || //   |      |         \n");
   printf("|         |______  || \\     |       |______   |______     |         //    ||//    |______|                 \n");

      int upper,lower,i,m,s;
  printf("please input the upper number \n");
  scanf("%d",&upper);
  printf("please input the lower number \n");
  scanf("%d",&lower);
  printf("perfect numbers are:\n");
  for(m=lower;m<=upper;m++){
    i=1;
    s = 0;

    while(i<m){
      if(m%i==0)
           s=s+i;
          i++;
    }

    if(s==m)
      printf("%d ",m);
  }

}else {}
   //octal to decimal conversion and verse versa
   if (ch==2){      char ch2;
   int oct,dec;
system("color B2");
printf("    ____     _____    ________   ___                         \n");
printf("   |    |   |            |      |   |     |                  \n");
printf("   |    |   |            |      |___|     |                  \n");
printf("   |____|   |_____       |      |   |     |_____             \n");


printf("please choice the conversion form  \n");
printf("(a)for converting from octal to decimal\n");
printf("(b)for converting from decimal to octal\n");
scanf("%s",&ch2);
if(ch2=='a'){
printf("please enter the octal number\n");
scanf("%o",&oct);
printf("the conversion is equal:%d",oct);}

if(ch2=='b')

{printf("please enter the decimal number \n");
scanf("%d",&dec);

printf("the conversion result:%o",dec);
    }

    return 0;
} else{}

// printf("***** Convert float to binary *******\n");

if (ch==3) {


int  ch3, intg, bi = 0, i = 1;
float  bf = 0, k=0.1f , frac, temp1, f;
system("color 6b");
printf("    ____            _____    ___  ________   \n");
printf("   |       |       |     |  |   |    |      \n");
printf("   |____   |       |     |  |___|    |       \n");
printf("   |       |_____  |_____|  |   |    |       \n");



printf("for converting from decimal/floating to binary \n");



    printf("\nPlease enter the floating/decimal value: ");
    scanf("%f",&f);

    //Separating the integral value from the floating point variable
    intg = (int)f;

    //Separating the fractional value from the variable
    frac = f - (int)f;

    // printf("integral: %d\n",intg);
    // printf("fractional: %f\n",frac);

    //Loop for converting decimal to binary
    while(intg>0)
    {
        bi = bi + intg % 2 * i;
        i = i * 10 ;
        intg = intg / 2;
    }

    //Loop for converting Fractional value to binary
    while(k>0.00000001)
    {
        temp1 = frac * 2;
        bf = bf + ((int)temp1)*k;
        frac = temp1 - (int)temp1;
        k = k / 10;
    }

    //Combining both the integral and fractional binary value.
    double bt = (double)((int)bi + (double)bf);
    // printf("non fractional binary part:%d\n",bi);
    // printf("fractional binary part:%f\n\n",bf);
    printf("The equivalent binary: %f\n", bt);
}}


