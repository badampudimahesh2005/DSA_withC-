#include<stdio.h>
//
//union udata {
//	int a;
//	int b;
//	
//};
//
//struct sdata{
//	union udata c;
//	int d;
//	
//};
//
//int main(){
//	struct sdata da ={10, 20};
//	
//	printf("%ld",sizeof(da));
//	printf("%d %d %d ",da.c.a ,da.c.b,da.d);
//	return 0;
//}


//
//int main(){
//	int array[] = {10,20,30,40,50};
//	int *ip,i;
//	 
//	for(ip=array+4,i=0;i<5;i++){
//		printf(" %d",ip[-i]);
//	}
//	return 0;
//}




//
//struct result{
//	char subject[20];
//	int mark;
//	
//};
//
//int main(){
//	struct result r[]={
//		{"maths",95},
//		{"science",93},
//		{"english",80}
//	};
//	printf("%s ", r[1].subject);
//	printf("%d", (*(r+2)).mark);
//	return 0;
//}






/*consider a three dimensional  array arr[5][10][20] .
 an element from this array can be represented as arr[i][j][k] where 0<=i<=4   0<=j<=9 ,0<=k<=19 .
 how can you write arr[2][6][10] in an equivalent pointer expression */


//int main(){
//	int x=1;
//	int y;
//	y=(x=x+5, x*5);
//	
//	printf("%d",y);
//	return 0;
//	
//	
//}
//

//
//int main(){
//
//	typedef double num[3];
//	num array[5] = {1,2,3,4,5,6};
//	
//	printf("%u",sizeof(array));
//	
//	printf("%.2f",array[1][1]);
//	
//	return 0;
//}





//
// enum covid_prevention{
//	sanitizer =1,
//	wear_mask =2,
//	soc_distance =4
//	
//};
//
//int main(){
//	int mycovidprevention = wear_mask | soc_distance;
//	
//	printf("%d",mycovidprevention);
//	return 0;
//}


int main(){
	int x=1;
	switch(x)
	{
		case x:
			printf("case 1");
			break;
		case x+1:
		printf("case 2");
		break;
		default:
			printf("default block");
			break;
	}
	return 0;
}


