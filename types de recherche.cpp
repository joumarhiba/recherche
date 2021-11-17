#include<stdio.h>
int v,i,t[5];
int simple_rch(int t[],int v){
	int i=1;
	while(i<=5){
		if(t[i]==v){
			return i;
		}
		i++;
	}
	return -1;
}

/*int dichotomique_rch(int t[],int v){
	int m,sup=4,inf=0;
	
	while(inf <= sup){
		m=(sup + inf )/2;
		if(t[m]==v){
			return m;
			}	
		else if(t[m]>v){
			sup=m-1;
		}
		else{
			inf =m+1;
		}
	}
	return -1;
}*/

int main(){
	int ss,ds,ind = 0;
	printf("remplir le tableau : \n");
	for(i=0;i<5;i++){
		printf("t[%d] = ",i);
		scanf("%d",&t[i]);
	}
	printf("donner la valeur a rechercher : ");
	scanf("%d",&v);
	ss=simple_rch(t,v);
	if(ss ==-1){
		printf("%d ne se trouve PAS dans le tableau",v);
	}else {
		printf("%d se trouve dans le tableau",v);
	}
	/*ds=dichotomique_rch(t,v);
	if(ds ==-1){
		printf("%d ne se trouve PAS dans le tableau",v);
	}else {
		printf("%d se trouve dans le tableau",v);
	}*/
}
