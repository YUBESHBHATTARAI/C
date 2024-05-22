//print "nepal" in different form    
#inlude<stdio.h>
int main()
{
	int i,j;
	char arr[10]="nepal";
	
	for(i=0;i<6;i++){
		for(j=0;j<i;j++){
		printf("%c\t",arr[j]);
	}
printf("\n");
}
return 0;
}
