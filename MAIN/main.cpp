//name = Saurabh S. Patil
//conversion program
//date = 29/5/21  05:00 pm

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void AND_Gate();  					//Operation of AND Gate
void OR_Gate();						//Operation of OR Gate
void NOT_Gate();					//Operation of NOT Gate
void NAND_Gate();					//Operation of EX-OR Gate	
void NOR_Gate();					//Operation of EX-NOR Gate
void Binary_to_Octal();				//to convert Binary number to Octal number 
void Binary_to_Ddecimal();			//to convert Binary number to Ddecimal number
void Binary_to_HexaDecimal();		//to convert Binary number to HexaDecimal number
void Octal_to_Binary();				//to convert Octal number to Binary number
void Octal_to_Decimal();			//to convert Octal number to Decimal number
void Octal_to_HexaDecimal();		//to convert Octal number to HexaDecimal number
void Decimal_to_Binary();			//to convert Decimal number to Binary number
void Decimal_to_Octal();			//to convert Decimal number to Octal number
void Decimal_to_HexaDecimal();		//to convert Decimal number to HexaDecimal number
void HexaDecimal_to_Binary();		//to convert HexaDecimal number to Binary number
void HexaDecimal_to_Octal();		//to convert HexaDecimal number to Octal number 
void HexaDecimal_to_Decimal();		//to convert HexaDecimal number to Decimal number



//program INDEX page

int main()
{
	int op;
	printf("\n\n-----------------------------------------------------------------------");
	printf("--------------------CONVERSION & GATES---------------------------");
	printf("--------------------------------------\n\n");
		
	//
	do
		{
			printf("\n\t\t\t****************************MAIN MENU****************************\n");			
			printf("\t\t\t**                                                             **");
			printf("\n\t\t\t**\t\tENTER OPERATION TO PERFORM\t\t       **\n");
			printf("\t\t\t**\t\t ~ 1 - GATES\t\t\t\t       **\n\t\t\t**\t\t ~ 2 - CONVERSION\t\t\t       **\n\t\t\t**\t\t ~ 3 EXIT\t\t\t\t       **\n");
			printf("\t\t\t**                                                             **");
			printf("\n\t\t\t*****************************************************************");
			printf("\n\t\t\t\t\tOPERATION :");			
			scanf("%d",&op);
	

	
	switch(op)
	{
	case 1:
		int gate;
		do
		{
		printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");			
		printf("\n\n\t\t\tENETR THE NUMBER BELOW TO GET INFORMATION OF GATE");
	//	printf("\n\n***************Enter number of gate of which you want information***************");
		printf("\n\t\t\t\t 11 AND GATE \n\t\t\t\t 12 OR GATE \n\t\t\t\t 13 NOT GATE \n\t\t\t\t 14 NAND GATE \n\t\t\t\t 15 NOR GATE \n\t\t\t\t 16 EXIT\n\t\t\t\t 17 RETURN TO MAIN MENU\n\n\t\t\t\t\tEnter number:");
		scanf("%d",&gate);

	
		switch(gate)
			{
				case 11:
					AND_Gate();
					break;
					
				case 12:
					OR_Gate();
					break;
				
				case 13:
					NOT_Gate();
					break;
				
				case 14:
					NAND_Gate();
					break;
				
				case 15:
					NOR_Gate();
					break;
				
				case 16:
					return op;
					break;
				
				case 17:
					break;
				
				default:
					printf("\n\t\t\t\t******  ENTER VALID CHOICE  ******\n");
					break;
			}
	printf("\n\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
		}while(gate != 17);
	
		break;
	
	case 2:
	{
		int num;											
		do
		{
		
		printf("\n\n\t\t\t  ~ CONVERT BINARY TO ");	
		printf("\n\t\t\t\t21 - OCTAL\n\t\t\t\t22 - DECIMAL\n\t\t\t\t23 - HEXA-DECIMAL");	
	
		printf("\n\n\t\t\t ~ CONVERT OCTAL TO ");	
		printf("\n\t\t\t\t24 - BINARY\n\t\t\t\t25 - DECIMAL\n\t\t\t\t26 - HEXA-DECIMAL");
	
		printf("\n\n\t\t\t ~ CONVERT DECIMAL TO ");	
		printf("\n\t\t\t\t27 - BINARY\n\t\t\t\t28 - OCTAL\n\t\t\t\t29 - HEXA-DECIMAL");
	
		printf("\n\n\t\t\t ~ CONVERT HEXA-DECIMAL TO ");	
		printf("\n\t\t\t\t30 - BINARY\n\t\t\t\t31 - OCTAL\n\t\t\t\t32 - DECIMAL");
		
		printf("\n\n\t\t\t\t33 - EXIT\n\t\t\t\t34 - RETUYRN TO MAIN MENU ");
	
		printf("\n\n\t\t\tENTER THE NO. OF OPERATION TO PERFORM : ");
		scanf("%d",&num);	
	
		switch (num)
			{
			case 21:
				Binary_to_Octal();
				break;
		
			case 22:	
				Binary_to_Ddecimal();
				break;
		
			case 23:
				Binary_to_HexaDecimal();
				break;
				
			case 24:
				Octal_to_Binary();
				break;
			
			case 25:
				Octal_to_Decimal();                               
				break;
			
			case 26:
				Octal_to_HexaDecimal();
				break;
			
			case 27:
				Decimal_to_Binary();
				break;
			
			case 28:
				Decimal_to_Octal();
				break;
			
			case 29:
				Decimal_to_HexaDecimal();
				break;
		
			case 30:
				HexaDecimal_to_Binary();
				break;
		
			case 31:
				HexaDecimal_to_Octal();
				break;
		
			case 32:
				HexaDecimal_to_Decimal();
				break;
			
			case 33:
				return 0;
				break;
			case 34:
				break;
			
			default:
				printf("\n\n\t\t\t---------------------------------------\n");
				printf("\t\t\t----------------ERROR------------------\n");
				printf("\t\t\t----------ENTER VALID OOPTION----------\n");
				printf("\t\t\t---------------------------------------\n");
				break;		
			}

		}while(num!=34);
	}
	break;	
	
		case 3:
			return 0;
			break;
		
		default:
				printf("\n\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
				printf("\t\t\t----------------ERROR------------------\n");
				printf("\t\t\t----------ENTER VALID OOPTION----------\n\n");
				printf("\n\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
		}
	}while(op!=3);

}


												//AND GATE
void AND_Gate()
{
	printf("\n\n\n---------------------------------------------------------------------------------------------------------AND GATE--------------------------------------------------------------------------------------------------\n\n");
	printf("\tDEFINATION:");
	printf("\n\t\tAn AND gate is logic circuit with two or more inputs and only one output,whose OUTPUT becomes high ONLY WHEN ALL INPUTS ARE HIGH.\n");
	printf("\n\n\tlogical Equation:");
	printf("\n\t\t\tY = A . B");
	printf("\n\n\tTRUTH TABLE:");
	int a[4] = { 0 , 0 , 1 , 1 };
	int b[4] = { 0 , 1 , 0 , 1 };
	int i , AND_OP;
	for ( i = 0; i < 4 ; i++)
	{
		AND_OP = a[i] * b[i];
		printf("\n\n\t\t%d AND %d IS %d",a[i],b[i],AND_OP);
	}

}

												//OR GATE
void OR_Gate()
{
	printf("\n\n\n-------------------------------------------------------------------------------------------------------------OR GATE-----------------------------------------------------------------------------------------------\n\n");
	printf("\tDEFINATION");
	printf("\n\t\tThis id the normal inclusive OR.It has two or more inputs and only one output.the output is high when ANY ONE OR ALL INPUTS ARE HIGH");
	printf("\n\n\tlogical Equation:");
	printf("\n\t\t\tY = A + B");
	printf("\n\n\tTRUTH TABLE:");
	int a[4] = { 0 , 0 , 1 , 1 };
	int b[4] = { 0 , 1 , 0 , 1 };
	int i,OR_OP;
	for (i = 0 ; i < 4 ; i++)
	{
		if(a[i] + b[i] >= 1 )
			OR_OP = 1;
		else
			OR_OP = 0;
		printf("\n\n\t\t%d OR %d IS %d",a[i],b[i],OR_OP);
	} 

}

												//NOT GATE
void NOT_Gate()
{
	printf("\n\n\n-------------------------------------------------------------------------------------------------------------NOT GATE----------------------------------------------------------------------------------------------\n\n");
	printf("\tDEFINATION");
	printf("\n\t\tNot gate is a gate with only one input and one output signal. THE OUTPUT IS ALWAYS THE OPPOSITE (COMPLEMENT) OF THE INPUT ALSO CALLED AS INVERTER.");
	printf("\n\n\tlogical Equation:");
	printf("\n\t\t\tY = ~A ");
	printf("\n\n\tTRUTH TABLE:");
	int a[2] = { 0 , 1 };
	int i,NOT_OP;
	for(i = 0 ; i < 2 ; i++)
	{
		if(a[i] == 0)
			NOT_OP = 1;
		else
			NOT_OP = 0;
		
		printf("\n\n\t\t%d NOT IS  %d",a[i],NOT_OP);	
	}

}

												//NAND GATE
void NAND_Gate()
{
	printf("\n\n\n-------------------------------------------------------------------------------------------------------------NAND GATE---------------------------------------------------------------------------------------------\n\n");
	printf("\tDEFINATION");
	printf("\n\t\t NAND gate is constructed by combining the AND gate and the NOT gate (AND + NOT = NAND). OUTPUT OF NAND GATE IS COMPLEMENT OF AND GATE.");
	printf("\n\n\tlogical Equation:");
	printf("\n\t\t\tY = ~(A . B)");
	printf("\n\n\tTRUTH TABLE:");
	int a[4] = { 0 , 0 , 1 , 1 };
	int b[4] = { 0 , 1 , 0 , 1 };
	int i,NAND_OP;
	for(i = 0 ; i < 4 ; i++)
	{
		if(a[i] == 1 && b[i] == 1)
			NAND_OP = 0;
		else
			NAND_OP = 1;
		
		printf("\n\n\t\t%d NAND %d IS  %d",a[i],b[i],NAND_OP);	
	}

}

												//NOR GATE
void NOR_Gate()
{
	printf("\n\n\n-------------------------------------------------------------------------------------------------------------NOR GATE----------------------------------------------------------------------------------------------\n\n");
	printf("\tDEFINATION = ");
	printf("\n\t\tNOR gate is constructed by combining the OR gate and the NOT gate (OR + NOT = NOR ). OUTPUT OF NOR GATE IS COMPLEMENT OF OR GATE.");
	printf("\n\n\tlogical Equation:");
	printf("\n\t\t\tY = ~ (A + B)");
	printf("\n\n\tTRUTH TABLE:");
	int a[4] = { 0 , 0 , 1 , 1 };
	int b[4] = { 0 , 1 , 0 , 1 };
	int i,NOR_OP;
	for(i = 0 ; i < 4 ; i++)
	{
		if(a[i] == 0 && b[i] == 0)
			NOR_OP = 1;
		else
			NOR_OP = 0;
		
		printf("\n\n\t\t%d NOR %d IS  %d",a[i],b[i],NOR_OP);	
	}

}


                                        	 	//To convert binery number to Octal Number

void Binary_to_Octal()
{
	 	int octalNum[]={0,1,10,11,100,101,110,111};
 		long int binary,i,number,temp,octal=0,j=1;

 		printf("\n\n\t\tENTER BINARY NUMBER : ");
 		scanf("%ld",&binary);
		temp=binary;
		while(temp!=0)
 		{
  			number=temp%1000;
  			for(i=0;i<=7;i++)
  			{
  				if(octalNum[i] == number)
   				{
    				octal = octal+(i*j);
   				}
  			}j*=10;
  		temp/=1000;
 		}
 	printf("\n\t\tOCTAL NUMBER FOR GIVEN BINARY NUMBER IS %ld\n",octal);
	 		printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");			
}



												//To convert Binary number to Decimal number

void Binary_to_Ddecimal()
{
	int dec=0,temp,i,inc=0,binary;
	printf("\n\n\t\tENTER A BINARY NUMBER:\n");
	scanf("%d",&binary);
	temp=binary;
	while(temp!=0)
	{
		i=temp%10;
		dec=dec+(i*pow(2,inc));
		temp=temp/10;
		inc++;
	}
	printf("\n\t\tDECIMAL NUMBER OF %d IS %d\n",binary,dec);
	printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
}


												//To convert Binary number to Hexa-Decimal 
												
												
void Binary_to_HexaDecimal()

{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;
 
    printf("\n\n\t\tENTER BINARY NUMBER:\n");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("EQUIVALENT HEXADECIMAL VALUE: %lX", hexadecimalval);
    	printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
}
						
												//To convert octal to binary						
												
void Octal_to_Binary()												
{
	#define MAX  1000
    char octalnum[MAX];
    long i = 0;
 
    printf("\n\n\t\tENTER OCTAL NUMBER: \n");
    scanf("%s", octalnum);
    printf("\n\t\tEQUIVALENT BINARY VALUE: ");
    while (octalnum[i])
    {
        switch (octalnum[i])
        {
        case '0':
            printf("000"); 
			break;
			
        case '1':
            printf("001"); 
			break;
			
        case '2':
            printf("010"); 
			break;
			
        case '3':
            printf("011"); 
			break;
			
        case '4':
            printf("100"); 
			break;
			
        case '5':
            printf("101"); 
			break;
			
        case '6':
            printf("110"); 
			break;
			
        case '7':
            printf("111"); 
			break;
			
        default:
            printf("\n\n\t\t INVALID OCTAL DIGIT %c ", octalnum[i]);
            
        }
        i++;
    }

}												
												
												//To convert octal to decimal
												
void Octal_to_Decimal()											
{
 
    long int octal, decimal = 0;
    int i = 0;
 
    printf("\n\n\t\tENTER OCTAL NUMBER: \n");
    scanf("%ld", &octal);
    while (octal != 0)
    {
        decimal =  decimal +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    printf("\n\t\tEQUIVALENT DECIMAL VALUE: %ld",decimal);
    	printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
}	
											
											
												//To convert octal to hexa-decimal	
												
void Octal_to_HexaDecimal()
{
  int octal,rem,i=0;
  printf ("\n\n\t\tENTER OCTAL NUMBER: \n");
  scanf ("%d", &octal);
  char Hex[100];
    int decimal = 0, sem = 0;

    //Octal to decimal covert
  while(octal!=0)
  {
        decimal=decimal+(octal%10)*pow(8,sem);
        sem++;
        octal=octal/ 10;
  }
  //Decimal to Hexadecimal
   while(decimal!=0)
  	{
      	rem=decimal%16;
      //Convert Integer to char
      	if(rem<10)
        	Hex[i++]=rem+48;// 48 Ascii=0
      	else
      	  	Hex[i++]=rem+55;//55 Ascii=7
   			decimal/=16;
  	}

  		printf ("\n\t\tHEXA-DECIMAL NUMBER IS:");
  		int j;
		for(j=i-1;j>=0;j--)
    	printf("%c",Hex[j]);
		printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
}	

												//To convert decimal to binary

void Decimal_to_Binary()
{
    int number, n, remainder, binary = 0, place = 1;

    printf("\n\n\t\tENTER A DECIMAL NUMBER :\n");
    scanf("%d", &number);

    n = number;

    while (n > 0)
    {
        remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }
    
    printf("\n\t\tBINARY EQUIVALENT OF %d IS %d", number, binary);
	printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
}

												//To convert decimal to octal

void Decimal_to_Octal()
{
    int octal_Number[10], number, i, j;
    printf("\n\n\t\tENTER A DECIMAL NUMBER :\n ");
    scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        octal_Number[i] = number % 8;
        number = number / 8;
    }
    
    printf("\n\n\t\t EQUIVALENT OCTAL NUMBER OF A GIVEN NUMBER =  ");
    for(j = i - 1; j >= 0; j--)  
    {
        printf("%d", octal_Number[j]);
    }
	printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			    
}


												//To convert decimal to hexa-decimal
void Decimal_to_HexaDecimal()
{
    int dec_num, rem, i=0;
    char hex_num[50];
    printf("\n\n\t\tENTER A DECIMAL NUMBER :\n");
    scanf("%d", &dec_num);
    while(dec_num!=0)
    {
        rem = dec_num%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hex_num[i] = rem;
        i++;
        dec_num = dec_num/16;
    }
    	printf("\n\n\t\tEQUIVALENT VALUE IN HEXA-DECIMAL= ");
    for(i=i-1; i>=0; i--)
        {
			printf("%c", hex_num[i]);
		}
		printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			    
}

												//To convert hexa-decimal to binary
void HexaDecimal_to_Binary()
{
	#define MAX 1000
    char binary_Number[MAX],hexa_Decimal[MAX];
    long int i=0;

    printf("\n\n\t\tENTER ANY HEXA-DECIMAL NUMBER: \n");
    scanf("%s",hexa_Decimal);

    printf("\nEQUIVALENT BINARY VALUE: ");
    while(hexa_Decimal[i])
	{
         switch(hexa_Decimal[i])
		 {
             
			 case '0': 
			 	printf("0000"); 
				break;
             
			 case '1': 
			 	printf("0001"); 
				break;
             
			 case '2': 
			 	printf("0010"); 
				break;
             
			 case '3': 
			 	printf("0011"); 
				break;
             
			 case '4': 
			 	printf("0100"); 
				break;
             
			 case '5': 
			 	printf("0101"); 
				break;
             
			 case '6': 
			 	printf("0110"); 
				break;
             
			 case '7': 
			 	printf("0111"); 
				break;
             
			 case '8': 
                printf("1000"); 
                break;
             
			 case '9': 
                printf("1001"); 
                break;
             
			 case 'A': 
                printf("1010"); 
                break;
             
			 case 'B': 
                printf("1011"); 
                break;
             
			 case 'C': 
                printf("1100"); 
                break;
             
			 case 'D': 
                printf("1101"); 
                break;
             
			 case 'E': 
                printf("1110"); 
                break;
             
			 case 'F': 
                printf("1111"); 
                break;
             
			 case 'a': 
                printf("1010"); 
                break;
             
			 case 'b': 
                printf("1011"); 
                break;
             
			 case 'c': 
                printf("1100"); 
                break;
             
			 case 'd': 
                printf("1101"); 
                break;
             
			 case 'e': 
                printf("1110"); 
                break;
             
			 case 'f': 
                printf("1111"); 
                break;
                
             default:  printf("\n\n\t\tINVALID HEXADECIMAL DIGIT %c ",hexa_Decimal[i]);
         }
         i++;
    }
	printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
}


												//To convert hexa-decimal to octal
void HexaDecimal_to_Octal()
{
    int dec_num=0, rem, i=0, len=0, oct_num[30];
    char hex_num[10];
    
    printf("\n\n\t\tENTER ANY HEXADECIMAL NUMBER: \n");
    scanf("%s", hex_num);
    
	while(hex_num[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hex_num[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit");
        
        }
        dec_num = dec_num + (rem*pow(16, i));
        len--;
        i++;
    }
    i=0;
    while(dec_num != 0)
    {
        oct_num[i] = dec_num%8;
        i++;
        dec_num = dec_num/8;
    }
    printf("\nEquivalent Octal Value = ");
    for(i=(i-1); i>=0; i--)
        printf("%d", oct_num[i]);
}

												//To convert hexa-decimal to decimal
								
void HexaDecimal_to_Decimal()
{
    int dec_num=0, rem, i=0, len=0;
    char hexnum[20];
    
    printf("\n\n\t\tENTER ANY HEXADECIMAL NUMBER: \n");
    scanf("%s", hexnum);
    
	while(hexnum[i]!='\0')
    {
        len++;
        i++;
    }len--;
    i=0;
    
	while(len>=0)
    {
        rem = hexnum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
       
	    else
        {
            printf("\n\t\t\nYOY'VE ENTERED AN INVALID HEXADECIMAL DIGIT");
        }
        dec_num = dec_num + (rem*pow(16, i));
        len--;
        i++;
    }
    printf("\nEQUIVALENT DECIMAL VALUE = %d", dec_num);
	printf("\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
}

