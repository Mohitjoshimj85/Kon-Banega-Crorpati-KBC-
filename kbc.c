#include<stdio.h>
#include<conio.h>
#include<windows.h>

#include<time.h>
void main()
    {
        system("cls");
	int i,a,b,j;
	char x,y;
    int n=0;
		printf("WELCOME TO THE GAME 'KAUN BANEGA CROREPATHI'.\nIt contains 12 question in each carries 1 LAKHS\n");
    	printf("if you are ready then enter any charactor or digit or if you are not ready then enter 'N'=");
    	scanf("%c",&x);
    	if(x!='N'){
			printf("for giving the ans enter the serial no. of your answer.");
    	    for(i=1;i<=12;i++)
		    {
    	        switch(i)
		        {
    	            case 1:
    	            system("COLOR 4D");
    	            system("cls");
				    printf("\n\n\n\n Question1. who is the Prime Minister of india? \n(1) Mr. JETHA LAL                   (2) Mr. MUNNA BHAI MBBS \n(3) Mr. OGGY ADITYANATH             (4) Mr. NARENDRA DAMODAR DAS MODI\n");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==4)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs Your Next Question is ",i);
    	                
                        Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        
                        Sleep(5);
				    }
				    else
				    {
				    	printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300); 
                        Beep(500,500);
                        i=50;
				    }
        
				    break;

    	            case 2:
    	            system("COLOR 3F");
    	            system("cls");
				    printf("\n\n\n\n Question2. Who is the richest person in the world at 2022? \n(1) Mr. BABU BHAIYA                 (2) Mr. KAMAL GHANSALA \n(3) Mr. ELON MUSK                   (4) Mr. RONALDO\n");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==3)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs Your Next Question is ",i);
    	                Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
				    }
				    else
				    {
				    	printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;

    	            case 3:
    	            system("COLOR 4D");
    	            system("cls");
				    printf("\n\n\n\n Question3. What is the pH value of the human body? \n(1) 9.2 to 9.8                      (2) 7.0 to 7.8\n(3) 6.1 to 6.3                      (4) 5.4 to 5.6\n");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==2)
				    {
			    		printf("You have entered the correct answer Now you have won Rs.%dlakhs Your Next Question is ",i);
				 	    Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
    	            }
				    else
				    {
				    	printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;

        	        case 4:
        	        system("COLOR 5F");
        	        system("cls");
				    printf("\n\n\n\n Question4. Which of the following Himalayan regions is called Shivalik's? \n(1) Upper Himalayas                 (2)Lower Himalayas\n(3) Outer Himalayas                 (4)Inner Himalayas\n");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==3)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs Your Next Question is ",i);
				        Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
        	        }
				    else
				    {
				    	printf(" You have entered the wrong answer you are very near to earn 4 lakhs You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;

        	        case 5:
        	        system("COLOR 7A");
        	        system("cls");
				    printf("\n\n\n\n Question5. Which of the given cities is located on the bank of river Ganga? \n(1) Patna                           (2) Gwalior\n(3) Bhopal                          (4) Mathura\n");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==1)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs \n ",i);
        	            Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
				    }
				    else
				    {
				    	printf(" You have entered the wrong answer you are good player learn more and try next time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;

					case 6 :
        	        system("COLOR 9E");
        	        system("cls");
				    printf("\n\n\n\n Question6. You're 4th place right now in a race. What place will you be in when you pass the person in 3rd place?\n(1) 1st                             (2) 2nd\n(3) 3rd                             (4) None of the above\n");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==3)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs \n ",i);
        	            Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);

				    }
				    else
				    {
				    	printf(" You have entered the wrong answer you are good player learn more and try next time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;

					case 7 :
        	        system("COLOR 6A");
        	        system("cls");
				    printf("\n\n\n\n Question7. How many 0.5cm slices can you cut from a bread that is 25cm long?\n(1) 50                              (2) 23\n(3) 39                              (4) none of the aboce.");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==1)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs \n   ",i);
        	            Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
				    }
				    else
				    {
				    	printf(" You have entered the wrong answer you are good player learn more and try next time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;

					case 8 :
        	        system("COLOR 5E");
        	        system("cls");
				    printf("\n\n\n\n Question8. The answer is really big. \n(1) THE ANSWER.                     (2) Really big. \n(3) An elephant.                    (4) The data given is insufficient.");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==2)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs \n  ",i);
        	            Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
				    }
				    else
				    {
				    	printf(" You have entered the wrong answer you are good player learn more and try next time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);i=50;

				    }
				    break;
					
					case 9 :
        	        system("COLOR 6D");
        	        system("cls");
				    printf("\n\n\n\n Question9. Divide 30 by half and add ten.  \n(1) 40.5                            (2) 50\n(3) 70                              (4) I KNOW THIS IS A TRICK QUESTION, so NONE. Ha!");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==3)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs \n   ",i);
        	            Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
				    }
				    else
				    {
				    	printf(" You have entered the wrong answer you are good player learn more and try next time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;
					
					case 10 :
        	        system("COLOR 3B");
        	        system("cls");
				    printf("\n\n\n\n Question10. There are two clocks of different colors: The green clock is broken and doesn't run at all, but the yellow clock loses one second every 24 hours. Which clock is more accurate?   \n(1) The green clock                 (2) The yellow clock\n(3) Neither                         (4) Both");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==1)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs \n  ",i);
        	            Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
				    }
				    else
				    {
				    	printf(" You have entered the wrong answer you are good player learn more and try next time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;
  
					case 11 :
        	        system("COLOR 8B");
        	        system("cls");
				    printf("\n\n\n\n Question11. If a leaf falls to the ground in a jungle, and no one hears it, will it make a sound?   \n(1) Yes                                 (2) No\n(3) Depends on how heavy the leaf was.  (4) Depends on the place it landed.");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==1)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs \n   ",i);
        	            Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);

				    }
				    else
				    {
				    	printf(" You have entered the wrong answer you are good player learn more and try next time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;

					case 12 :
        	        system("COLOR 2D");
        	        system("cls");
				    printf("\n\n\n\n Question12. There are 45 mangoes in your basket. You take three out of the basket. How many mangoes are left? \n(1) 3                               (2)42\n(3) 45                              (4) I don't eat mangos!");
				    printf("\n\n Your Ans is - ");
					scanf("%d",&n);
				    if(n==3)
				    {
				    	printf("You have entered the correct answer Now you have won Rs.%dlakhs \n you won the match. money will deposit in your account within a week  ",i);
        	            Beep(350,400);
                        Beep(400,300);
                        Beep(500,50);
                        Beep(200,800);
                        sleep(5);
				    }
				    else
				    {
				    	printf(" You have entered the wrong answer you are good player learn more and try next time You have earned Rs.%dlakhs",i-1);
				    	Beep(500,300);
                        Beep(500,500);
                        i=50;
				    }
				    break;

        	        default:
				    break;
			    }
        	}
	    }
    	else if(x=='N'){
        	system("COLOR 40");
        	printf ("you are not intrested");
            Beep(550,400);
            Beep(800,300);
            Beep(750,130);
            Beep(200,1300);
    	}

    	printf("\n\nTHE END\n\n\n\n\n\n");
        
		printf ("THANKU FOR PLAYING .\n\n ");
		Beep(550,400);
        getch();
	
}




