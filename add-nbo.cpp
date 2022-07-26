#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char* argv[]) {
	uint32_t n1, n2, sum;
	
	if (argc != 3){
		printf("usage: add-nbo.o <file1> <file2>\n");
	}

	FILE* fp1 = fopen(argv[1], "rb");
	if(fp1==NULL){
		printf("An Error occured while opening <file1>");
		return 1;
	}

	FILE* fp2 = fopen(argv[2], "rb");
	if(fp2==NULL){
		printf("An Error occured while opening <file2>");
		return 1;
	}

	fread(&n1, sizeof(uint32_t), sizeof(n1), fp1);
	fread(&n2, sizeof(uint32_t), sizeof(n2), fp2);

	n1 = ntohl(n1);
	n2 = ntohl(n2);
	
	sum = n1 + n2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n1, n1, n2, n2, sum, sum);

}

