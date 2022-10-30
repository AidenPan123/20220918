#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"
{
	char cmdString1[50] = "open ";
	strcat(cmdString1,fileName);
	strcat(cmdString1," alias tmpmusic");
	mciSendString("close tmpmusic", NULL, 0, NULL); // 先把前面一次的音乐关闭
	mciSendString(cmdString1, NULL, 0, NULL); // 打开音乐
	mciSendString("play tmpmusic", NULL, 0, NULL); // 仅播放一次
}
int main()
{
	initgraph(640, 480);
	while (1)
	{
		PlayMusicOnce("周杰伦-告白气球.mp3");
		Sleep(20000);
		PlayMusicOnce("周杰伦-告白气球.mp3");
		Sleep(20000);
	}
	getch();
	return 0;
} 