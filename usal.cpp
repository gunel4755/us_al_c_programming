#include <stdio.h>
#include <stdlib.h>
 
int usAlma(int taban, int us) {
	int sonuc=0;
	if(us==0 || taban==1)
		return 1;
	else{
		if(us ==1)
			return taban;
		while(us-1 > 0){
			taban *= taban;
			us--;
		}
		return taban;
	}
}
 
int main() {
	int taban,us,check;
	
	printf("Taban sayisini giriniz..\n");
	scanf("%d", &taban);
	while (1){
		
		printf("Us sayisini giriniz..\n");
	    scanf("%d",&us);
	    printf("Sonuc: %d\n",usAlma(taban,us));
	    printf("programdan cikmak icin 0 giriniz veya yeni bir taban sayisi giriniz.\n");
	    scanf("%d",&check);
	    taban=check;
	    if(check == 0)
	    	return false;
	}
}
 

