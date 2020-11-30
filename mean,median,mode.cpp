#include<stdio.h>
int sort()
int mean(int a,int n)
{
	int sum = 0; 
    for (int i = 0; i < n; i++)  
        sum += a[i]; 
      
    return (double)sum/(double)n; 
}

double findMedian(int a[], int n) 
{ 
    // First we sort the array 
    sort(a, a+n); 
  
    // check for even case 
    if (n % 2 != 0) 
       return (double)a[n/2]; 
      
    return (double)(a[(n-1)/2] + a[n/2])/2.0; 
} 
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",mean(a,n));
}
