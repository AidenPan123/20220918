#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"  #写好




int main()
{
	initgraph(640, 480);
	while (1)
	{
		PlayMusicOnce("告白气球.mp3");
		Sleep(200000);
		PlayMusicOnce("告白气球.mp3");
		Sleep(200000);
	}
	getch();
	return 0;
}
