#include "ch3.h"
int main()
{
	FIEL * fp;
	char buf[80];
memset(buf,0,sizeof(buf),fp);
fp=fopen("./test1.txt","a");
fputs("sppend new infomation!",fp);
fp=freopen("./test1.txt","r",fp);
fgets(buf,sizeof(buf),fp);
printf("content of file: %s \n",buf);
fclose(fp);
return 0;
}
