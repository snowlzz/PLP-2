# include <stdio.h>
# include <conio.h>
int main(int argc, char *argv[]){
   int ct, number, min, max, sum;
   sum=ct=0;
   printf("Entre o numero: ");
   while(scanf("%d",&number)!=0){
     if (ct==0)
        min=max=number;
     ct++;
     sum+=number;
     min=number<min?number:min;
     max=number>max?number:max;
     printf("Entre o numero: ");
   }
   printf("%d numeros lidos\n",ct);
   if (ct>0){
      printf("Media:\t %3.2f\n",float(sum)/ct);
      printf("Maximo:\t %d\n",max);
      printf("Minimo:\t %d\n",min);
   }   
}

