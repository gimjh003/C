#include <stdio.h>
void selection_sort(int *pd, int size){
    int min, j, k, temp;
    for(k=0; k<size-1; k++){
        min = k;
        for(j=k+1; j<size; j++){
            if(pd[j]<pd[min])
                min = j;
        }
        temp=pd[k];
        pd[k] = pd[min];
        pd[min]=temp;
    }
}
int main(){
    int data[10] = {10,9,8,7,6,5,4,3,2,1}, k;
    selection_sort(data, 10);
    for(k=0;k<10;k++)
        printf("%d ", data[k]);
    return 0;
}