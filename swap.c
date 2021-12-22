int main()
{
	int a,b;
	printf("Enter the two numbers 'a' and 'b': \n");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("First number a:=%d\tSecond number b:=%d\n",a,b);
	return 0;
}
