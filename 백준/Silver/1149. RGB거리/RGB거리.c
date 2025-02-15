#include <stdio.h>
#include <stdlib.h>

int houseCount;
int Cost[1000];

int min(int a, int b)
{
	return a > b ? b : a;
}

int main() {
	int r = 0, g = 0, b = 0;
	int prevR = 0, prevG = 0, prevB = 0;
	scanf("%d\n", &houseCount);
	
	for(int i = 0; i < houseCount; i++){
		prevR = r;
		prevG = g;
		prevB = b;
		
		scanf("%d", &r);
		scanf("%d", &g);
		scanf("%d", &b);
		
		r = min(prevG, prevB) + r;
		g = min(prevR, prevB) + g;
		b = min(prevR, prevG) + b;
	}
	int result = min(min(r, g), b);
	printf("%d", result);
	
	
	return 1;
}