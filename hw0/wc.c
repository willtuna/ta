#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    fp = fopen(argv[1], "r");
    char tmp;
    unsigned long long line_count = 0, wordcount=0;
//    while( fscanf(fp, "%c", &tmp)==1 ){ // this works
    while( (tmp = fgetc(fp)) != EOF ){
	printf("%c",tmp);
	if (tmp == '\n')
	    line_count++;
	else
            wordcount++;
    }
    printf("line count: %lld, word count : %lld\n", line_count, wordcount);
    fclose(fp);
    return 0;
}
