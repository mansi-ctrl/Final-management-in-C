/*REAL ASTATE PROPERTY SOLUTIONS
AUTHOR BY:MANSI DOBARIYA AU1841131
         :DHATRI KAPURIYA AU1841129*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

void buy();
void sell();
void search();
void residential();
void commercial();
void buy();
void sell();
void password1();
void satellite();
void aabad();
void oasis();
void gaurav();
void suyog();
void murdhanya();
	void zodiac();	  
void bopal();
void thaltej();
void maninagar();
void ranip();
void choiceControl();

int main()
{
	int t,i;
	system("color 6F");

	for(t=0;t<100;t++)
	  {printf("=",t);
		Sleep(10);
      }
   printf("\n\t\t                  REAL ESTATE PROPERTY SOLUTIONS        \n");
    for(t=0;t<100;t++)
	  {printf("=",t);
		Sleep(10);
      }
    choiceControl();
	
}
 
 void choiceControl()
 {
 	printf("\n1. BUY PROPERTY\n2. SELL PROPERTY\n3. SEARCH\n\n  Enter your choice:\n");
	char choice;
	choice = getchar();
	 switch(choice)
	{
		case '1': 
			system("cls");
			buy();
			break;
		case '2':
			system("cls");
			sell();
			break;
		case '3':
			system("cls");
		    search();
			break;
		default:
			choiceControl();
	}
 }
 
 void buy()
 {
 
 	int t,i;
    char username[10], password[100],choice;
    for(t=0;t<100;t++)
    {
 	printf("*");
 	Sleep(10);
    }
 	printf("\n==> RESIDENTIAL OPTIONS\n");
	printf("\n==> COMMERCIAL OPTIONS\n\n\n");
	printf("\n\n\tpress b for previous menu\n\n\tPress r for residential\n\n\tPress c for commercial\n");
	
	choice=getche();
	system("cls");
	switch(choice)
	{
		case 'r':
			residential();break;
			case 'b':
				main();break;
		case 'c':
		    commercial();break;
	 sleep(40);
	    default:
	    	buy();
	  }
}
    void residential()
 {
    char area[10],choice;
    printf("\nWHICH  AREA  WILL  YOU  PREFER?\n\n");
	printf("  1. SATELLITE\n \n2. BOPAL\n \n3. THALTEJ\n \n4. MANINAGAR\n \n5. RANIP\n\n\n Enter your choice\n\n\n\npress 0 for previous menu");
    choice=getche();
    system("cls");
    switch(choice)
    {
    	case '0':
    		buy();break;
    	case '1':
    		satellite();break;
    	case '2':
    		bopal();break;
   		case '3':
    		thaltej(); break;
		case '4':
    		maninagar();break;
    	case '5':
    		ranip();break;
    		default :
			residential();				
    }
}


	  void satellite()
	  {
	  	
	int choice,n1;
	  	main:
	  	printf("\nHow many rooms will you prefer?\n\nEnter your choice\n");
	  	scanf("%d",&n1);
	  	system("cls");
	  	if(n1>=5)
	  	{
	  		printf("\nUpto 4 bhk only\n");
	  		goto main;
	  	}
	  
	  	
	  	if(n1==1)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==2)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==3)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==4)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	printf("\nEnter your choice\n");
	  	choice=getche();
	  	system("cls");
	  	switch(choice)
	  	{
	  		case '1':
	  			aabad();break;
	  		case '2':
			    oasis();break;
			case '3':
			     gaurav();break;
			case '4':
			    suyog();break;
			case '5':
			    murdhanya();break;
			case '6':
			    zodiac();break;
			default:
			satellite();		
	  	}
	  	
	  	
	  }
	
	  
	  void aabad()
	  {	
	    printf("Available floors:");
	      FILE *fp1;
	      int t;
	  		char ch;
	  		fp1=fopen("F:/ICP project/project2.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp1);
				printf("%c",ch);
	  	    }
	     	fclose(fp1);
	     	printf("\n\n");
	     	for(t=0;t<100;t++)
	        {
			printf("=",t);
		    Sleep(10);
            }
            printf("\n\t\t                  THANKYOU        \n\t\t\t\t~DHATRI AND MANSI\n");
            for(t=0;t<100;t++)
	  {
	     printf("=",t);
		Sleep(10);
      }

	     	
	  }
	  
     void oasis()
     {
     	int t;
	    printf("Available floors:");
	      FILE *fp1;
	  		char ch;
	  		fp1=fopen("F:/ICP project/project2.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp1);
				printf("%c",ch);
	  	    }
	     	fclose(fp1);
	     	printf("\n\n");
	     	for(t=0;t<100;t++)
	        {
			printf("=",t);
		    Sleep(10);
            }
            printf("\n\t\t                  THANKYOU        \n\t\t\t\t~DHATRI AND MANSI\n");
            for(t=0;t<100;t++)
	  {
	     printf("=",t);
		Sleep(10);
      }

     }
     void  gaurav()
     {
     	
	    printf("Available floors:");
	      FILE *fp1;
	      int t;
	  		char ch;
	  		fp1=fopen("F:/ICP project/project2.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp1);
				printf("%c",ch);
	  	    }
	     	fclose(fp1);
	     	printf("\n\n");
	     	for(t=0;t<100;t++)
	        {
			printf("=",t);
		    Sleep(10);
            }
            printf("\n\t\t                  THANKYOU        \n\t\t\t\t~DHATRI AND MANSI\n");
            for(t=0;t<100;t++)
	  {
	     printf("=",t);
		Sleep(10);
      }

     }
     void suyog()
     {
     	int t;
	    printf("Available floors:");
	      FILE *fp1;
	  		char ch;
	  		fp1=fopen("F:/ICP project/project2.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp1);
				printf("%c",ch);
	  	    }
	     	fclose(fp1);
	     	printf("\n\n");
	     	for(t=0;t<100;t++)
	        {
			printf("=",t);
		    Sleep(10);
            }
            printf("\n\t\t                  THANKYOU        \n\t\t\t\t~DHATRI AND MANSI\n");
            for(t=0;t<100;t++)
	  {
	     printf("=",t);
		Sleep(10);
      }

     }
     void murdhanya()
     {
     	int t;
	    printf("Available floors:");
	      FILE *fp1;
	  		char ch;
	  		fp1=fopen("F:/ICP project/project2.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp1);
				printf("%c",ch);
	  	    }
	     	fclose(fp1);
	     	printf("\n\n");
	     	for(t=0;t<100;t++)
	        {
			printf("=",t);
		    Sleep(10);
            }
            printf("\n\t\t                  THANKYOU        \n\t\t\t\t~DHATRI AND MANSI\n");
            for(t=0;t<100;t++)
	  {
	     printf("=",t);
		Sleep(10);
      }

     }
     void zodiac()
     {
     	int t;
	    printf("Available floors:");
	      FILE *fp1;
	  		char ch;
	  		fp1=fopen("F:/ICP project/project2.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp1);
				printf("%c",ch);
	  	    }
	     	fclose(fp1);
	     	printf("\n\n");
	     	for(t=0;t<100;t++)
	        {
			printf("=",t);
		    Sleep(10);
            }
            printf("\n\t\t                  THANKYOU        \n\t\t\t\t~DHATRI AND MANSI\n");
            for(t=0;t<100;t++)
	  {
	     printf("=",t);
		Sleep(10);
      }

     }

	  void bopal()
	  {
	  	
	  	int n1,choice;
	  	main1:
	  	printf("\nHow many rooms will you prefer?\n\nEnter your choice\n");
	  	scanf("%d",&n1);
	  	if(n1>=5)
	  	{
	  		printf("\nUpto 4 bhk only\n");
	  		goto main1;
	  	}
	  	if(n1==1)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==2)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}if(n1==3)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==4)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	
	  	 printf("\nEnter your choice\n");
	  	choice=getche();
	  	system("cls");
	  	switch(choice)
	  	{
	  		case '1':
	  			aabad();break;
	  		case '2':
			    oasis();break;
			case '3':
			     gaurav();break;
			case '4':
			    suyog();break;
			case '5':
			    murdhanya();break;
			case '6':
			    zodiac();break;
		    default:
		    	bopal();
		}
	}
	  void thaltej()
	  {
	  		int n1,choice;
	  	main2:
	  	printf("\nHow many rooms will you prefer?\n\nEnter your choice\n");
	  	scanf("%d",&n1);
	  	
	  	if(n1>=5)
	  	{
	  		printf("\nUpto 4 bhk only\n");
	  		goto main2;
	  	}
	  	if(n1==1)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==2)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==3)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==4)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	printf("Enter your choice:");
	  	choice=getche();
	  	system("cls");
	  	switch(choice)
	  	{
	  		case '1':
	  			aabad();break;
	  		case '2':
			    oasis();break;
			case '3':
			     gaurav();break;
			case '4':
			    suyog();break;
			case '5':
			    murdhanya();break;
			case '6':
			    zodiac();break;
			  default:  
			    thaltej();
        }	
	  }
	  void maninagar()
	  {
	  		int n1,choice;
	  	main3:
	  	printf("\nHow many rooms will you prefer?\n\nEnter your choice\n");
	  	scanf("%d",&n1);
	  	if(n1>=5)
	  	{
	  		printf("\nUpto 4 bhk only\n");
	  		goto main3;
	  	}
	  	if(n1==1)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==2)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==3)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==4)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	printf("Enter your choice:");
	    choice=getche();
	  	system("cls");
	  	switch(choice)
	  	{
	  		case '1':
	  			aabad();break;
	  		case '2':
			    oasis();break;
			case '3':
			     gaurav();break;
			case '4':
			    suyog();break;
			case '5':
			    murdhanya();break;
			case '6':
			    zodiac();break;
			default:
				maninagar();
	  	
	  }
}
	   void ranip()
	   {
	   		int n1,choice;
	  	main4:
	  	printf("\nHow many rooms will you prefer?\n\nEnter your choice\n");
	  	scanf("%d",&n1);
	  	if(n1>=5)
	  	{
	  		printf("\nUpto 4 bhk only\n");
	  		goto main4;
	  	}
	  if(n1==1)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==2)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==3)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	if(n1==4)
	  
	  	{
	  		FILE *fp;
	  		char ch;
	  		fp=fopen("F:/ICP project/project.txt","r");
	  	    while (ch!=EOF)
	  		{
	  			ch=fgetc(fp);
				printf("%c",ch);
	  	    }
	     	fclose(fp);
	  	}
	  	printf("Enter your choice:");
	  	choice=getche();
	  	system("cls");
	  	switch(choice)
	  	{
	  		case '1':
	  			aabad();break;
	  		case '2':
			    oasis();break;
			case '3':
			     gaurav();break;
			case '4':
			    suyog();break;
			case '5':
			    murdhanya();break;
			case '6':
			    zodiac();break;
		    default :
		    	ranip();
	  }
 }
	   
	  void sell()
	  {
      	int t,i;
	  
	  for(t=0;t<100;t++)
         {
         	printf("*");
        	Sleep(10);
         }
            printf("\t\t\t\t\t\t\t  LOGIN HERE\t\t\t\n");
      for(t=0;t<100;t++)
         {
 	         printf("*");
 	         Sleep(10);
         }
      password1();
      for(t=0;t<100;t++)
	  {
	  printf("=",t);
		Sleep(10);
      }
      printf("\n\n             Enter your property details here                 \n");
      for(t=0;t<100;t++)
	  {
	  printf("=",t);
		Sleep(10);
      }
      
      FILE *fp;
      char str[80];
      fp = fopen("sell.txt", "w+");
      printf("\n\n\tType of property:");
      fflush(stdin);
       gets(str);
       fprintf(fp, "%s",str);
       printf("\n\tName of your property:");
       gets(str);
       fprintf(fp, "%s",str);
       printf("\n\tLocation of property:");
       gets(str);
       fprintf(fp, "%s",str);
       printf("\n\tAddress of the property:");
       gets(str);
       fprintf(fp, "%s",str);
       printf("\n\tProperty specifications:");
       gets(str);
       fprintf(fp, "%s",str);
       printf("\n\tRate of your property:");
       gets(str);
       fprintf(fp, "%s",str);
       printf("\n\tYour details has been stored");;
       fclose(fp);
       printf("\n\n");
	     	for(t=0;t<100;t++)
	        {
			printf("=",t);
		    Sleep(10);
            }
            printf("\n\t\t                  THANKYOU        \n\t\t\t\t~DHATRI AND MANSI\n");
            for(t=0;t<100;t++)
	  {
	     printf("=",t);
		Sleep(10);
      }

  
   return;

}
void password1()
{
	    int i;    
 	char ch1, username[10], password[100];
 printf("\n\nEnter your Username:");
 scanf("%s", username);
 
  printf("\nEnter the password <any 8 characters>: ");

     for(i=0; i<10; i++)
     {
             ch1=getch();
             password[i]=ch1;
      
             if(ch1!=13)     
                   printf("*");
             if(ch1 == 13)
                   break;
      }
      password[i]='\0';
     // printf("\n%s", password);

      system("cls");
      if(strcmp(username,"user")==0 && strcmp(password,"guest")==0)
       printf("\n Login successful..\n");
      else
      {
      printf("Invalid Username/Password.\n\n");
      password1();
      }
 
}
 void search()
 {
 	 FILE *f1 , *fopen();
    int ch,t;
    
    char str1[2000], *token,n[15];
    
    const char s[10] = " ";
    printf("-satellite\n-bopal\n-maninagar\n-ranip\n-thaltej\n\n\tEnter location:");
    scanf("%s",&n);
    system("cls");
    f1 = fopen("search1.txt", "r");
    

    while (fgets(str1, 200, f1) != NULL)
    {        token = strtok(str1, s);
        
                if (strcmp(token, n) == 0)
                {
                    while(token != NULL) {
                    	printf(" %s ", token);
                    	token=strtok(NULL," ");
                    }
                    printf("\n");
                    
                } 
    }

    fclose(f1);
    printf("\n");
    printf("\n\n");
	     	for(t=0;t<100;t++)
	        {
			printf("=",t);
		    Sleep(10);
            }
            printf("\n\t\t                  THANKYOU        \n\t\t\t\t~DHATRI AND MANSI\n");
            for(t=0;t<100;t++)
	  {
	     printf("=",t);
		Sleep(10);
      }

   
 }


void commercial()

{
	
	

}


