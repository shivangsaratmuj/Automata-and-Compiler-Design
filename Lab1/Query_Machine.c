#include <stdio.h>
int main()
{
  int current_state = 0, i;
  char input[10];
  printf("Input:");
  scanf("%s", input);
  for (i = 0; input[i] != '\0'; i++) //till length of input
  {
    if (current_state == 0) // current state is an integer
    {
      if (input[i] == '0') // go to state 1 if value is 0
        current_state = 1;
      else if (input[i] == '1') // go to state 0 if value is 1
        current_state = 0;
      else // reject if input has value other than 0 or 1
      {
        printf("Input should contain only 0 or 1\n");
        return -1; // error
      }
    }
    else
    {
      if (input[i] == '0') // go to state 0 if value is 0
        current_state = 0;
      else if (input[i] == '1') // go to state 1 if value is 1
        current_state = 1;
      else // reject if input has value other than 0 or 1
      {
        printf("Input should contain only 0 or 1\n");
        return -1; // error
      }
    }
  }
  if (current_state == 0) //if current state is ending where it should end
    printf("Accepted\n");
  else // else reject
    printf("Not Accepted\n");
  return 1; //proper
}