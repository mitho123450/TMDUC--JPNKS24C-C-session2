#include <stdio.h>
int main(){  
 // khai bao hang so PI co kieu du lieu float
 float PI = 3.14; // hang so PI co gia tri 3.14
 // khai bao bien ban kinh va gan gia tri
 float radius = 5.0; // ban kinh hinh tròn
 // tinh chu vi hinh tron: C = 2 * PI * radius;
 float circumference = 2 * PI * radius;
 //tinh dien tich hinh tron: A = PI * r^2
 float area =  PI * radius * radius;
 // in ket qua ra ma hinh
 printf("ban kinh hinh tron:%.2f\n", radius);
 printf("chu vi hinh tron:%.2f\n", circumference);
 printf("dien tich hinh tron:%.2f\n", area);  
}
