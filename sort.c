/*
Name:Rohit Nesarikar
Purpose :KPIT Virtual Genesys Assignment for 1.A3
Problem:Find the biggest four digit number, by deleting a single digit from 5 digit number
*/
#include<stdio.h>
int main()
{
    int arr[5];     //array to store digits
    int n,tempn;    //store number and creating a backup
    int i,j;        //looping variables
    printf("\n Enter 5 digit number \n"); //reading 5 digit number
    scanf("%d",&n);
    tempn=n;
    for(i=0;i<5;i++)    //reading digits
    {
        arr[i]=tempn%10;
        tempn=tempn/10;
    }
    for(i=0;i<20;i++)    //sort digits
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                tempn=arr[i]
                arr[i]=arr[j];
                arr[j]=tempn;
            }
        }
    }
    printf("\nThe max 4 digit number that can be formed is:\t");    //print highest 4 digit
    for(i=0;i<4;i++)
    {
        printf("%d",arr[i]);
    }
 
}
