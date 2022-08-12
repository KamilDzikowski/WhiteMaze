textprintf(screen,font,50,50,makecol(255,255,128),"Wybierz poziom trudnosci",x);
    textprintf(screen,font,50,75,makecol(255,255,128),"1.Bardzo trudny",x);
    textprintf(screen,font,50,100,makecol(255,255,128),"2.Trudny",x);
    textprintf(screen,font,50,125,makecol(255,255,128),"3.Sredni",x);
    textprintf(screen,font,50,150,makecol(255,255,128),"4.latwy",x);      
    textprintf(screen,font,50,200,makecol(255,255,128),"Potwierdz enterem",x);             
    	while( !key[ KEY_ENTER ] )
    {
        klawisz=readkey();
        if(klawisz==7217) poziom=1;
        if(klawisz==7474) poziom=2;
        if(klawisz==7731) poziom=3;
        if(klawisz==7988) poziom=4;
    }
