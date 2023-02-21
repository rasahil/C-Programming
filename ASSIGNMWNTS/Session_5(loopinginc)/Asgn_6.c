// Read a no to check Armstrong (153 -- 1^3+ 5^3 + 3^3= 153 , sum of cube of all digits is equal to a no )
  #include<conio.h>
  #include<stdio.h>

  void main()
  {
    int num , originalnum, remainder , result=0;
    printf(" Enter a three digit number :- ");
    scanf("%d",&num);
    originalnum=num;

    while(originalnum!=0)  // num must be greater than 0
    {
        //remainder contans the last digit 
        remainder = originalnum % 10;
        result+=remainder * remainder *remainder;  // sum of cube of remainder is assign to result
        //removing last num from the originalnum
        originalnum /= 10;

    }
    if(result == num)
    {
        printf(" %d is the Armstrong number ",num);
    }
    else
    {
        printf("%d is not Armstrong number ",num);
    }

    // cheking armstrong number 

  }