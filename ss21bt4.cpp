#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("bt01.txt", "r");
	if(f==NULL){
		printf("khong the mo file");
		return 1;
	}
	char s[100];
	if(fgets(s,sizeof(s),f)!=NULL){
		printf("dong dau tien trong file la: %s",s);
	}else{
		printf("file rong.\n");
	}
	fclose(f);
	return 0;
}
