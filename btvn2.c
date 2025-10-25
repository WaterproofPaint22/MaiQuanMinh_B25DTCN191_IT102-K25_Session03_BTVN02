#include <stdio.h>
int main(){
	float Celsius, Farenheit;
	printf("Nhap nhiet do theo thang Celsius: ");
	scanf("%f", &Celsius);
	Farenheit = Celsius * (9 / 5) + 32;
	printf("Nhiet do theo thang Farenheit la: %f", Farenheit);
	return 0;
	}
