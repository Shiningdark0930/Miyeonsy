#include<Stdio.h>
#include<windows.h>
int main()
{
	
	int Select = 0; 
	printf("º»°Ý ¹Ì¿¬½Ã °ÔÀÓ\n");
	Sleep(800);
	printf("¼¼»óÀÇ ¸ðµç ÀÎ°£µéÀ» ³²³à³ë(¼Ò´Â °Ë¿­) ÇÒ°Í¾øÀÌ È¦·Áº¸ÀÚ.\n");
	Sleep(800);
	
	printf("[Àú ¸Ö¸® ·ùÀ¸¹Ì°¡ Áö³ª°£´Ù.]\n");
	Sleep(800);
	printf("·ùÀ¸¹Ì:·ùÄ£·ùÄ£!\n");
	Sleep(800);
	
	printf("¹«¾ùÀ» ÇÒ±î?\n");
	printf("1:¸Ó¸®¿¡ ºÐÈ«»ö °í¾çÀÌ±Í¸¦ ´Þ¸ç ¾Ö±³¸¦ ¶²´Ù.\n");
	printf("2:±×³É Àç¹Ì¾ø´Â À¯È¤À» ÇÑ´Ù.\n");
	Sleep(800);
	
	scanf("%d", &Select);
	if(Select == 1){
		
		printf("·ùÀ¸¹Ì:º½..¿©¿ì..?\n");
		Sleep(800);
		printf("[·ùÀ¸¹Ì°¡ ¹ÌÃÄ ¹ß±¤ÇØ ¹ö·È´Ù]\n");
		Sleep(800);
		main();
	}
	else{
		
		printf("·ùÀ¸¹Ì:¿ìÈ÷ÆR! ¿ìÆR! À¯È¤ ÁÁ¾Æ!\n");
		Sleep(800);
		
	}
	printf("[·ùÀ¸¹Ì¸¦ À¯È¤Çß´Ù! ¾ÕÀ¸·Î ·ùÀ¸¹Ì°¡ µû¶ó´Ù´Ñ´Ù.]\n");
	Sleep(800);
	
		printf("[Àú ¸Ö¸® Çüµ¶ÀÌ Áö³ª°£´Ù.]\n");
	Sleep(800);
	printf("Çüµ¶:¿¡¿¡À×~!!\n");
	Sleep(800);
	
	printf("¹«¾ùÀ» ÇÒ±î?\n");
	printf("1:°¥ºù");
	printf("2:Çüµ¶¿Àºü ¸ÚÁ®¿ä\n");
	Sleep(800);
	
	scanf("%d", &Select);
	if(Select == 1){
		
		printf("Çüµ¶:#%$$@%@#$%!!!!\n");
		Sleep(800);
		printf("[¸®Å¸ÀÌ¾î°¡ È­¸¦ °ÝÇÏ°Ô ³»°í ÀÖ´Ù.]\n");
		Sleep(800);
		main();
	}
	else{
		
		printf("Çüµ¶:ºÎ²ô·´°Ô..È÷È÷È÷\n");
		Sleep(800);
		
	}
	printf("[Çüµ¶À» À¯È¤Çß´Ù! ¾ÕÀ¸·Î Çüµ¶ÀÌ µû¶ó´Ù´Ñ´Ù.]\n");
	Sleep(800);
	
}
