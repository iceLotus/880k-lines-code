#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
   int i;
   fp = fopen("main.cpp", "w+");
   for(i=1;i<10;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"��һλ��\"<<endl; \n");
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i);
      fprintf(fp, "cout<<\"��������:%d\"<<endl; \n",i);
      fprintf(fp, "break; \n");
   }
   for(;i<100;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"����λ��\"<<endl; \n");
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i%10);
      fprintf(fp, "cout<<\"ʮλ����:%d\"<<endl; \n",i/10);
      fprintf(fp, "cout<<\"��������:%d%d\"<<endl; \n",i%10,i/10);
      fprintf(fp, "break; \n");
   }
   for(;i<1000;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"����λ��\"<<endl; \n");
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i%10);
      fprintf(fp, "cout<<\"ʮλ����:%d\"<<endl; \n",i/10%10);
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i/100);
      fprintf(fp, "cout<<\"��������:%d%d%d\"<<endl; \n",i%10,i/10%10,i/100);
      fprintf(fp, "break; \n");
   }
   for(;i<10000;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"����λ��\"<<endl; \n");
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i%10);
      fprintf(fp, "cout<<\"ʮλ����:%d\"<<endl; \n",i/10%10);
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i/100%10);
      fprintf(fp, "cout<<\"ǧλ����:%d\"<<endl; \n",i/1000);
      fprintf(fp, "cout<<\"��������:%d%d%d%d\"<<endl; \n",i%10,i/10%10,i/100%10,i/1000);
      fprintf(fp, "break; \n");
   }
   for(;i<100000;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"����λ��\"<<endl; \n");
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i%10);
      fprintf(fp, "cout<<\"ʮλ����:%d\"<<endl; \n",i/10%10);
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i/100%10);
      fprintf(fp, "cout<<\"ǧλ����:%d\"<<endl; \n",i/1000%10);
      fprintf(fp, "cout<<\"��λ����:%d\"<<endl; \n",i/10000);
      fprintf(fp, "cout<<\"��������:%d%d%d%d%d\"<<endl; \n",i%10,i/10%10,i/100%10,i/1000%10,i/10000);
      fprintf(fp, "break; \n");
   }
   fclose(fp);
}
