#include <stdio.h> 
int main(){
  // khai bao va khoi tao cac bien chieu dai va chieu rong
   float length = 5.0; // chieu dai cua hinh chu nhat
   float width = 2.0; // chieu rong cua hinh chu nhat
   // tinh chu vi hinh chu nhat = 2 * (chieu dai + chieu rong)
   float perimeter = 2 * (length * width);
   // tinh dien tich hinh chu nhat = chieu dai * chieu rong
   float area = length * width;
   // in ra ket qua 
   printf("chieu dai: %.2f\n", length);
   printf("chieu rong: %.2f\n", width);
   printf("chu vi cua hinh chu nhat: %.2f\n",perimeter);
   printf("dien tich cua hinh chu nhat: %.2f\n", area); 	
	return 0; 
} 
