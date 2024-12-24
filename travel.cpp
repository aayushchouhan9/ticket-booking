#include<stdio.h>
int main()
{
	int a,b;
	float c,d,e;
	float p=10.50,g,h,f;
	
	printf("\n 1 mumbai");
	printf("\n 2 delhi");
	printf("\n 3 vadodara");
	printf("\n 4 hydrabad");
	printf("\n 5 indore");
	printf("\n 6 nagpur");
	
	printf("\n where you want to go");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("\n mumbai");
			printf("\n how many member want to go");
			scanf("%d",&b);
			c=b*350;
			d=c*18/100;
			e=c+d;
			
			printf("\n total amount=%.2f",c);
			printf("\n gst amount =%.2f",d);
			printf("\n total fair=%.2f",e);
			printf("\n enter promo code__");
			scanf("%f",&f);
			
			if(f==2788)
			{
				g=e*10.50/100;
				printf("\n discount=%.2f ",g);
				h=e-g;
				printf("\n after discount total fair=%.2f",h);
				
			}
			else
			{
				printf("\n enter wrong promocode");
			}
			break;
		
		
		
		
			case 2:
			printf("\n delhi");
			printf("\n how many member want to go");
			scanf("%d",&b);
			c=b*450;
			d=c*18/100;
			e=c+d;
			
			printf("\n total amount=%.2f",c);
			printf("\n gst amount =%.2f",d);
			printf("\n total fair=%.2f",e);
			printf("\n enter promo code__");
			scanf("%f",&f);
			
			if(f==2398)
			{
				g=e*8.50/100;
				printf("\n discount=%.2f ",g);
				h=e-g;
				printf("\n after discount total fair=%.2f",h);
				
			}
			else
			{
				printf("\n enter wrong promocode");
			}
			break;
		
				
			
			case 3:
			printf("\n vadodara");
			printf("\n how many member want to go");
			scanf("%d",&b);
			c=b*550;
			d=c*18/100;
			e=c+d;
			
			printf("\n total amount=%.2f",c);
			printf("\n gst amount =%.2f",d);
			printf("\n total fair=%.2f",e);
			printf("\n enter promo code__");
			scanf("%f",&f);
			
			if(f==2371)
			{
				g=e*15.50/100;
				printf("\n discount=%.2f ",g);
				h=e-g;
				printf("\n after discount total fair=%.2f",h);
				
			}
			else
			{
				printf("\n enter wrong promocode");
			}
			break;
		
			case 4:
			printf("\n hyderabad");
			printf("\n how many member want to go");
			scanf("%d",&b);
			c=b*250;
			d=c*18/100;
			e=c+d;
			
			printf("\n total amount=%.2f",c);
			printf("\n gst amount =%.2f",d);
			printf("\n total fair=%.2f",e);
			printf("\n enter promo code__");
			scanf("%f",&f);
			
			if(f==2410)
			{
				g=e*5.50/100;
				printf("\n discount=%.2f ",g);
				h=e-g;
				printf("\n after discount total fair=%.2f",h);
				
			}
			else
			{
				printf("\n enter wrong promocode");
			}
			break;
		
			
			case 5:
			printf("\n indore");
			printf("\n how many member want to go");
			scanf("%d",&b);
			c=b*300;
			d=c*18/100;
			e=c+d;
			
			printf("\n total amount=%.2f",c);
			printf("\n gst amount =%.2f",d);
			printf("\n total fair=%.2f",e);
			printf("\n enter promo code__");
			scanf("%f",&f);
			
			if(f==2736)
			{
				g=e*6.50/100;
				printf("\n discount=%.2f ",g);
				h=e-g;
				printf("\n after discount total fair=%.2f",h);
				
			}
			else
			{
				printf("\n enter wrong promocode");
			}
			break;
		
			
			case 6:
			printf("\n nagpur");
			printf("\n how many member want to go");
			scanf("%d",&b);
			c=b*420;
			d=c*18/100;
			e=c+d;
			
			printf("\n total amount=%.2f",c);
			printf("\n gst amount =%.2f",d);
			printf("\n total fair=%.2f",e);
			printf("\n enter promo code__");
			scanf("%f",&f);
			
			if(f==2738)
			{
				g=e*10.50/100;
				printf("\n discount=%.2f ",g);
				h=e-g;
				printf("\n after discount total fair=%.2f",h);
				
			}
			else
			{
				printf("\n enter wrong promocode");
			}
			break;
		
			
			default:
			printf("\n no option");
			break;
			
			
			
			
			
			
			
			
			
			
			
			
			
	}
	
	
	
	
	
	
	printf("\n\n\n\t\thappy journey");
	return 0;
	
	
	
	
	
	
	
}
