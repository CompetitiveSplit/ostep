#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char *argv[]) {

  char input[100];

  if (argc == 1) {
    printf("Error: no file provided\n");
    exit(0);
  } 

  for (int i = 1; i < argc; i++) {
    FILE *fptr;
    fptr = fopen(argv[i], "r");

    if (fptr == NULL) {
      printf("wcat: cannot open file %s\nExit status code 1\n", argv[i]);
      exit(1);
    } 
    printf("The file %s is now opened by wcat\n", argv[i]);

    while (fgets(input, 50, fptr) != NULL) {
      printf("%s", input);
    }
    fclose(fptr);
    printf("Done\n");
  }
  return (0);
}



