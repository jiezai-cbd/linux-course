#include "ch3.h"
int main()
{
	FILE* fp;
	char buf[80];
	
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./text1.txt","w"))==NULL)
		perror("open failde!\n");
	 fgets(buf,sizeof(buf),stdin);
	printf("Content is %s \n",buf);
	fwrite(buf,sizeof(buf),1,fp);
	fclose(fp);
	
	
	return 0;
}
