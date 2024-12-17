#include <stdio.h>
#include <string.h>
#include <ctype.h>
void inputString(char *arr) {
    printf("nhap chuoi: ");
    fgets(arr, 100, stdin);
}

void displayStringReverse(char *arr){
	printf("chuoi dao nguoc la: ");
	for(int i = strlen(arr)-1; i >= 0; i--){
		printf("%c",arr[i]);
	}
	printf("\n");
}

int displayWordNumber(char *arr){
	int count;
	for(int i = 0; i <= strlen(arr); i++){
		if (arr[i] == ' '){
			count ++;
		}
		if (arr[i] == '\0'){
			count ++;
		}
	}
	return count;
}
void compareTwoArr(char *arr1){
	char arr2[100];
	printf("nhap chuoi so sanh: ");
    fgets(arr2, 100, stdin);
    if(strlen(arr2) < strlen(arr1)){
    	printf("chuoi vua nhap ngan hon chuoi ban dau\n");
	}else if(strlen(arr2) > strlen(arr1)){
    	printf("chuoi vua nhap dai hon chuoi ban dau\n");
	}else {
		printf("2 chuoi bang nhau");
	}
}

void capitalizeLetters(char *arr){
	for(int i = 0; i < strlen(arr)-1; i++){
		if(arr[i] >= 'a' && arr[i] <= 'z'){
			printf("%c", toupper(arr[i]));
		}else{
			printf("%c", arr[i]);
		}	
	}
	printf("\n");
}
void stringCat(char *arr){
	char arr2[100];
	printf("nhap chuoi ghep: ");
    fgets(arr2, 100, stdin);
    arr[strlen(arr)-1] = '\0';
    strcat(arr, arr2);
    printf("%s", arr);
}

int main(){
	int choose;
	char arr[100];
	do{
		printf("\nMENU\n");
		printf("1. nhap vao chuoi\n");
		printf("2. in ra chuoi dao nguoc\n");
		printf("3. dem so luong tu trong chuoi\n");
		printf("4. nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau (ket qua in ra ngan hon hoac dai hon chuoi ban dau)\n");
		printf("5. in hoa tat ca chu cai trong chuoi\n");
		printf("6. nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
		printf("7. thoat\n");
		printf("chon: ");
		scanf("%d", &choose);
		fflush(stdin);
		switch(choose){
			case 1:
				inputString(arr);
				break;
			case 2:
				displayStringReverse(arr);
				break;
			case 3:
				printf("so luong tu trong chuoi la: %d\n", displayWordNumber(arr));
				break;
			case 4:
				compareTwoArr(arr);
				break;
			case 5:
				capitalizeLetters(arr);
				break;
			case 6:
				stringCat(arr);
				break;
			case 7:
				printf("thoat chuong trinh\n");
				break;
			default:
				printf("lua chon sai\n");
				break;						
		}
		
	}while(choose != 7);
	return 0;
}
