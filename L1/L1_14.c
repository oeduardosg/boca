#include <stdio.h>

int main () {
	int x1=0, y1=0, x2=0, y2=0, px=0, py=0;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &px, &py);
	if (x1 > x2) {
		if (y1 > y2) {
			if ((px <= x1) && (px >= x2) && (py <= y1) && (py >= y2)) {
				printf("Dentro");
			} else {
				printf("Fora");
		}} else {
			if ((px <= x1) && (px >= x2) && (py <= y2) && (py >= y1)) {
				printf("Dentro");
			} else {
				printf("Fora");
	}}} else {
		if (y1 > y2) {
			if ((px <= x2) && (px >= x1) && (py <= y1) && (py >= y2)) {
				printf("Dentro");
			} else {
				printf("Fora");
		}} else {
			if ((px <= x2) && (px >= x1) && (py <= y2) && (py >= y1)) {
				printf("Dentro");
			} else {
				printf("Fora");
	}}}
	return 0;
}
