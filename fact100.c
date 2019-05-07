#include <stdio.h>

int main(void) {
	int N,carry,i,j,x,lenArr;
	printf("Enter the no you want to calculate = ");
    scanf("%d",&N);
	int Arr[1000] = {0};

	Arr[0] = 1;
	lenArr = 1; // Number of elements in Arr

	carry = 0;
	for(i=1;i<=N;i++) {
		for(j=0;j<lenArr;j++) {
			x = Arr[j]*i + carry;
			Arr[j] = x%10;
			carry = x/10;
		}
		while(carry>0) {
			Arr[lenArr] = carry%10;
			carry = carry/10;
			lenArr++;
		}
	}

	for(i=lenArr-1;i>=0;i--)
		printf("%d",Arr[i]);


	return 0;
}
