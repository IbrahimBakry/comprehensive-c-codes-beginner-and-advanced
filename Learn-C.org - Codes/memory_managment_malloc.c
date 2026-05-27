#include <stdio.h>
#include <stdlib.h>

int rows=4, cols=4;

int main(){
int *ptr=malloc((rows*cols)*sizeof(*ptr));
if (ptr!=NULL){
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
ptr[i*cols+j]=i*cols+j+1;
}}}

for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
printf("%6d",(ptr[i*cols+j]));
}
printf("\n");
}

free(ptr); ptr=NULL;
printf("ptr value: %d",(ptr[1]));

return 0;
}
    