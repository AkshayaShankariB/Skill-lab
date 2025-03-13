#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
 char s[20000];
 printf("Welcome to the VCET puttur..\nHow can I help you?\n");
 while(1)
 {
 
 scanf("%[^\n]%*c",s);
   if(strcmp(s,"Available branches")==0)
   {
   printf("Available branches are:\n");
   printf("1.Electronics and communication Engineering\n2.Computer Science and Engineering\n3.Civil Engineering\n4.Mechanical Engineering\n5.Computer science with data science Engineering\n6.Artificial Intelligence and Machine Learning\n");
   continue;
   }
   else if(strcmp(s,"Where the college is located?")==0)
   {
   printf("Nehrunagar,Puttur\n");
   continue;
   }
   else if(strcmp(s,"Is the college has college bus facility?")==0)
   {
   printf("Yes\n");
   continue;
   }
   else if(strcmp(s,"Do they have hostel facility?")==0)
   {
   printf("Yes\n");
   continue;
   }
   else if(strcmp(s,"VCET means?")==0)
   {
    printf("Vivekananda College of Engineering and Technology\n");
    continue;
   }
   else if(strcmp(s,"Tell me more about the college")==0)
   {
   printf("For further information visit vcetputtur.ac.in\n");
   continue;
   }
   else if(strcmp(s,"How many seats are available in CS branch?")==0)
   {
   printf("120\n");
   continue;
   }
    else if(strcmp(s,"How many seats are available in CV branch?")==0)
   {
   printf("20\n");
   continue;
   }
   else if(strcmp(s,"How many seats are available in MC branch?")==0)
   {
   printf("30\n");
   continue;
   }
   else if(strcmp(s,"How many seats are available in AI branch?")==0)
   {
   printf("60\n");
   continue;
   }
   else if(strcmp(s,"How many seats are available in CD branch?")==0)
   {
   printf("60\n");
   continue;
   }
   else if(strcmp(s,"How many seats are available in EC branch?")==0)
   {
   printf("60\n");
   continue;
   }
   else if(strcmp(s,"Is there any canteen in the college?")==0)
   {
   printf("Inside the college campus there are 3 canteens!\n");
   continue;
   }
   else if(strcmp(s,"Thank you for the information")==0)
   {
   printf("You're most welcome!,If you have any other queries let me know...\n");
   continue;
   }
   else if(strcmp(s,"Can I get the contact details of the college?")==0)
   {
   printf("Of course! this is the email-ID and tel.ph. number of the College .... \n********@gmail.com\n1234567890\n");
   continue;
   }
   else if(strcmp(s,"Can I get the college website?")==0)
   {
   printf("vcetputtur.ac.in");
   continue;
   }
   else if(strcmp(s,"How can I get into the college?")==0)
   {
   printf("There are two options.. one is through CET exams another is through management seats\n");
   continue;
   }
   else if(strcmp(s,"What is your opinion about the college?")==0)
   {
   printf("Overall it a nice college with good surroundings..\n");
   continue;
   }
   else if(strcmp(s,"How much would you rate the college?")==0)
   {
   printf("4.8/5\n");
   continue;
   }
   else if(strcmp(s,"How is the infrastructure of the college?")==0)
   {
   printf("You can get the campus photos in the official college website\n");
   continue;
   }
   else if(strcmp(s,"Do they support the activities other than studies?")==0)
   {
   printf("Yes..they have various groups for sports,cultural,technical and for others also..you can contact the head of the respective groups for further information\n"); 
   continue;
   }
   else if(strcmp(s,"Bye")==0)
   {
   printf("Good Bye!,See you next time.\n");
   exit(0);
   }
   else
   printf("I'm Busy with other queries..please try again later..\n");        
   }
  } 
   
   
