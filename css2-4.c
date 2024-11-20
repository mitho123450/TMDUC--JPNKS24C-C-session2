#include <stdio.h>
int main(){
	// khai bao bien canh hinh vuong v gan gia tri
	float side = 5; // canh cua hinh vuong bang 5
	// tinh chu vi hinh vuong: chu vi bang canh * 4
	float perimeter = 4 * side;
	// dien tich cua hinh vuong bang canh * canh
	float area = side * side;
	// in ra man hinh
	printf("canh cua hinh vuong: %.2f\n", side);
	printf("chu vi cua hinh vuong :  %.2f\n", perimeter);
	printf("dien tich cua hinh vuong :  %.2f\n", area); 
 return 0; 
}
