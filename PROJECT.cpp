#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.1416

void mouse()
{
    POINT cursorPosition;

    while(1)
    {
        system("cls");
        GetCursorPos(&cursorPosition);
        printf("%d\n",cursorPosition.x);
        printf("%d\n",cursorPosition.y);
    }

}

int fact(int x)
{
	if(x==0)
		return 1;

	return  x*fact(x-1);
}

float add(double a,double b)
{
	return a+b;
}

float sub(double a,double b)
{
	return a-b;
}

float mul(double a,double b)
{
	return a*b;
}

float div(double a,double b)
{
	return a/b;
}

float sine(float x)
{
	return (sin (x*PI/180));
}

float cosine(float x)
{
	return (cos (x*PI/180));
}

float tangent(float x)
{
	return (tan(x));
}

float sineh(float x)
{
	return (sinh(x));
}

float cosineh(float x)
{
	return (sinh(x));
}

float tangenth(float x)
{
	return (sinh(x));
}

float logten(float x)
{
	return (log10(x));
}

float squareroot(float x)
{
	return (sqrt(x));
}

float exponent(float x)
{
	return(exp(x));
}

float power(float x, float y)
{
	return (pow(x,y));
}


int main()
{
    initwindow(500,500,"",true,true);
    int i,s,t;
    s=0,t=0;
    char p;
    setbkcolor(RED);
    cleardevice();

    line(0,100,500,100);

    line(0,200,500,200);

    line(0,300,500,300);

    line(0,400,500,400);


    line(100,0,100,400);

    line(200,0,200,400);

    line(300,0,300,400);

           line(400,0,400,400);
           setfillstyle(5,10);
           ///setbkcolor(10);
           ///floodfill(100,100,10);


                ///sprintf(p,"%d",i);
         /// setcolor(BLUE);
           settextstyle(4,HORIZ_DIR,8);
           outtextxy(10,10,"1");
           settextstyle(4,HORIZ_DIR,8);
           outtextxy(110,10,"2");
           settextstyle(4,HORIZ_DIR,8);
           outtextxy(210,10,"3");
           settextstyle(4,HORIZ_DIR,8);
           outtextxy(310,10,"4");
           settextstyle(4,HORIZ_DIR,8);
           outtextxy(410,10,"5");
           settextstyle(4,HORIZ_DIR,8);
           outtextxy(10,110,"6");
           settextstyle(4,HORIZ_DIR,8);
           outtextxy(110,110,"7");
            settextstyle(4,HORIZ_DIR,8);
           outtextxy(210,110,"8");
            settextstyle(4,HORIZ_DIR,8);
           outtextxy(310,110,"9");
            settextstyle(4,HORIZ_DIR,8);
           outtextxy(410,110,"0");
            settextstyle(4,HORIZ_DIR,8);
           outtextxy(10,210,"+");
            settextstyle(4,HORIZ_DIR,8);
           outtextxy(110,210,"-");
            settextstyle(4,HORIZ_DIR,8);
           outtextxy(210,210,"X");
            settextstyle(4,HORIZ_DIR,8);
           outtextxy(330,210,"/");
            settextstyle(4,HORIZ_DIR,8);
           outtextxy(405,210,"%");
            settextstyle(4,HORIZ_DIR,4);
           outtextxy(10,310,"_/");
            settextstyle(4,HORIZ_DIR,4);
           outtextxy(110,330,"sin");
            settextstyle(4,HORIZ_DIR,4);
           outtextxy(210,330,"cos");
            settextstyle(4,HORIZ_DIR,4);
           outtextxy(310,330,"tan");
            settextstyle(4,HORIZ_DIR,4);
           outtextxy(410,330,"pow");
           ///floodfill(100,100,WHITE);

           mouse();

           POINT cursorPosition;

        ///printf("%d\n",cursorPosition.x);
        ///printf("%d\n",cursorPosition.y);

        int k=0;

        while (!kbhit())
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<100 && 0<cursorPosition.y<100)
                {
                    outtextxy(20+k, 450, "1");
                }
                k+=10;
            }

             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<200 && 0<cursorPosition.y<100)
                {
                    outtextxy(20+k, 450, "2");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<300 && 0<cursorPosition.y<100)
                {
                    outtextxy(20+k, 450, "3");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<400 && 0<cursorPosition.y<100)
                {
                    outtextxy(20+k, 450, "4");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<500 && 0<cursorPosition.y<100)
                {
                    outtextxy(20+k, 450, "5");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<100 && 0<cursorPosition.y<200)
                {
                    outtextxy(20+k, 450, "6");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<200 && 0<cursorPosition.y<200)
                {
                    outtextxy(20+k, 450, "7");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<300 && 0<cursorPosition.y<200)
                {
                    outtextxy(20+k, 450, "8");
                }
                k+=10;
            }
                if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<400 && 0<cursorPosition.y<200)
                {
                    outtextxy(20+k, 450, "9");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<500 && 0<cursorPosition.y<200)
                {
                    outtextxy(20+k, 450, "0");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<100 && 0<cursorPosition.y<300)
                {
                    outtextxy(20+k, 450, "+");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<200 && 0<cursorPosition.y<300)
                {
                    outtextxy(20+k, 450, "-");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<300 && 0<cursorPosition.y<300)
                {
                    outtextxy(20+k, 450, "*");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<400 && 0<cursorPosition.y<300)
                {
                    outtextxy(20+k, 450, "/");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<500 && 0<cursorPosition.y<300)
                {
                    outtextxy(20+k, 450, "%");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<100 && 0<cursorPosition.y<400)
                {
                    outtextxy(20+k, 450, "1");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<200 && 0<cursorPosition.y<400)
                {
                    outtextxy(20+k, 450, "sin");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<300 && 0<cursorPosition.y<400)
                {
                    outtextxy(20+k, 450, "cos");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<400 && 0<cursorPosition.y<400)
                {
                    outtextxy(20+k, 450, "tan");
                }
                k+=10;
            }
             if (GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&cursorPosition);
                if (0<cursorPosition.x<500 && 0<cursorPosition.y<400)
                {
                    outtextxy(20+k, 450, "pow");
                }
                k+=10;
            }

	int n;
	float x,y,answer;
	char ch;

    printf("What do you want to do?\n");
  	printf("1.addition\n2.Substraction\n3.Multiplication\n4.Divider\n5.Factorial\n6.sin\n7.cos\n8.tan\n9.sinh\n10.cosh\n11.tanh\n12.1og10\n13.square root.\n14.exponent\n15.power.\n\n");
    printf("Choose OPERATION: ");

	while (scanf ("%d",&n)!=EOF)
	{
	    if (n<0 || n>15)
			printf("Wrong input.\n");

		else if (n<15 && n>4)
	    {
		    printf("x=");
		    scanf("%f",&x);

			switch (n)
		    {
		        case 5: answer = fact(x);
				break;

				case 6: answer = sine(x);
				break;

		        case 7: answer = cosine(x);
				break;

		        case 8: answer = tangent(x);
			    break;

		        case 9: answer = sineh(x);
				break;

				case 10: answer = cosineh(x);
				break;

				case 11: answer = tangenth(x);
				break;

				case 12: answer = logten(x);
				break;

				case 13: answer = squareroot(x);
				break;

				case 14: answer = exponent(x);
				break;
	    	}
		}

		else
		{
		    printf("x=");
		    scanf("%f",&x);
		    printf("y=");
		    scanf("%f%c",&y,&ch);

		    switch (n)
		    {
		    	case 1:
				case '+':
						answer = add(x,y);
		    			break;

		    	case 2:
				case '-':
						answer =sub(x,y);
		    			break;

		    	case 3:
		    	case '*':
						answer = mul(x,y);
		    			break;

		    	case 4:
				case '/':
						answer = div(x,y);
		    			break;

		    	case 15:
				case '^':
						answer = power(x,y);
		    			break;
		    }
		}
       char p[20];
		if (n==5){
			///printf("%d\n",(int)answer);{
			settextstyle(4,HORIZ_DIR,4);
			sprintf(p,"%d",answer);
			outtextxy(10,420,p);
			}
		else if (n>0 && n<16)
		 {
		     settextstyle(4,HORIZ_DIR,4);
			sprintf(p,"%f",answer);
			outtextxy(10,420,p);
		 }

		getch();
		printf("Choose OPERATION: ");
	}



    getch();
    closegraph();
}

