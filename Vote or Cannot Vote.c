/* program to check whether you are
 eligible to vote or not */
 #include<stdio.h>
 int main()
 {
  int age; //variable declaration
  printf("Enter your age: ");
  scanf("%d",&age); //asking for input by the user
  /* setting conditions using if...else statement 
            to check voting criteria */
  if(age>=18)
      printf("Eligible to vote!");
  else
      printf("Not eligible to vote");
                
