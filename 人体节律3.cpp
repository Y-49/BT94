#include<stdio.h>
	int main (){
		int run(int x,int y);
		int day(int x,int y, int z);
		void qinkuang(int m,int n,int k);
		int m,n,k,sum;
		int x,y,z;
		printf("��������������գ�����ʽ����2000 03 17��\n");
		scanf("%d%d%d",&x,&y,&z);
		int a,b,c;
		 	printf("������ϣ����ѯ�����ڣ�����ʽ����2019 04 17��\n");
 		scanf("%d%d%d",&a,&b,&c);
 		//sum������������� 
		sum=(a-x)*365+run(x,a)-day(x,y,z)+day(a,b,c);
		m=sum%23;			//mΪ���� 
		n=sum%28;			//nΪ���� 
		k=sum%33;			//kΪ���� 
		qinkuang(m,n,k); 
		return 0;
		
	}
	
	
	int run(int x,int y){
		int leap=0;
		for(int i=x;i>=x&&i<=y;i++){
			if(i%100!=0&&i/4==0||i/400==0)
			leap++;
		}
		return leap;
	}
	int day(int x,int y,int z){
		if(x%100!=0&&x/4==0||x/400==0)	{
			switch(y){
				case 1:return z;
			break;
				case 2:return (31+z);
			break;
				case 3:return (31+29+z);
			break;
				case 4:return (31+29+31+z);
			break;
				case 5:return (31+29+31+30+z);
			break;
				case 6:return (31+29+31+30+31+z);
			break;
				case 7:return (31+29+31+30+31+30+z);
			break;
				case 8:return (31+29+31+30+31+30+31+z);
			break;
				case 9:return (31+29+31+30+31+30+31+31+z);
			break;
				case 10:return (31+29+31+30+31+30+31+31+30+z);
			break;
				case 11:return (31+29+31+30+31+30+31+31+30+31+z);
			break;
				case 12:return (31+29+31+30+31+30+31+31+30+31+30+z);
			break;
			}
		}
	else{
			switch(y){
				case 1:return z;
			break;
				case 2:return (31+z);
			break;
				case 3:return (31+28+z);
			break;
				case 4:return (31+28+31+z);
			break;
				case 5:return (31+28+31+30+z);
			break;
				case 6:return (31+28+31+30+31+z);
			break;
				case 7:return (31+28+31+30+31+30+z);
			break;
				case 8:return (31+28+31+30+31+30+31+z);
			break;
				case 9:return (31+28+31+30+31+30+31+31+z);
			break;
				case 10:return (31+28+31+30+31+30+31+31+30+z);
			break;
				case 11:return (31+28+31+30+31+30+31+31+30+31+z);
			break;
				case 12:return (31+28+31+30+31+30+31+31+30+31+30+z);
			break;
			}
	}
	
	}
	
void qinkuang(int m,int n,int k){
	if(m<12&&m!=0)
	printf("�������ڸ߳���\n");
	if(m==12)
	printf("���������ٽ���\n");
	if(m>12)
	printf("�������ڵͳ���\n");
	if(m==0)
	printf("��������������\n");
	
	if(n<14&&n!=0)
	printf("�������ڸ߳���\n");
	if(n==14)
	printf("���������ٽ���\n");
	if(n>14) 
	printf("�������ڵͳ���\n");
	if(n=0)	
	printf("��������������\n");
	
	if(k<17&&k!=0)
	printf("�������ڸ߳���\n");
	if(k==17)
	printf("���������ٽ���\n");
	if(k>17)
	printf("�������ڵͳ���\n");
	if(k==0) 
	printf("��������������\n");

	if((m==12&&n==14&&k==17)||(m==12&&n==14&&k==17)||(m==12&&k==17&&n==14)||(m==12&&n==14&&k==17))
	printf("�����������Σ���ڣ���ע�ⰲȫ��");
}
	
	
	