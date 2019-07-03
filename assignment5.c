#include <stdio.h>
#include <string.h>

char in_array(char *q){
	char F[2][3] = {{'U','U','U'},{'U','U','C'}};
	char L[6][3] = {{'U','U','A'},{'U','U','G'},{'C','U','U'},{'C','U','C'},{'C','U','A'},{'C','U','G'}};
	char I[3][3] = {{'A','U','U'},{'A','U','C'},{'A','U','A'}};
	char M[1][3] = {{'A','U','G'}};
	char V[4][3] = {{'G','U','U'},{'G','U','C'},{'G','U','A'},{'G','U','G'}};
	char S[6][3] = {{'U','C','U'},{'U','C','C'},{'U','C','A'},{'U','C','G'},{'A','G','U'},{'A','G','C'}};
	char P[4][3] = {{'C','C','U'},{'C','C','C'},{'C','C','A'},{'C','C','G'}};
	char T[4][3] = {{'A','C','U'},{'A','C','C'},{'A','C','A'},{'A','C','G'}};
	char A[4][3] = {{'G','C','U'},{'G','C','C'},{'G','C','A'},{'G','C','G'}};
	char Y[2][3] = {{'U','A','U'},{'U','A','C'}};
	char STOP[3][3] = {{'U','A','A'},{'U','A','G'},{'U','G','A'}};
	char H[2][3] = {{'C','A','U'},{'C','A','C'}};
	char Q[2][3] = {{'C','A','A'},{'C','A','G'}};
	char N[2][3] = {{'A','A','U'},{'A','A','C'}};
	char K[2][3] = {{'A','A','A'},{'A','A','G'}};
	char D[2][3] = {{'G','A','U'},{'G','A','C'}};
	char E[2][3] = {{'G','A','A'},{'G','A','G'}};
	char C[2][3] = {{'U','G','U'},{'U','G','C'}};
	char W[1][3] = {{'U','G','G'}};
	char R[6][3] = {{'C','G','U'},{'C','G','C'},{'C','G','A'},{'C','G','G'},{'A','G','A'},{'A','G','G'}};
	char G[4][3] = {{'G','G','U'},{'G','G','C'},{'G','G','A'},{'G','G','G'}};
	int i,j,k;
	
	for(i=0;i<2;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==F[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'F';
		}
	}
	
	
	for(i=0;i<6;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==L[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'L';
		}
	}
	
	
	for(i=0;i<3;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==I[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'I';
		}
	}
	
	
	for(i=0;i<1;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==M[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'M';
		}
	}
	
	
	for(i=0;i<4;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==V[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'V';
		}
	}
	
	
	for(i=0;i<6;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==S[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'S';
		}
	}
	
	
	for(i=0;i<4;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==P[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'P';
		}
	}
	
	
	for(i=0;i<4;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==T[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'T';
		}
	}
	
	
	for(i=0;i<4;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==A[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'A';
		}
	}
	
	for(i=0;i<3;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==STOP[i][j]){
				k++;
			}
		}
		if(k==3){
			return '0';
		}
	}
	
	for(i=0;i<2;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==H[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'H';
		}
	}
	
	for(i=0;i<2;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==Q[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'Q';
		}
	}
	
	for(i=0;i<2;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==N[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'N';
		}
	}
	
	
	for(i=0;i<2;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==K[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'K';
		}
	}
	
	
	for(i=0;i<2;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==D[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'D';
		}
	}
	
	
	for(i=0;i<2;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==E[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'E';
		}
	}
	
	
	for(i=0;i<2;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==C[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'C';
		}
	}
	
	
	for(i=0;i<1;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==W[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'W';
		}
	}
	
	
	for(i=0;i<6;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==R[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'R';
		}
	}
	
	
	for(i=0;i<4;i++){
		k=0;
		for(j=0;j<3;j++){
			if(q[j]==G[i][j]){
				k++;
			}
		}
		if(k==3){
			return 'G';
		}
	}
	
}

int analyze(char *arr,char *get,int len){
	int count = 0;
	int start,final;
	int c1=0,c2=0;
	char c;
	int i;
	char temporary[3];
	temporary[0]=get[0];
	temporary[1]=get[1];
	temporary[2]=get[2];
	if(temporary[0]=='A' && temporary[1]=='U' && temporary[2]=='G'){
		c1=1;
	}
	while(count*3<len){
		start = count*3;
		for(i=0;i<3;i++){
			temporary[i]=get[start+i];
		}
		c = in_array(temporary);
		if(c=='0'){
			c2=1;
			arr[count] = '\0';
			break;
		}
		arr[count] = c;
		count++;
	}
	if(c1==1 && c2==1){
		return 1;
	}else if(c1==0 && c2==1){
		return 3;
	}else if(c1==1 && c2==0){
		return 2;
	}else{
		return 3;
	}
}

int arrprint(char *c,int len){
	int i;
	for(i=0;i<len;i++){
		if(i==len-1){
			printf("%c",c[i]);
		}else{
			printf("%c",c[i]);
			printf("-");
		}
	}
}

int main(int argc,char *argv[]){
	FILE *fp;
	char buff[255];
	char myProteinA[]="AUGGUGGCGGAGGGGACGAAGAGGAUCUAA";
	char myProteinB[]="AUGGGAGAAGCAGUAAGAAAAACAAUAUAG";
	char myProteinC[]="AUGUUUUCCUAUUGCCUGCCACAACGCUGA";
	char myProteinD[]="AUGUUCUUGGUCCCUACUUACGAUCAUUAA";
	char myProteinE[]="AUGUUUUCCUAUUGCCUGCCAAAACGCUGA";
	int lenA = sizeof(myProteinA)/sizeof(char);
	int lenB = sizeof(myProteinB)/sizeof(char);
	int lenC = sizeof(myProteinC)/sizeof(char);
	int lenD = sizeof(myProteinD)/sizeof(char);
	int lenE = sizeof(myProteinE)/sizeof(char);
	int i,j,k,ok;
	char aslA[lenA/3];
	char aslB[lenB/3];
	char aslC[lenC/3];
	char aslD[lenD/3];
	char aslE[lenE/3];
	char getX[10];
	
	analyze(aslA,myProteinA,lenA);
	analyze(aslB,myProteinB,lenB);
	analyze(aslC,myProteinC,lenC);
	analyze(aslD,myProteinD,lenD);
	analyze(aslE,myProteinE,lenE);
	
	fp = fopen(argv[1],"r");
	fscanf(fp,"%s",buff);
	ok = analyze(getX,buff,31);
	
	if(ok==3){
		printf("Not start with AUG it is not a protein");
	}else if(ok==2){
		printf("It is not a protein! No Stop code");
	}
	else if(strcmp(aslA,getX)==0){
		printf("myProteinA is identified in sequence.\n\n");
		printf("The amino acids of myProteinA: ");
		arrprint(aslA,lenA/3-1);
	}else if(strcmp(aslB,getX)==0){
		
		printf("myProteinB is identified in sequence.\n\n");
		printf("The amino acids of myProteinB: ");
		arrprint(aslB,lenB/3-1);
	}else if(strcmp(aslC,getX)==0){
		
		printf("myProteinC is identified in sequence.\n\n");
		printf("The amino acids of myProteinC: ");
		arrprint(aslC,lenC/3-1);
	}else if(strcmp(aslD,getX)==0){
		
		printf("myProteinD is identified in sequence.\n\n");
		printf("The amino acids of myProteinD: ");
		arrprint(aslD,lenD/3-1);
	}else if(strcmp(aslE,getX)==0){
		
		printf("myProteinE is identified in sequence.\n\n");
		printf("The amino acids of myProteinE: ");
		arrprint(aslE,lenE/3-1);
	}else{
		printf("It is not known protein.\n\n");
		printf("It is probably a new protein. ");
	}
	printf("\n");
	
}
