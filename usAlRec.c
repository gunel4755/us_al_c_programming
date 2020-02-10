#include <stdlib.h>
#include <stdio.h>

int usAlRecursive(int taban,int us){
	
	if(us == 0 || taban==1){
		return 1;
	}
	else
		return taban* usAlRecursive(taban,us -1);
}

main(){
	int taban,us;
	int check=1;
	printf("Taban sayisini giriniz..\n");
	scanf("%d", &taban);
	while (check){
		
		printf("Us sayisini giriniz..\n");
	    scanf("%d",&us);
	    printf("Sonuc: %d\n",usAlRecursive(taban,us));
	    printf("programdan cikmak icin 0 giriniz veya yeni bir taban sayisi giriniz.\n");
	    scanf("%d",&check);
	    taban=check;
	}
}
