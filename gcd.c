    /* Name: Rohit Nesarikar
    Purpose:KPIT Virtual Gensys C program Assignment  1C 3
    problem:GCD/HCF of two numbers
    */
    #include <stdio.h>
    int main()
    {
        int n1, n2, i, gcd=1;
        printf("Enter two integers: ");
        scanf("%d %d", &n1, &n2);
        for(i=1; (i <= n1 && i <= n2); ++i)
        {

            if(n1%i==0 && n2%i==0)
                gcd = i;
        }
        printf("G.C.D of %d and %d is %d", n1, n2, gcd);
        return 0;
    }
