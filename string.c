/*#include<stdio.h>
#include<string.h>
int main(){


    unsigned count=0,i=0;
    char name [20];
    printf("enter name ");
    fgets(name,20,stdin);
    
    for(i=0;name[i]!='\0';i++){
        count++;
     }
     printf("%d",count);
   return 0;
}*/







                             // to combine two strings without strcat () function

/*#include<stdio.h>
#include<string.h>
int main(){ 



    int len1,len2,i;
    char s1 [50];
    char s2[40];
    printf("enter name ");
    gets(s1);
    printf("enter name ");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<=len2;i++){
        s1[len1+i]=s2[i];
    }
    printf("%s",s1);
   return 0;
}*/





//                  comparing two strings with strcmp()

/*#include<stdio.h>
#include<string.h>
int main(){
    
    int comp;
    char s1[20];
    printf("enter first  string to compare ");
    gets(s1);
    char s2[20];
    printf("enter first  string to compare ");
    gets(s2);

    comp=strcmp(s1,s2);

    if(comp==0){
        printf("same");
    }

    else{
        printf("not same");
    }
        return 0;
}*/





//                  comparing two strings without strcmp()






/*#include<stdio.h>
#include<string.h>
int main(){
    
    int i ,flag=0;
    char s1[20];
    printf("enter first  string to compare ");
    gets(s1);
    char s2[20];
    printf("enter first  string to compare ");
    gets(s2);

    for(i=0;s1[i]!='\0'|| s2[i]!='\0';i++){

        if(s1[i]!=s2[i]){
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("string not same");
    }
    else{
        printf("same string");
    }

   return 0;

}*/   








//      REVERSE A STRING without using strrev()





/*#include<stdio.h>
#include<string.h>
int main(){

    char s1[30];
    printf("enter string to reverse ");
    gets(s1);
    strrev(s1);
    printf(" reverse:%s ",s1);
return 0;
}*/






//      REVERSE A STRING without using strrev()



/*#include<stdio.h>
#include<string.h>
int main(){


    int i,temp,len;
    char s1[30];
    printf("enter string to reverse ");
    gets(s1);
    len=strlen(s1);
    for (i=0;i<len/2;i++){

        temp=s1[i];
        s1[i]=s1[len-1-i];
        s1[len-1-i]=temp;

        
    }
    printf("%s",s1);
    
       return 0;
}*/
    





//                  REVERSE A STRING with traversing with i , j







/*#include<stdio.h>
#include<string.h>
int main(){


    int i,temp,len,j;
    char s1[30];
    printf("enter string to reverse ");
    gets(s1);
    len=strlen(s1);
    for (i=0,j=len-1;i<j;i++,j--){

        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;

        
    }
    printf("%s",s1);
    
       return 0;
};*/








//                c program to convert upper case to lower without using strlwr() or strupr() 






/*#include<stdio.h>
#include<string.h>
int main(){


    int i,len;
    char s1[30];
    printf("enter string ");
    gets(s1);
    len=strlen(s1);
    for (i=0;i<len;i++){
        if(s1[i]>='A'&&s1[i]<='Z'){
           s1[i]=s1[i]+32;
        }
    }
  
    printf("%s",s1);
    
       return 0;
}*/