#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct book_f
{
   char name[10];
   int pages;
   float price;	
};
struct book_f f[10];

struct book_s
{
   char name[10];
   int pages;
   float price;	
};
struct book_s s[10];

struct book_t
{
   char name[10];
   int pages;
   float price;	
};
struct book_t t[10];

struct student_f                  ////////////////          STUDENY FY          //////////////////////////
{
	char name[10];
	int rollno;
	char div;
};
struct student_f fs[10]; 

struct student_s                   ////////////////          STUDENY SY          //////////////////////////   
{ 
   char name[10];
   int rollno;
   char div;
};
struct student_s ss[10];        

struct student_t                  ////////////////          STUDENY TY          ////////////////////////// 
{
	char name[10];
	int rollno;
	char div;
};
struct student_t ts[10];


void insert();
void Display();

int main()
{
  int choice;
   
puts("                   A2 ---> LIBRARY MANAGEMENT SYSTEM");

while(1)
{
	puts("\n");
	
	puts(" 1-->INSERT  \t 2-->DELETE     ");
	puts("\n \t 3-->SEARCH  \t  4-->DISPLAY \n");
	puts("\t      5-->BOOK MANAGEMENT  \t 6-->COUNT");
	puts("\n");
	
	
	printf("ENTER CHOICE= ");
	scanf("%d",&choice);
	
 	switch(choice)
	{
		case 1:
		     insert();
		     break;
		     
		     	case 2: 
		     	//Delete();
		     	break;
		     
		     		case 3: 
		     		//Search();
		     		break;
		     
		    			case 4: 
		     		     	Display();
		     			break;
		     
		    				case 5: 
		     				//Book Managment();
		    				break;
		     
		    					case 6:
		  						//Count();
		     					break;
		     
		                         case 10:
		                         	printf("THANK YOU J2\n");
		                         	return 0;
		     


	}
	
  }

	
 return 0;
}
/////////////////////////////////////////...FUNCTIONS...//////////////////////////////////////////////////////////////////////


void insert()
{
  
             int user;              //Student when came in
             int user1;             // Student selecting fy sy ty
             int BY_BOOK=1;
             int BY_STUDENT=2;
             int FY=1;
             int SY=2;
             int TY=3;
  
	
	printf("PRESS ABOVE OPTIONS TO INSERT BY BOOK OR BY STUDENT\n");
	puts("1: BY BOOK ");
	puts("2: BY STUDENT ");
	 printf("ENTER CHOICE = ");	
	scanf("%d",&user);               //Student when came in
	
	if(user==BY_BOOK)
	{
		printf("PRESS ABOVE OPTION TO INESERT BOOK IN FY,SY,TY\n");
		{
		    puts("1: FY ");
		    puts("2: SY ");
			puts("3: TY ");
		}	
		    printf("ENTER CHOICE (FY SY TY)= ");	
		    scanf("%d",&user1);
		    if(user1==FY)
		    {
		    	printf("YOU ARE INSERTING BOOK IN FY\n");                    //INSERTING BOOK IN FY
		    
		    	{
		    		for(int i=0;i<1;i++)
		    		{
		    			scanf("%s %d %f",&f[i].name,&f[i].pages,&f[i].price);
					}
				}
			}
			
			else if(user1==SY)
			{
				printf("YOU ARE INSERTING BOOK IN SY\n");          //INSERTING BOOK IN SY
				{
		    		for(int i=0;i<1;i++)
		    		{
		    			scanf("%s %d %f",&s[i].name,&s[i].pages,&s[i].price);
					}
				}
			}
			
			else 
			{
				  	printf("YOU ARE INSERTING BOOK IN TY\n");          //INSERTING BOOK IN TY
				{
		    		for(int i=0;i<1;i++)
		    		{
		    			scanf("%s %d %f",&t[i].name,&t[i].pages,&t[i].price);
					}
				}
			}
	}
	
	//*****************************************INSERTING A STUDENT********************************************************//
	else if(user==BY_STUDENT)
	{
		int st_user;
		int St_FY=1;
		int St_SY=2;
		int St_TY=3;
		printf("YOU ARE INSERTING STUDENT\n");
		puts("PRESS ABOVE OPTIONS TO INSERT IN FY SY TY");
		puts("1 ::: FY ");
		puts("2 ::: SY ");
		puts("3 ::: TY ");
		printf("ENTER CHOICE STUDENT (FY SY TY) =");
		scanf("%d",&st_user);
		
		if(st_user==St_FY)
		{
			printf("YOU ARE INSERTING STUDENT IN << here FY  >>\n");               //   INSERTING A STUDENT IN FY
			for(int i=0;i<1;i++)
			{
				scanf("%s %d %c",&fs[i].name,&fs[i].rollno,&fs[i].div);
			}
			return;
		}
		
		else if(st_user==St_SY)                                                    //   INSERTING A STUDENT IN FY
		{
			printf("YOU ARE INSERTING STUDENT IN <<SY>>\n");
			for(int i=0;i<1;i++) 
			{
				scanf("%s %d %c",&ss[i].name,&ss[i].rollno,&ss[i].div);
			}
			return;
		}
		
		else if(st_user==St_TY)                                                   //   INSERTING A STUDENT IN FY
		{
			printf("YOU ARE INSERTING STUDENT IN <<TY>>\n");
			for(int i=0;i<1;i++)
			{
				scanf("%s %d %c",&ts[i].name,&ts[i].rollno,&ts[i].div);
			}
			return;
		}
	}
	
	
	return;
}
	

//      DISPLAY    //
void Display()
{
	int user1;
	int user;
	int FY = 1;
	int SY = 2;
	int TY = 3;
	int All_Book=4;
	int By_Book=1;
	int By_Student=2;
	printf("YOU ARE IN DISPLAY...\n");
	puts("PRESS ABOVE OPTIONS TO DISPLAY BY BOOK OR STUDENT");
	puts(" 1 ::: BY BOOK ");
	puts(" 2 ::: BY STUDENT ");
	
	printf("ENTER CHOICE = ");
	scanf("%d",&user1);
	
	if(user1==By_Book)
	{
		printf("DISPLAYING BY BOOK \n");
		puts("1 ::: FY");
		puts("2 ::: SY");
		puts("3 ::: TY");
		puts("4 ::: ALL");
		
		printf("ENTER CHOICE (FY SY TY =");
		scanf("%d",&user);
		
		if(user==FY)
		{
			printf("DISPLAYING BY BOOK IN <<FY>>");
			for(int i=0;i<1;i++)
			{
				printf("%s %d %.1f",f[i].name,f[i].pages,f[i].price);
			}
			return;
		}
		
	    else if(user==SY)
		{
			printf("DISPLAYING BY BOOK IN <<SY>>");
			for(int i=0;i<1;i++)
			{
				printf("%s %d %.1f",s[i].name,s[i].pages,s[i].price);
			}
			return;
		}
		else if(user==TY)
		{
			printf("DISPLAYING BY BOOK IN <<TY>>");
			for(int i=0;i<1;i++)
			{
				printf("%s %d %.1f",t[i].name,t[i].pages,t[i].price);
			}
			return;
		}
		else if(user==All_Book)                                    //ALL BOOKS FY SY TY
		{	
		     printf("DISPLAYING ALL FY SY TY BOOKS.......\n");
			for(int i=0;i<1;i++)
			{
				printf("%s %d %.1f",f[i].name,f[i].pages,f[i].price);
		     	printf("\n");
		    	printf("%s %d %.1f",s[i].name,s[i].pages,s[i].price);
			    printf("\n");
		     	printf("%s %d %.1f",t[i].name,t[i].pages,t[i].price);
			}		
		}
		return;
	}
	
	else if(user1==By_Student);
	{
		int user_st;
		int FY = 1;
		int SY = 2;
		int TY = 3;
		int All_Student = 4;
		printf("DISPLAYING BY STUDENT \n");
		puts("1 ::: FY");
		puts("2 ::: SY");
		puts("3 ::: TY");
		puts("4 ::: ALL");
		printf("ENTER CHOICE (FY SY TY)\n");
		scanf("%d",&user_st);
		
		if(user_st == FY)
		{
			printf("YOU ARE DISPLAYING << FY >> STUDENT LIST\n");
			for(int i=0;i<1;i++)
			{
				printf("%s %d %c",fs[i].name,fs[i].rollno,fs[i].div);
			}
			return;
		}
		
		else if(user_st==SY)
		{
			printf("YOU ARE DISPLAYING << SY >> STUDENT LIST\n");
			for(int i=0;i<1;i++)
			{
				printf("%s %d %c",ss[i].name,ss[i].rollno,ss[i].div);
			}
			return;
		}
		
		else if(user_st==TY)
		{
			printf("YOU ARE DISPLAYIING << TY >> STUDENT LIST\n");
			for(int i=0;i<1;i++)
			{
				printf("%s %d %c",ts[i].name,ts[i].rollno,ts[i].div);
			}
			return;
		}
		
		else if(user_st == All_Student)
		 {
			printf("YOU ARE DISPLAYING (ALL FY SY TY) STUDENTS.....\n ");           // DISPLAYING ALL STUDENTS DATA.
			
			for(int i=0;i<1;i++)
			{
				printf("%s %d %c",fs[i].name,fs[i].rollno,fs[i].div);
				printf("\n");
				printf("%s %d %c",ss[i].name,ss[i].rollno,ss[i].div);
				printf("\n");
				printf("%s %d %c",ts[i].name,ts[i].rollno,ts[i].div);
			}
		 } 
		return;
		
	}
		
	
	
	return;
	
}


















