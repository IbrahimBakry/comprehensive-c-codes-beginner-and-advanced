#include <stdio.h>

int main() {
FILE *fptr;
fptr=fopen("my_first_file.txt","w");
if (fptr==NULL) {
printf("Error opening the file");
return -1;
}
else 
printf("File opened correctly");

fclose(fptr);
return 0;
}
