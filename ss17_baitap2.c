#include <stdio.h>
#include <ctype.h>

void inputString(char *str) {
    printf("nhap chuoi: ");
    fgets(str, 100, stdin);
}

void displayString(char *str) {
    printf("chuoi cua ban la: %s", str);
}

int countLetters(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {  
            count++;
        }
        str++;
    }
    return count;
}

int countDigits(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) { 
            count++;
        }
        str++;
    }
    return count;
}

int countSpecialChars(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isalnum(*str) && !isspace(*str)) { 
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. nhap vao chuoi\n");
        printf("2. in ra chuoi\n");
        printf("3. dem so luong chu cai trong chuoi\n");
        printf("4. dem so luong so trong chuoi\n");
        printf("5. dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("chon: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                inputString(str);
                break;
            case 2:
                displayString(str);
                break;
            case 3:
                printf("so luong chu cai trong chuoi la: %d\n", countLetters(str));
                break;
            case 4:
                printf("so luong so trong chuoi la: %d\n", countDigits(str));
                break;
            case 5:
                printf("so luong ky tu dac biet trong chuoi la: %d\n", countSpecialChars(str));
                break;
            case 6:
                printf("thoat.\n");
                break;
            default:
                printf("lua chon sai.\n");
                break;
        }
    } while (choice != 6);  

    return 0;
}
