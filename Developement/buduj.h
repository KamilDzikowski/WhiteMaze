	while(!key[KEY_ESC]&&level!=0)
	{
                        clear_to_color(screen,makecol(0,0,0));
                        play_sample( dzwiek, 255, 127, 1500, 0 );
                        rest(2000);
                        koniec=0;
                        if(level==1)
                        {
                        X=320;
                        Y=240;
                        x=50;
                        y=200;
                       	rect( screen, 270, 180, 370, 300, makecol( 255,255,255));
                        line( screen,270,220,270,260, makecol(0,0,0));
                        rect( screen, 210, 120, 430, 360, makecol( 255,255,255));
                        line( screen,430,220,430,260, makecol(0,0,0));
                        }
                        if(level==3)
                        {
                        a=0;
                        b=250;
                        c=500;
                        A=1;
                        B=1;
                        C=1;
                         x=320;
                         y=400;
                         X=320;
                         Y=80;
                         line( screen,0,150,640,150, makecol( 255,255,255));
                         line( screen,0,250,640,250, makecol( 255,255,255));
                         line( screen,0,350,640,350, makecol( 255,255,255));
                         line( screen,50,150,100,150, makecol(0,0,0));
                         line( screen,300,250,350,250, makecol(0,0,0));
                         line( screen,550,350,600,350, makecol(0,0,0));              
                        }
                        if(level==2)
                        {
                                    x=20;
                                    y=460;
                                    X=620;
                                    Y=20;
                                    line( screen,60,1,60,150, makecol( 255,255,255));
                                    line( screen,60,210,60,380, makecol( 255,255,255));
                                    line( screen,130,75,130,210, makecol( 255,255,255));
                                    line( screen,130,400,130,450, makecol( 255,255,255));//4
                                    line( screen,200,150,200,380, makecol( 255,255,255));
                                    line( screen,270,75,270,210, makecol( 255,255,255));
                                    line( screen,270,380,270,425, makecol( 255,255,255));
                                    line( screen,340,1,340,150, makecol( 255,255,255));//8
                                    line( screen,340,310,340,380, makecol( 255,255,255));
                                    line( screen,370,380,370,469, makecol( 255,255,255));
                                    line( screen,410,75,410,210, makecol( 255,255,255));
                                    line( screen,410,310,410,425, makecol( 255,255,255));//12
                                    line( screen,550,88,550,310, makecol( 255,255,255));
                                    line( screen,130,75,270,75, makecol( 255,255,255));
                                    line( screen,410,75,537,75, makecol( 255,255,255));
                                    line( screen,60,150,119,150, makecol( 255,255,255));//16
                                    line( screen,270,210,410,210, makecol( 255,255,255));
                                    line( screen,73,310,340,310, makecol( 255,255,255));
                                    line( screen,410,310,550,310, makecol( 255,255,255));
                                    line( screen,20,380,120,380, makecol( 255,255,255));//20
                                    line( screen,352,380,390,380, makecol( 255,255,255));
                                    line( screen,480,380,640,380, makecol( 255,255,255));
                                    line( screen,130,425,340,425, makecol( 255,255,255));
                                    line( screen,410,425,570,425, makecol( 255,255,255));//24
                        }
                        if(level==4)
                        {
                                   x=2;
                                   y=2;
                                   X=630;
                                   Y=470;
                                   line( screen,50,0,50,480, makecol( 255,255,255));
                                   line( screen,580,0,580,480, makecol( 255,255,255));
                                   line( screen,0,50,640,50, makecol( 255,255,255));
                                   line( screen,0,425,640,425, makecol( 255,255,255));
                                   rectfill(screen,35,35,65,65, makecol(0,0,0));
                                   rectfill(screen,560,410,600,440, makecol(0,0,0));
                                   a=rand()%250+50;
                                   b=rand()%250+50;
                                   c=rand()%250+50;
                                   d=rand()%250+50;
                                   e=rand()%260+300;
                                   f=rand()%260+300;
                                   g=rand()%260+300;
                                   h=rand()%260+300;
                                   j=rand()%250+50;
                                   k=rand()%250+50;
                                   l=rand()%250+50;
                                   m=rand()%250+50;
                                   n=rand()%260+300;
                                   o=rand()%260+300;
                                   p=rand()%260+300;
                                   q=rand()%260+300;
                                   A=rand()%160+50;
                                   B=rand()%160+50;
                                   C=rand()%160+50;
                                   D=rand()%160+50;
                                   E=rand()%160+50;
                                   F=rand()%160+50;
                                   G=rand()%160+50;
                                   H=rand()%160+50;
                                   J=rand()%170+210;
                                   K=rand()%170+210;
                                   L=rand()%170+210;
                                   M=rand()%170+210;
                                   N=rand()%170+210;
                                   O=rand()%170+210;
                                   P=rand()%170+210;
                                   Q=rand()%170+210;
                        blit( przeszkoda, screen, 0,0, a,A, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, b,B, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, c,C, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, d,D, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, e,E, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, f,F, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, g,G, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, h,H, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, k,K, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, l,L, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, m,M, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, n,N, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, o,O, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, p,P, przeszkoda->w, przeszkoda->h);
                        blit( przeszkoda, screen, 0,0, q,Q, przeszkoda->w, przeszkoda->h);
                        }
                        if(level==5)
                        {
                                    j=255;
                                    J=0;
                                    x=320;
                                    y=450;
                                    X=320;
                                    Y=10;
                                    a=0;
                                    A=0;
                                    b=0;
                                    B=100;
                                    c=0;
                                    C=50;
                                    d=50;
                                    D=0;
                                    g=0;
                                    G=1;
                                    h=-1;
                                    H=0;
                                    line(screen,0,200,640,200, makecol( 255,255,255));
                                    line(screen,0,100,640,100, makecol( 255,255,255));
                                    line(screen,280,380,280,480, makecol( 255,255,255));
                                    line(screen,360,380,360,480, makecol( 255,255,255));
                                    line(screen,130,329,520,329, makecol( 255,255,255));
                                    line(screen,310+a,330+A,410-a,430-A, makecol( 255,255,255));
                                    line(screen,310+b,330+B,410-b,430-B, makecol( 255,255,255));
                                    line(screen,330-c,430-C,230+c,330+C, makecol( 255,255,255));
                                    line(screen,330-d,430-D,230+d,330+D, makecol( 255,255,255));
                                    arc( screen,65,329,itofix(0), itofix(230), 60, makecol(255,255,255));
                                    arc( screen,580,329,itofix(0), itofix(230), 60, makecol(255,255,255));
                        }
                        if(level==6)
                        {
                                    level=0;
                                    textprintf(screen,font,50,50,makecol(255,255,128),"Twoj wynik to:",x);
                                    textprintf(screen,font,250,50,makecol(255,255,128),"Porazki:",x);
                                    textprintf_ex(screen,font, 75, 75, makecol( 200, 0, 0 ), - 1, "%d", wynik );
                                    textprintf_ex(screen,font, 275, 75, makecol( 200, 0, 0 ), - 1, "%d", porazki );
                                    rest(2500);
                        }
                        rect(screen,94,14,116,31, makecol(255,255,255));
                        blit( kwadrat, screen, 0,0, x,y, kwadrat->w, kwadrat->h);
                        for(int i=0;i<5;i++) for(int I=0;I<5;I++) putpixel(screen, i+X, I+Y, makecol(155,0,255));
                        start = time(NULL); 
                        
