    

                        
                        while(!key[KEY_ESC]&&koniec==0&&level!=0)      
                        {
                        rest(poziom);
                        end = time(NULL); 
                        czas = end - start;
                        rectfill(screen,95,15,115,30, makecol(0,0,0));
                        textprintf_ex(screen,font, 100, 20, makecol( 200, 0, 0 ), - 1, "%d", czas );
                        if(level==5)
                        {
                                    rest(poziom);
                                    k=rand()%20;
                                    if(k!=0) line(screen,250,200,390,200, makecol( 0,0,0));
                                    else line(screen,250,200,390,200, makecol(255,255,255));
                                    k=rand()%20;
                                    if(k!=0) line(screen,250,100,390,100, makecol( 0,0,0));
                                    else line(screen,250,100,390,100, makecol(255,255,255));
                                    arc( screen,580,329,itofix(J), itofix(1+J), 60, makecol(0,0,0));
                                    J++;
                                    arc( screen,580,329,itofix(220+J), itofix(221+J), 60, makecol(255,255,255));
                                    arc( screen,65,329,itofix(j-36), itofix(j-35), 60, makecol(0,0,0));
                                    j--;
                                    arc( screen,65,329,itofix(j-1), itofix(j), 60, makecol(255,255,255));
                                    line(screen,310+a,330+A,410-a,430-A, makecol(0,0,0));
                                    line(screen,310+b,330+B,410-b,430-B, makecol(0,0,0));
                                    line(screen,330-c,430-C,230+c,330+C, makecol(0,0,0));
                                    line(screen,330-d,430-D,230+d,330+D, makecol(0,0,0));
                                    if(a==100&&A==0) e=0;
                                    if(a==100&&A==100) e=-1;
                                    if(a==0&&A==100) e=0;
                                    if(A==0&&a==0) e=1;
                                    if(A==100&&a==100) E=0;
                                    if(a==0&&A==100) E=-1;
                                    if(A==0&&a==0) E=0;
                                    if(a==100&&A==0) E=1;
                                    a=a+e;
                                    A=A+E;
                                    if(b==100&&B==0) f=0;
                                    if(b==100&&B==100) f=-1;
                                    if(b==0&&B==100) f=0;
                                    if(B==0&&b==0) f=1;
                                    if(B==100&&b==100) F=0;
                                    if(b==0&&B==100) F=-1;
                                    if(B==0&&b==0) F=0;
                                    if(b==100&&B==0) F=1;
                                    b=b+f;
                                    B=B+F;
                                    if(c==100&&C==0) g=-1;
                                    if(c==100&&C==100) g=0;
                                    if(c==0&&C==100) g=1;
                                    if(C==0&&c==0) g=0;
                                    if(C==100&&c==100) G=-1;
                                    if(c==0&&C==100) G=0;
                                    if(C==0&&c==0) G=1;
                                    if(c==100&&C==0) G=0;
                                    c=c+g;
                                    C=C+G;
                                    if(d==100&&D==0) h=-1;
                                    if(d==100&&D==100) h=0;
                                    if(d==0&&D==100) h=1;
                                    if(D==0&&d==0) h=0;
                                    if(D==100&&d==100) H=-1;
                                    if(d==0&&D==100) H=0;
                                    if(D==0&&d==0) H=1;
                                    if(d==100&&D==0) H=0;
                                    d=d+h;
                                    D=D+H;
                                    line(screen,310+a,330+A,410-a,430-A, makecol( 255,255,255));
                                    line(screen,310+b,330+B,410-b,430-B, makecol( 255,255,255));
                                    line(screen,330-c,430-C,230+c,330+C, makecol( 255,255,255));
                                    line(screen,330-d,430-D,230+d,330+D, makecol( 255,255,255));
                        }
                        if(level==3)
                        {        
                        if(A==1)
           {
                        putpixel(screen, a+50, 150, makecol(255,255,255));
                                putpixel(screen, a+100, 150, makecol(0,0,0));
                        }
                        else
                        {
                            putpixel(screen, a+50, 150, makecol(0,0,0));
                            putpixel(screen, a+100, 150, makecol(255,255,255));
                        }
                        if(B==1)
                        {
                        putpixel(screen, b+50, 250, makecol(255,255,255));
                        putpixel(screen, b+100, 250, makecol(0,0,0));
                        }
                        else
                        {
                        putpixel(screen, b+50, 250, makecol(0,0,0));
                        putpixel(screen, b+100, 250, makecol(255,255,255));
                        }
                        if(C==1)
                        {
                        putpixel(screen, c+50, 350, makecol(255,255,255));
                        putpixel(screen, c+100, 350, makecol(0,0,0));
                        }
                        else
                        {
                        putpixel(screen, c+50, 350, makecol(0,0,0));
                        putpixel(screen, c+100, 350, makecol(255,255,255));
                        }
                        if(a==550)A=-1;
                        if(a==50) A=1;
                        a=a+A;
                        if(b==550)B=-1;
                        if(b==50) B=1;
                        b=b+B;
                        if(c==550)C=-1;
                        if(c==50) C=1;
                        c=c+C;
                        }
                        if(level==4)
                        {
                                    rest(poziom);
                                    rect(screen,120,100,520,380, makecol(255,255,255));
                                    line(screen,120,230,120,250, makecol( 0,0,0));
                                    line(screen,520,230,520,250, makecol( 0,0,0));
                                    line(screen,320,380,320,480, makecol( 255,255,255));
                                    line(screen,320,0,320,100, makecol( 255,255,255));
                            blit( przeszkoda2, screen, 0,0, a,A, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            a=a+z*4;
                            if(a>300||a<52) a=170;
                            z=rand()%3-1;
                            A=A+z*4;
                            if(A>210||A<52) A=130;
                            blit( przeszkoda, screen, 0,0, a,A, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, b,B, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            b=b+z*4;
                            if(b>300||b<52) b=170;
                            z=rand()%3-1;
                            B=B+z*4;
                            if(B>210||B<52) B=130;
                            blit( przeszkoda, screen, 0,0, b,B, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, c,C, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            c=c+z*4;
                            if(c>300||c<52) c=170;
                            z=rand()%3-1;
                            C=C+z*4;
                            if(C>210||C<52) C=130;
                            blit( przeszkoda, screen, 0,0, c,C, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, d,D, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            d=d+z*4;
                            if(d>300||d<52) d=170;
                            z=rand()%3-1;
                            D=D+z*4;
                            if(D>210||D<52) D=130;
                            blit( przeszkoda, screen, 0,0, d,D, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, e,E, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            e=e+z*4;
                            if(e>560||e<300) e=480;
                            z=rand()%3-1;
                            E=E+z*4;
                            if(E>210||E<52) E=130;
                            blit( przeszkoda, screen, 0,0, e,E, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, f,F, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            f=f+z*4;
                            if(f>560||f<300) f=480;
                            z=rand()%3-1;
                            F=F+z*4;
                            if(F>210||F<52) F=130;
                            blit( przeszkoda, screen, 0,0, f,F, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, g,G, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            g=g+z*4;
                            if(g>560||g<300) g=480;
                            z=rand()%3-1;
                            G=G+z*4;
                            if(G>210||G<52) G=130;
                            blit( przeszkoda, screen, 0,0, g,G, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, h,H, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            h=h+z*4;
                            if(h>560||h<300) h=480;
                            z=rand()%3-1;
                            H=H+z*4;
                            if(H>210||H<52) H=130;
                            blit( przeszkoda, screen, 0,0, h,H, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, j,J, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            j=j+z*4;
                            if(j>300||j<52) j=170;
                            z=rand()%3-1;
                            J=J+z*4;
                            if(J>380||J<210) J=300;
                            blit( przeszkoda, screen, 0,0, j,J, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, k,K, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            k=k+z*4;
                            if(k>300||k<52) k=170;
                            z=rand()%3-1;
                            K=K+z*4;
                            if(K>380||K<210) K=300;
                            blit( przeszkoda, screen, 0,0, k,K, przeszkoda->w, przeszkoda->h);  
                            blit( przeszkoda2, screen, 0,0, l,L, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            l=l+z*4;
                            if(l>300||l<52) l=170;
                            z=rand()%3-1;
                            L=L+z*4;
                            if(L>380||L<210) L=300;
                            blit( przeszkoda, screen, 0,0, l,L, przeszkoda->w, przeszkoda->h); 
                            blit( przeszkoda2, screen, 0,0, m,M, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            m=m+z*4;
                            if(m>300||m<52) m=170;
                            z=rand()%3-1;
                            M=M+z*4;
                            if(M>380||M<210) M=300;
                            blit( przeszkoda, screen, 0,0, m,M, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, n,N, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            n=n+z*4;
                            if(n>560||n<300) n=420;
                            z=rand()%3-1;
                            N=N+z*4;
                            if(N>380||N<210) N=300;
                            blit( przeszkoda, screen, 0,0, n,N, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, o,O, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            o=o+z*4;
                            if(o>560||o<300) o=420;
                            z=rand()%3-1;
                            O=O+z*4;
                            if(O>380||O<210) O=300;
                            blit( przeszkoda, screen, 0,0, o,O, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, p,P, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            p=p+z*4;
                            if(p>560||p<300) p=420;
                            z=rand()%3-1;
                            P=P+z*4;
                            if(P>380||P<210) P=300;
                            blit( przeszkoda, screen, 0,0, p,P, przeszkoda->w, przeszkoda->h);
                            blit( przeszkoda2, screen, 0,0, q,Q, przeszkoda2->w, przeszkoda2->h);
                            z=rand()%3-1;
                            q=q+z*4;
                            if(q>560||q<300) q=420;
                            z=rand()%3-1;
                            Q=Q+z*4;
                            if(Q>380||Q<210) Q=300;
                            blit( przeszkoda, screen, 0,0, q,Q, przeszkoda->w, przeszkoda->h);                                            
                        }
                 if(key[KEY_LEFT]&&x>1)
                 {
                                        blit( kwadrat2, screen, 0,0, x,y, kwadrat2->w, kwadrat2->h);
                                        x--;
                                        blit( kwadrat, screen, 0,0, x,y, kwadrat->w, kwadrat->h);
                 }
                 if(key[KEY_RIGHT]&&x<630)
                 {
                                          blit( kwadrat2, screen, 0,0, x,y, kwadrat2->w, kwadrat2->h);
                                          x++;
                                          blit( kwadrat, screen, 0,0, x,y, kwadrat->w, kwadrat->h);
                 }
                 if(key[KEY_UP]&&y>1)
                 {
                                      blit( kwadrat2, screen, 0,0, x,y, kwadrat2->w, kwadrat2->h);
                                      y--;
                                      blit( kwadrat, screen, 0,0, x,y, kwadrat->w, kwadrat->h);
                 }
                 if(key[KEY_DOWN]&&y<470)
                 {
                                         blit( kwadrat2, screen, 0,0, x,y, kwadrat2->w, kwadrat2->h);
                                         y++;
                                         blit( kwadrat, screen, 0,0, x,y, kwadrat->w, kwadrat->h);
                 }
                 for(int i=0;i<11;i++)
                 {
                         color=getpixel(screen,x-1+i,y-1);
                         if(color==makecol(255,255,255))
                 {
                                textprintf(screen,font,200,200,makecol(255,255,128),"przegrales",x);
                                play_sample( dzwiek_p, 255, 127, 1000, 0 );
                                rest(1000);
                                koniec=1;
                                porazki++;
                                break;
                 }
                 }
                 if(koniec==0) for(int i=0;i<11;i++)
                 {
                         color=getpixel(screen,x-1,y-1+i);
                         if(color==makecol(255,255,255))
                 {
                                textprintf(screen,font,200,200,makecol(255,255,128),"przegrales",x);
                                play_sample( dzwiek_p, 255, 127, 1000, 0 );
                                rest(1000);
                                koniec=1;
                                porazki++;
                                break;
                 }
                 }
                  if(koniec==0) for(int i=0;i<12;i++)
                 {
                         color=getpixel(screen,x+10,y-1+i);
                         if(color==makecol(255,255,255))
                 {
                                textprintf(screen,font,200,200,makecol(255,255,128),"przegrales",x);
                                play_sample( dzwiek_p, 255, 127, 1000, 0 ); 
                                rest(1000);
                                koniec=1;
                                porazki++;
                                break;
                 }
                 }
                  if(koniec==0) for(int i=0;i<12;i++)
                 {
                         color=getpixel(screen,x-1+i,y+10);
                         if(color==makecol(255,255,255))
                 {
                                textprintf(screen,font,200,200,makecol(255,255,128),"przegrales",x);
                                play_sample( dzwiek_p, 255, 127, 1000, 0 ); 
                                rest(1000);
                                koniec=1;
                                porazki++;
                                break;
                 }
                 }
                 if(koniec==0) if(y<Y+5&&x<X+5&&y>Y-10&&x>X-10)
                 {
                                blit( zwyciestwo, screen, 0,0, 170,200, zwyciestwo->w, zwyciestwo->h);
                                play_sample( dzwiek_z, 255, 127, 1000, 0 ); 
                                rest(1000);
                                koniec=1;
                                level++;
                                wynik+=czas;
                                break;
                 }
                 }
          }
	deinit();
	return 0;
}
