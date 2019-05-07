#include <stdio.h>

struct room {
	int x;
	int y;
	int z;
	
};

int main() {
	
	struct room num[4]={ 3,3,3,
						 0,0,1,
 					     1,1,1,
						 2,2,1 };

	int x = num[0].x;
	int y = num[0].y;
	
	for (int i = 0; i < x; i++) {
		
		for (int j = 0; j < y; j++) {
			int z = 0;
			for (int r = 0; r < x; r++) {
				if (i == num[r + 1].x && j == num[r + 1].y) {
					z = num[r + 1].z;
					break;
				}
			}
			printf("%d ", z);
		}
		printf("\n");
	}
	

}

int compare(room a, room b) {//  두 구조체 값 같은지 비교 

	
	switch (compare)
	{
	case 0:
		printf("구조체값이 같음");
		break;
	case 1:
		printf("%d보다 %d가 큼", b, a);
		break;
	case -1:
		printf("%d보다 %d가 큼", a, b);
		break;
	}

}
