#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

	rectangle(1,450,620,470);

       line(10,450,12,380);
	line(40,450,38,380);

	line(9,380,41,380);
	line(9,375,41,375);
	ellipse(10,377,90,270,3,3);
	ellipse(41,378,270,90,3,3);
	line(12,375,14,320);
	line(38,375,36,320);
       //	ellipse(25,331,0,360,12,2.5);
	line(11,320,39,320);
	line(11,315,39,315);
	ellipse(11,318,90,270,3,2);
	ellipse(39,318,270,90,3,2);

	line(14,315,16,250);
	line(36,315,34,250);
       //	ellipse(25,268,0,360,10,4);
	ellipse(25,244,20,200,11,6);
	ellipse(25,245,200,10,11,6);

	line(17,239,17,227);
	line(33,239,33,227);
	line(14,227,37,227);

       ellipse(14,224,90,270,3,3);
	ellipse(36,224,270,90,3,3);
	ellipse(25,220,0,180,10,13);
       line(25,207,25,197);

	//right


	line(580,450,582,380);
	line(610,450,608,380);

	line(578,380,612,380);
	line(578,375,612,375);
	ellipse(579,377,90,270,3,3);
	ellipse(612,378,270,90,3,3);
	line(582,375,584,320);
	line(608,375,606,320);

	line(581,320,611,320);
	line(581,315,611,315);
	ellipse(581,318,90,270,3,2);
	ellipse(611,318,270,90,3,2);

	line(584,315,586,250);
	line(606,315,604,250);
       //	ellipse(25,268,0,360,10,4);
	ellipse(595,245,20,200,11,6);
	ellipse(595,246,200,10,11,6);

	line(585,242,585,227);
	line(603,242,603,227);
	line(583,227,605,227);

       ellipse(583,224,90,270,3,3);
	ellipse(605,224,270,90,3,3);
	ellipse(594,220,0,180,10,13);
       line(593,207,593,197);

       rectangle(245,340,345,450);
       rectangle(235,330,355,450);

       line(263,390,263,450);
       line(330,390,330,450);
       ellipse(297, 390,0,180,34,34);
       rectangle(235,325,355,330);
       line(235,317,235,325);
       line(355,317,355,325);
       ellipse(295,316,0,180,60,9);

       ellipse(295,270, 320,220,75,75);
       line(260,203,290,180);
       line(330,203,290,180);

       circle(290,178,3);
       ellipse(290,168,0,360,2,6);
       ellipse(290,158,0,360,1,4);
       line(290,148,290,155);

       rectangle(355,345,420,450);
       line(460,363,460,450);
       line(416,345,460,363);

       line(397,397,370,397);
       line(370,397,370,366);
       line(397,397,397,366);
       ellipse(383,374,30,150,15,15);

       line(370,424,370,450);
       line(397,424,397,450);
       ellipse(383,432,30,150,15,15);


       line(430,397,450,397);
       line(450,397,450,376);
       line(430,397,430,376);
       ellipse(440,385,30,150,11,15);

       line(450,424,450,450);
       line(430,424,430,450);
       ellipse(440,432,30,150,11,15);

       line(401,318,401,344);
       ellipse(378,327,40,130,34,12);
       line(361,309,406,309);
       line(406,309,403,318);

	ellipse(383,334,30,89,24,50);
	ellipse(381,338,85,120,26,55);
	line(383,274,382,282);
	line(383,274,385,284);

       //left

       rectangle(235,345,165,450);
       line(125,363,125,450);
       line(165,345,125,363);

       line(185,397,211,397);
       line(185,397,185,366);
       line(211,397,211,366);
       ellipse(198,374,30,150,15,15);

       line(185,424,185,450);
       line(211,424,211,450);
       ellipse(198,432,30,150,15,15);


       line(135,397,155,397);
       line(135,397,135,376);
       line(155,397,155,376);
       ellipse(145,385,30,150,11,15);

       line(135,424,135,450);
       line(155,424,155,450);
       ellipse(145,432,30,150,11,15);


       line(189,318,189,344);
       ellipse(212,327,45,130,34,12);
       line(187,309,230,309);
       line(187,309,190,318);

	ellipse(217,310,100,180,26,32);
	ellipse(210,319,70,85,26,40);
	line(212,270,209,280);
	line(212,270,215,280);

       //pool left

	line(112,450,110,415);
	line(84,450,86,415);

	line(83,415,113,415);
	line(83,410,113,410);
	ellipse(82,412,90,270,3,2);
	ellipse(113,412,270,90,3,2);

	line(86,410,88,370);
	line(110,410,108,370);
       //	ellipse(25,331,0,360,12,2.5);
	line(86,370,110,370);
	line(86,365,110,365);
	ellipse(86,368,90,270,3,2);
	ellipse(110,368,270,90,3,2);

	line(88,365,90,335);
	line(108,365,106,335);
       //	ellipse(25,268,0,360,10,4);
	ellipse(98,330,20,200,11,6);
	ellipse(98,330,200,10,11,6);

	line(90,327,90,314);
	line(106,327,106,314);
	line(87,314,109,314);

       ellipse(87,311,90,270,3,3);
	ellipse(109,311,270,90,3,3);
	ellipse(98,307,0,180,10,13);
       line(98,295,98,284);


       // right

	line(474,450,475,420);
	line(500,450,498,420);

	line(472,415,500,415);
	line(472,420,500,420);
	ellipse(472,418,90,270,3,2);
	ellipse(500,418,270,90,3,2);

	line(475,415,477,375);
	line(498,415,496,375);
       //	ellipse(25,331,0,360,12,2.5);
	line(474,374,499,374);
	line(474,370,499,370);
	ellipse(473,372,90,270,3,2);
	ellipse(499,372,270,90,3,2);

	line(495,369,493,340);
	line(476,369,478,340);
       //	ellipse(25,268,0,360,10,4);
	ellipse(485,334,20,200,11,6);
	ellipse(485,334,200,10,11,6);

	line(478,329,478,317);
	line(492,329,492,317);
	line(496,316,474,316);

       ellipse(473,312,90,270,3,3);
	ellipse(495,312,270,90,3,3);
	ellipse(484,309,0,180,10,13);
       line(484,295,484,284);

      // outtextxy(450,459,"Draw By ShubhamPandey");
       settextstyle(3,0,7);
       outtextxy(50,50,"TAJ MAHAL");

	getch();
	closegraph();
	return(0);
}
