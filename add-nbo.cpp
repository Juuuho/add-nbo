#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[]) {
	uint32_t file1, file2;

	
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


}

