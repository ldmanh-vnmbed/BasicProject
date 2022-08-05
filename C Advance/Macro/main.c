#include <stdio.h>
int a = 5;
char a1 = 'c';
char a2 = 'c';
double b = 5.5;
int c = 6;

typedef struct hocsinh{
    unsigned int id0:1;
    unsigned int id1:1;
    unsigned int id2:1;
    unsigned int id3:1;
    unsigned int id4:1;
    unsigned int id5:1;
    unsigned int id6:1;
    unsigned int id7:1;
}hocsinh;

void main(){
    hocsinh manh = {0,0,0,0,0,0,0,0};
    printf("%d\n",&a);
    printf("%d\n",&a1);
    printf("%d\n",&a2);
    printf("%d\n",&b);
    printf("%d\n",&c);
    printf("----------\n");
    printf("%x\n",sizeof(manh));

    manh.id3 = manh.id3 | 0x01;
    printf("%d%d%d%d%d%d%d%d\n",manh.id0,manh.id1,manh.id2,manh.id3,manh.id4,manh.id5,manh.id6,manh.id7);
    printf("----------\n");
}
