void main()
{

    int x,y,s=0,r;

    printf("Enter a number:");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
    r=x%10;
    s=(s*10)+r;
    x=x/10;
    }
    if(s==y)
    {
        printf("it is palindrome");

    }
    else{


        printf("It is not palindrome");
    }


    getch();
}
