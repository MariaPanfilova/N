int main ()
{
    N a, b;
    int c,d,i;
    printf("Enter sizes: ");
    scanf("%d %d", &a.n, &b.n);
    printf("Enter a: ");
    scanf("%d", &c);
    a.A = (int*)calloc(a.n,sizeof(int));
    i = 0;
    while(c > 0)
    {
        a.A[i] = c % 10;
        c = c / 10;
        i++;
    }
    for(i = a.n-1; i >=0 ; i--)
    {
        printf("%d ", a.A[i]);
    }
    puts("");
    printf("Enter b: ");
    scanf("%d", &c);
    b.A = (int*)calloc(b.n,sizeof(int));
    i = 0;
    while(c > 0)
    {
        b.A[i] = c % 10;
        c = c / 10;
        i++;
    }
    for(i = b.n-1; i >= 0; i--)
    {
        printf("%d ", b.A[i]);
    }
    puts("");
    printf("Result: %d", COM_NN_D(a,b));
    return 0;
}
