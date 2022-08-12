#include <allegro.h>

void init();
void deinit();
int x,y,X,Y,color,level,koniec,klawisz,poziom,start,czas,end,wynik,porazki,a,b,c,d,e,f,g,h,j,k,l,m,n,o,p,q,A,B,C,D,E,F,G,H,J,K,L,M,N,O,P,Q,z;
void init() 
{
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	if (res != 0) 
    {
		allegro_message(allegro_error);
		exit(-1);
	}
	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}
void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
int main() 
{
    
	init();
    BITMAP *kwadrat = NULL; 
    kwadrat = load_bmp("kwadrat.bmp",default_palette); 
    BITMAP *kwadrat2 = NULL; 
    kwadrat2 = load_bmp("kwadrat2.bmp",default_palette);
    BITMAP *przeszkoda = NULL; 
    przeszkoda = load_bmp("przeszkoda.bmp",default_palette); 
    BITMAP *przeszkoda2 = NULL; 
    przeszkoda2 = load_bmp("przeszkoda2.bmp",default_palette); 
    BITMAP *zwyciestwo = NULL; 
    zwyciestwo = load_bmp("zwyciestwo.bmp",default_palette);
    install_sound( DIGI_AUTODETECT, MIDI_AUTODETECT, "" );
    set_volume( 255, 255 );
    SAMPLE * dzwiek = NULL;
    SAMPLE * dzwiek_z = NULL;
    SAMPLE * dzwiek_p = NULL;
    dzwiek = load_sample( "start2.wav" );
    dzwiek_z = load_sample( "zwyciestwo.wav" );
    dzwiek_p = load_sample( "przegrana.wav" );
    level=1;
    wynik=0;
    porazki=0;
