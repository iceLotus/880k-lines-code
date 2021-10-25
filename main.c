#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
   int i;
   fp = fopen("main.cpp", "w+");
   for(i=1;i<10;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"是一位数\"<<endl; \n");
      fprintf(fp, "cout<<\"个位数是:%d\"<<endl; \n",i);
      fprintf(fp, "cout<<\"倒过来是:%d\"<<endl; \n",i);
      fprintf(fp, "break; \n");
   }
   for(;i<100;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"是两位数\"<<endl; \n");
      fprintf(fp, "cout<<\"个位数是:%d\"<<endl; \n",i%10);
      fprintf(fp, "cout<<\"十位数是:%d\"<<endl; \n",i/10);
      fprintf(fp, "cout<<\"倒过来是:%d%d\"<<endl; \n",i%10,i/10);
      fprintf(fp, "break; \n");
   }
   for(;i<1000;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"是三位数\"<<endl; \n");
      fprintf(fp, "cout<<\"个位数是:%d\"<<endl; \n",i%10);
      fprintf(fp, "cout<<\"十位数是:%d\"<<endl; \n",i/10%10);
      fprintf(fp, "cout<<\"百位数是:%d\"<<endl; \n",i/100);
      fprintf(fp, "cout<<\"倒过来是:%d%d%d\"<<endl; \n",i%10,i/10%10,i/100);
      fprintf(fp, "break; \n");
   }
   for(;i<10000;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"是四位数\"<<endl; \n");
      fprintf(fp, "cout<<\"个位数是:%d\"<<endl; \n",i%10);
      fprintf(fp, "cout<<\"十位数是:%d\"<<endl; \n",i/10%10);
      fprintf(fp, "cout<<\"百位数是:%d\"<<endl; \n",i/100%10);
      fprintf(fp, "cout<<\"千位数是:%d\"<<endl; \n",i/1000);
      fprintf(fp, "cout<<\"倒过来是:%d%d%d%d\"<<endl; \n",i%10,i/10%10,i/100%10,i/1000);
      fprintf(fp, "break; \n");
   }
   for(;i<100000;i++){
      fprintf(fp, "case %d : \n",i);
      fprintf(fp, "cout<<\"是五位数\"<<endl; \n");
      fprintf(fp, "cout<<\"个位数是:%d\"<<endl; \n",i%10);
      fprintf(fp, "cout<<\"十位数是:%d\"<<endl; \n",i/10%10);
      fprintf(fp, "cout<<\"百位数是:%d\"<<endl; \n",i/100%10);
      fprintf(fp, "cout<<\"千位数是:%d\"<<endl; \n",i/1000%10);
      fprintf(fp, "cout<<\"万位数是:%d\"<<endl; \n",i/10000);
      fprintf(fp, "cout<<\"倒过来是:%d%d%d%d%d\"<<endl; \n",i%10,i/10%10,i/100%10,i/1000%10,i/10000);
      fprintf(fp, "break; \n");
   }
   fclose(fp);
}
