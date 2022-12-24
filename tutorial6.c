#include <stdio.h>

void main(){
//	FILE *fp;
//	fp = fopen("text.txt", "r");
//	char message[50];
//// fputc method: 
//	int i = 0;
//	while(message[i] != '\0'){
//		printf("%d,",fputc(message[i], fp));
//		i++;
//	}

//// fprint method:
//	fprintf(fp, "%s", message);

//// fputs method ("K halne", "K ma halne")
//	fputs(message,fp);

//  reading purpose
//	int i;
//	char c = fgetc(fp);
//	while(c!= EOF){
//		printf("%c", c);
//		c = fgetc(fp);
//	}
// Scanf method
//	while(!feof(fp)){
//		fscanf(fp,"%s", message);
//		printf("%s ", message);
//	}
	
//	int x, y;
//	fscanf(fp,"%d", "%d", &x,&y);
//	printf("%d","%d", x, y);
//		

	struct student{
		char name;
		int roll;
	};

	struct student s[5];
	FILE *fp;
	fp = fopen("Student_record.txt", "w");
	int i;
	for(i=0; i<5;i++){
		printf("Name: ");
		scanf("%[^\n]", &s[i].name);
		fflush(stdin);
		printf("Roll: ");
		scanf("%d", &s[i].roll);
		fflush(stdin);
		fwrite(&s[i], sizeof(s[i]), 2, fp);
	}
		
	fclose(fp);
}
