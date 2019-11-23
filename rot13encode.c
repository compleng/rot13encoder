#include<stdio.h>

int main()

{

  char message[]="compleng", ch;

  int j, key=13;


  for(j = 0; message[j] != '\0'; ++j){

    ch = message[j];

    if(ch >= 'a' && ch <= 'z'){

      ch = ch + key;

      if(ch > 'z'){

        ch = ch - 'z' + 'a' - 1;

      }

      message[j] = ch;

    }

    else if(ch >= 'A' && ch <= 'Z'){

      ch = ch + key;

      if(ch > 'Z'){

        ch = ch - 'Z' + 'A' - 1;

      }

      message[j] = ch;

    }

  }

  printf("Encrypted message: %s\n", message);

  return 0;

}
