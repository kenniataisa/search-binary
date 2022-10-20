#include<stdio.h>

int search_binary(int *vet, int key, int begin, int end)
{
    int midd;

    if(begin <= end){
        midd = (begin + end) / 2;
        if(key == vet[midd]){
            return midd;
        }else{
            if(key < vet[midd]){
                return search_binary(vet, key, begin, midd - 1);
            }else{
                return search_binary(vet,key, midd + 1, end); 
            }
        }
    }
    return -1;
}



int main()
{
    int vet[10] = {1,3,5,7,11,13,17,23,29,31};
    int val, opt;

    do{
    printf("Enter search value: ");
    scanf("%d", &val);
    printf("%d", search_binary(vet, val, 0, 9));
    printf("\n0) Exit\n1) New search\n");
    scanf("%d", &opt);
    }while(opt!=0);

}