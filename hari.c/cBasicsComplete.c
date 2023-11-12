//max and min of given numbers

/*
#include<stdio.h>
int main()
{
	int n,i,tot,lar,sm;
	printf("Enter total no.of numbers: ");
	scanf("%d",&tot);
	printf("Enter first number:\n");
	scanf("%d",&n);
	lar=n;
	sm=n;
	for(i=0;i<tot;i++)
	{
		scanf("%d",&n);
		if(n>lar)
		lar=n;
		else if(n<sm)
		sm=n;
	}
	printf("large and small are %d and %d",lar,sm);
}
*/

//roots of quadratic equation

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double r1,r2,dis,real,imaginary;
	printf("Enter the coefficients: ");
	scanf("%d %d %d",&a,&b,&c);
	dis=pow(b,2)-4*a*c;
	if(dis>0)
	{
		r1=((-b)+sqrt(dis))/(2*a);
		r2=((-b)-sqrt(dis))/(2*a) ;
		printf("root 1=%.2lf and root 2=%.2lf",r1,r2);
	}
	else if(dis==0)
	{
		r1=r2=(-b)/2*a;
		printf("root 1=%.2lf and root 2=%.2lf",r1,r2);
	}
	else
	{
		real=(-b)/(2*a);
		imaginary=sqrt(-dis)/(2*a);
		printf("root 1=%.2lf + i%.2lf and root 2=%.2lf - i%.2lf",real,imaginary,real,imaginary);
	}
}
*/


//set 1

//armstrong number or not

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int dec,n,p,rem,sum=0,a=0;
	printf("Enter a number: ");
	scanf("%d",&dec);
	n=dec;
	p=dec;
	while(p>0)
	{
		a++;
		p=p/10;
	}
	while(n>0)
	{
		rem=n%10;
		sum=sum + pow(rem,a);
		n/=10;
	}
	if(sum==dec)
	printf("armstrong number");
	else
	printf("not");
}
*/

//decimal number to hexadecimal

/*
#include<stdio.h>
int main()
{
	int n,dec,q=0,rem,i,j;
	char h[10];
	printf("Enter a decimal number: ");
	scanf("%d",&dec);
	n=dec;
	for(i=0;n>0;i++)
	{
		rem=n%16;
		if(rem<10)
		h[i]=rem+48;
		else 
		h[i]=rem+55;
		n=n/16;
	}
	printf("hexadecimal number is\n");
	for(j=i-1;j>=0;j--)
	printf("%c",h[j]);
}

*/

//set 2

//decimal to binary number

/*
#include<stdio.h>
int main()
{
	int num,bi,rem,base=1;
	printf("Enter decimal number: ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%2;
		bi+=rem*base;
		num=num/2;
		base=base*10;
	}
	printf("its equivalent binary number is %d",bi);
}

*/


//program to copy string
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str[30];
	gets(str1);
	strcpy(str,str1);
	printf("The resultant string is %s",str);
}
*/

//set 3

//decimal to octal

/*
#include<stdio.h>
int main()
{
	int n,dec,q=0,rem,i,j;
	int h[10];
	printf("Enter a decimal number: ");
	scanf("%d",&dec);
	n=dec;
	for(i=0;n>0;i++)
	{
		rem=n%8;
		h[i]=rem;
		n=n/8;
	}
	printf("OCTAL number is\n");
	for(j=i-1;j>=0;j--)
	printf("%d",h[j]);
}

*/

//pascal triangle

/*
#include<stdio.h>
int main()
{
	int n,i,j,s,c;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=1;s<n-i;s++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
		if(i==0 || j==0)
		c=1;
		else
		c=c*(i-j+1)/j;
	    printf("%d ",c);
	}
	printf("\n");
}
}

*/

//set 4

//pyramid of numbers

/*
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		printf(" ");
		for(k=0;k<2*i-1;k++)
		printf("%d",i);
		printf("\n");
	}
}

*/

//length of the string

/*
#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char s[30];
	gets(s);
    len=strlen(s);
    printf("String length is %d",len);
}

*/

//set 5

//fibonacci using recursion

/*
#include<stdio.h>
int fib(int);
int main()
{
	int i,n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("fibonacci series is: ");
	for(i=0;i<n;i++)
	{
		printf("%d",fib(i));
	}
}
int fib(int i)
{
	if(i==0 || i==1)
	return i;
	else 
	return fib(i-1) + fib(i-2);
}
*/

//matrix addition

/*
#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter matrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter matrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	printf("matrix 3 is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}	
}


*/

//set 6

//gcd using recursion

/*
#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b,result;
	printf("ENter the numbers: \n");
	scanf("%d %d",&a,&b);
	result=gcd(a,b);
	printf("GCD of 2 numbers is %d",result);
}
int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
*/

//matrix multiplication

/*
#include<stdio.h>
int main()
{
	int i,j,k,sum=0,a[3][3],b[3][3],c[3][3];
	printf("Enter matrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter matrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	printf("matrix 3 is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   c[i][j]=0;
		   for(k=0;k<3;k++)
		   {
		   	c[i][j]+=a[i][k]*b[k][j];
		   }	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}	
}
*/

//set 7

//concatenate 2 strings

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[30];
	gets(s1);
	gets(s2);
	strcat(s1,s2);
	printf("the string is %s",s1);
}

*/

//factorial usingg recursion

/*
#include<stdio.h>
int fact(int);
int main()
{
	int a;
	printf("Enter number: ");
	scanf("%d",&a);
	printf("The factorial of number is: %d",fact(a));
}
int fact(int a)
{
	if(a==0 || a==1)
	return 1;
	else
	return a*fact(a-1);
}
*/

//set 8

//sm and big number using pointer

/*
#include<stdio.h>
int main()
{
	int n,i,sm,lar,a[n];
	printf("Enter size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int *p;
	sm=a[0];
	lar=a[0];
	for(i=0;i<n;i++)
	{
		p=&a[i];
		if(sm>*p)
		{
			sm=*p;
		}
		else if(lar<*p)
		lar=*p;
	}
	printf("large and small numbers are %d and %d",lar,sm);
}
*/

/*

*/

//sorting array

/*
#include<stdio.h>
int main()
{
	int i,j,n=6,temp,a[]={8,2,5,1,7,3};
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Array elements after sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
*/

//set 9

//calculator

/*
#include<stdio.h>
int main()
{
int a,b;
char op;
printf("enter operand: ");
scanf("%c",&op);
printf("Enter numbers: ");
scanf("%d",&a);
scanf("%d",&b);
switch(op)
{
	case '+': printf("%d",a+b);
	          break;
	case '-': printf("%d",a-b);
	          break;
	case '*': printf("%d",a*b);
	          break;
	case '/': printf("%d",a/b);
	          break;
}
}
*/


//sum and average

/*
#include<stdio.h>
int main()
{
	int n,a[30],sum=0,avg,i;
	printf("ENnter array size: ");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	printf("sum and avg is %d %d",sum,avg);
}

*/

//set 10

//search a element

/*
#include<stdio.h>
int main()
{
	int i,j=0,n=6,s,a[]={45,56,67,78,89,90};
	printf("Enter an element to search: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		j++;
	}
	if(j==0)
	{
		printf("Element was not found");
	}
	else
	printf("Element was found");
}
*/

//addition of matrices

/*
#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter matrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter matrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	printf("matrix 3 is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}	
}

*/

//set 11

//search element using arrays

/*
#include<stdio.h>
int main()
{
	int i,j=0,n=6,s,a[]={45,56,67,78,89,90};
	printf("Enter an element to search: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		j++;
	}
	if(j==0)
	{
		printf("Element was not found");
	}
	else
	printf("Element was found");
}
*/

//substarction of matrices

/*
#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter matrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter matrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	printf("matrix 3 is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]-b[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}	
}
*/

//set 12

//matrix multiplication

/*
#include<stdio.h>
int main()
{
	int i,j,k,sum=0,a[3][3],b[3][3],c[3][3];
	printf("Enter matrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter matrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	printf("matrix 3 is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   c[i][j]=0;
		   for(k=0;k<3;k++)
		   {
		   	c[i][j]+=a[i][k]*b[k][j];
		   }	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}	
}
*/

//area of circle

/*
#include<stdio.h>
#include<math.h>
void areacir();
int main()
{
	areacir();
}
void areacir()
{
	int r;
	float area,pi=3.14;
	printf("Enter r value: ");
	scanf("%d",&r);
	area=pi*pow(r,2);
	printf("area is %.2f",area);
}
*/

//set 13

//area of rectangle

/*
#include<stdio.h>
#include<math.h>
void arearec();
int main()
{
	arearec();
}
void arearec()
{
	int l,b,area;
	printf("Enter l and b values: ");
	scanf("%d %d",&l,&b);
	area=l*b;
	printf("area is %d",area);
}

*/

//transpose of a matrix

/*
#include<stdio.h>
int main()
{
	int i,j,k,sum=0,a[3][3];
	printf("Enter matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[j][i]);
		printf("\n");
	}
}
*/

//set 14

//calculator using functions
/*

#include<stdio.h>
void sum();
void sub();
void mul();
void div();
void rem();
int main()
{
	char op;
	int a,b;
	printf("Enter an operand: ");
	scanf("%c",&op);
	switch(op)
{
	case '+': sum();
	          break;
	case '-': sub();
	          break;
	case '*': mul();
	          break;
	case '/': div();
	          break;
	case '%': rem();
	          break;          
}
}
void sum()
{
	int a,b;
	printf("Enter numbers:\n");
	scanf("%d %d",&a,&b);
	printf("sum=%d",a+b);
}
void sub()
{
	int a,b;
	printf("Enter numbers:\n");
	scanf("%d %d",&a,&b);
	printf("sub=%d",a-b);
}
void mul()
{
	int a,b;
	printf("Enter numbers:\n");
	scanf("%d %d",&a,&b);
	printf("mul=%d",a*b);
}
void div()
{
	int a,b;
	printf("Enter numbers:\n");
	scanf("%d %d",&a,&b);
	printf("div=%d",a/b);
}
void rem()
{
	int a,b;
	printf("Enter numbers:\n");
	scanf("%d %d",&a,&b);
	printf("rem=%d",a%b);
}
*/

//binary to decimal

/*
#include<stdio.h>
#include<math.h>
int main()
{
	long int i,bin,dec=0,n,rem;
	printf("Enter binary no.: ");
	scanf("%ld",&bin);
	n=bin;
	for(i=0;n>0;i++)
	{
		rem=n%10;
		dec+=rem*pow(2,i);
		n/=10;
	}
	printf("decimal number is %d",dec);
}

*/

//set 15

//decimal to binary

/*
#include<stdio.h>
int main()
{
	int num,bi,rem,base=1;
	printf("Enter decimal number: ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%2;
		bi+=rem*base;
		num=num/2;
		base=base*10;
	}
	printf("its equivalent binary number is %d",bi);
}
*/

//prime or not

/*

#include<stdio.h>
int main()
{
	int num,rem,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num==2)
	{
	printf("prime number");
	return 0;
	}
	else if(num>2)
	{
		for(i=2;i<num;i++)
		{
			rem=num%i;
			if(rem==0)
			{
				printf("not a prime number");
				return 0;
			}
		}
		printf("prime number");
	}
}

*/

//set 16

//palindrome or not

/*
#include<stdio.h>
int main()
{
	int n,rem,rev=0,original;
	printf("ENter an integer: ");
	scanf("%d",&n);
	original=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(original==rev)
	printf("it is palindrome");
	else
	printf("it is not palindrome");
}

*/

//compare two strings

/*

#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char s1[30],s2[30];
	gets(s1);
	gets(s2);
	value=strcmp(s1,s2);
	if(value==0)
	printf("both are equal");
	else
	printf("Both are not equal");
}

*/

//set 17

//binary search

/*

#include<stdio.h>
int main()
{
	int f,l,m,n=6,s,a[]={45,56,67,78,89,90};
	printf("Enter an element to search: ");
	scanf("%d",&s);
	f=0;
	l=n-1;
	while(f<=l)
	{
	m=(f+l)/2;
	if(s==a[m])
	{
		printf("Element was found");
		return 0;
	}
	else if(s>a[m])
	f=m+1;
	else
	l=m-1;
    }
    printf("Element was not found");
}

*/

//area of rectangle

/*
#include<stdio.h>
#include<math.h>
void arearec();
int main()
{
	arearec();
}
void arearec()
{
	int l,b,area;
	printf("Enter l and b values: ");
	scanf("%d %d",&l,&b);
	area=l*b;
	printf("area is %d",area);
}
*/

//set 18


//BUBBLE SORT


/*
#include<stdio.h>
int main()
{
	int i,j,n=6,temp,a[]={8,2,5,1,7,3};
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Array elements after sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
*/

//substarction of matrices

/*
#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter matrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter matrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	printf("matrix 3 is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]-b[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}	
}
*/

//set 19

//SELECTION SORT

/*
#include<stdio.h>
int main()
{
	int i,j,min,temp,n=6,a[]={8,2,5,1,7,3};
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min] > a[j])
			min=j;
		}
		if(min!=i)
		{
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	printf("Array elements in descending order are: \n");
	for(i=n-1;i>=0;i--)
	printf("%d\n",a[i]);
}
*/

//sum and average

/*
#include<stdio.h>
int main()
{
	int n,a[30],sum=0,avg,i;
	printf("ENnter array size: ");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	printf("sum and avg is %d %d",sum,avg);
}

*/

//set 20

// structure with in a structure

/*

#include<stdio.h>
struct Address {
    char street[50];
    char city[50];
    char state[50];
    int pincode;
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    struct Person person1 = {"John", 30, {"123 Main St", "New York", "NY", 10001}};
    
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s, %s %d\n", person1.address.street, person1.address.city, person1.address.state, person1.address.pincode);
    
    return 0;
}

*/

//decimal number to hexadecimal

/*
#include<stdio.h>
int main()
{
	int n,dec,q=0,rem,i,j;
	char h[10];
	printf("Enter a decimal number: ");
	scanf("%d",&dec);
	n=dec;
	for(i=0;n>0;i++)
	{
		rem=n%16;
		if(rem<10)
		h[i]=rem+48;
		else 
		h[i]=rem+55;
		n=n/16;
	}
	printf("hexadecimal number is\n");
	for(j=i-1;j>=0;j--)
	printf("%c",h[j]);
}

*/

//set 21

/*
#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	int count=1;
	char ch;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
	printf("Error");
	return 0;
    }
    while(ch=getc(fp)!=EOF)
    {
       if(ch=='\n')
	   count++;	
	}
	fclose(fp);
	printf("%d lines",count);
}

*/

//factorial usingg recursion

/*
#include<stdio.h>
int fact(int);
int main()
{
	int a;
	printf("Enter number: ");
	scanf("%d",&a);
	printf("The factorial of number is: %d",fact(a));
}
int fact(int a)
{
	if(a==0 || a==1)
	return 1;
	else
	return a*fact(a-1);
}
*/

//set 22

//compare 2 strings without using built in function

/*
#include<stdio.h>
int main()
{
	int i,k=0;
	char s1[30],s2[30];
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	if(s1[i]!=s2[i])
	{
		k=1;
		break;
	}
	if(k==0)
	printf("Both are same");
	else
	printf("Both are not same");
}
*/

//armstrong number or not

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int dec,n,p,rem,sum=0,a=0;
	printf("Enter a number: ");
	scanf("%d",&dec);
	n=dec;
	p=dec;
	while(p>0)
	{
		a++;
		p=p/10;
	}
	while(n>0)
	{
		rem=n%10;
		sum=sum + pow(rem,a);
		n/=10;
	}
	if(sum==dec)
	printf("armstrong number");
	else
	printf("not");
}
*/

//set 23

//program to copy string
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str[30];
	gets(str1);
	strcpy(str,str1);
	printf("The resultant string is %s",str);
}
*/

//area of circle

/*
#include<stdio.h>
#include<math.h>
void areacir();
int main()
{
	areacir();
}
void areacir()
{
	int r;
	float area,pi=3.14;
	printf("Enter r value: ");
	scanf("%d",&r);
	area=pi*pow(r,2);
	printf("area is %.2f",area);
}
*/

//set 24

//pascal triangle

/*
#include<stdio.h>
int main()
{
	int n,i,j,s,c;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=1;s<n-i;s++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
		if(i==0 || j==0)
		c=1;
		else
		c=c*(i-j+1)/j;
	    printf("%d ",c);
	}
	printf("\n");
}
}

*/

//addition of matrices

/*
#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter matrix 1: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter matrix 2: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	printf("matrix 3 is:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}	
}

*/

//set 25


//pattern

/*
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		printf("%d ",j+1);
		printf("\n");
	}
}
*/

//prime or not

/*

#include<stdio.h>
int main()
{
	int num,rem,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num==2)
	{
	printf("prime number");
	return 0;
	}
	else if(num>2)
	{
		for(i=2;i<num;i++)
		{
			rem=num%i;
			if(rem==0)
			{
				printf("not a prime number");
				return 0;
			}
		}
		printf("prime number");
	}
}

*/

//set 26

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double r1,r2,dis,real,imaginary;
	printf("Enter the coefficients: ");
	scanf("%d %d %d",&a,&b,&c);
	dis=pow(b,2)-4*a*c;
	if(dis>0)
	{
		r1=((-b)+sqrt(dis))/(2*a);
		r2=((-b)-sqrt(dis))/(2*a);
		printf("root 1=%.2lf and root 2=%.2lf",r1,r2);
	}
	else if(dis==0)
	{
		r1=r2=(-b)/2*a;
		printf("root 1=%.2lf and root 2=%.2lf",r1,r2);
	}
	else
	{
		real=(-b)/(2*a);
		imaginary=sqrt(-dis)/(2*a);
		printf("root 1=%.2lf + i%.2lf and root 2=%.2lf - i%.2lf",real,imaginary,real,imaginary);
	}
}

*/

//structure

/*
#include<stdio.h>
struct student{
	char name[30];
	int roll;
	int marks;
	float percent;
};
int main()
{
	struct student s1={"lalit",67,913,100};
	printf("%s\n",s1.name);
	printf("%d\n",s1.roll);
	printf("%d\n",s1.marks);
	printf("%.2f\n",s1.percent);
}

*/

//set 27

//command line arguments

/*
#include<stdio.h>
main(int argc,char *argv[])
{
	int i;
	printf("number of arguments are %d",argc);
	for(i=0;i<argc;i++)
	{
		printf("\n argument[%d] is %s",i,argv[i]);
	}
}
*/

//program to find string length

/*
#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char str1[30];
	gets(str1);
	len=strlen(str1);
	printf("The resultant string length is %d",len);
}
*/