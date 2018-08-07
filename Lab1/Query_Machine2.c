#include <stdio.h>
int main()
{
  int i, current_state = 0;
  char input[10];
  printf("Input:");
  scanf("%s", input);
  for (i = 0; input[i] != '\0'; i++) //till length of input
  {
    if (current_state == 0) //current state is integer
    {
      if (input[i] == '0') // go to state 1 if value is 0
        current_state = 1;
      else if (input[i] == '1') // go to state 3 if value is 1
        current_state = 3;
      else // reject if input has value other than 0 or 1
      {
        printf("Input should contain only 0 or 1\n");
        return -1; // error
      }
    }
    else if (current_state == 1)
    {
      if (input[i] == '0')
        current_state = 1;
      else if (input[i] == '1')
        current_state = 2;
      else // reject if input has value other than 0 or 1
      {
        printf("Input should contain only 0 or 1\n");
        return -1; //error
      }
    }
    else if (current_state == 2)
    {
      if (input[i] == '0')
        current_state = 1;
      else if (input[i] == '1')
        current_state = 2;
      else // reject if input has value other than 0 or 1
      {
        printf("Input should contain only 0 or 1\n");
        return -1; //error
      }
    }
    else if (current_state == 3)
    {
      if (input[i] == '0')
        current_state = 1;
      else if (input[i] == '1')
        current_state = 2;
      else // reject if input has value other than 0 or 1
      {
        printf("Input should contain only 0 or 1\n");
        return -1; //error
      }
    }
  }
  if (current_state == 2)
    printf("Input Accepted\n");
  else
    printf("Input Not Accepted\n");
}