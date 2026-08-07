//       pointer add(&) and derefrencing operator(*)



/*#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p;

    p = (&a, &b);      // Comma operator

    printf("%d", *p);

    return 0;
}




#include<stdio.h>

int main()
{
    int a = 10, b = 9;
    int *p;

    p = &a;                   // p stores address of a
    printf("%d\n", *p);       // Output: 10

    p = &b;                   // Now p stores address of b
    printf("%d\n", *p);       // Output: 9

    return 0;
}*/





/*#include<stdio.h>
int main(){
    
     int a=10 ,b=50,c;
     int *p,*q;
     p=&a;
     q=&b;
     c=*p; 

     printf("%d\t%d\t%d\n",*p,*q,c);
     printf("%x\n",&p);
     printf("%x",p);
     return 0;
}*/



//              pointer assignment



/*#include<stdio.h>
int main(){
    
     int a=10 ,b=50;
     int *p,*q;
     p=&a;
     q=&b;
     *q=*p;  //          b will replace 11 to 10 which is vaue of a
     q=p;

     printf("%d\t%d\t%d\t%d\n",a,*p,*q,q);
     
    
     return 0;
}*/




//              POINTER TO POINTER or accessing value using three level pointers


/*#include<stdio.h>
int main(){
    
     int a=10;
     int*p=&a;
     int**q=&p;   // cause p ka datatype int* hai we cant write &a cause uska int h DT..
     int ***r=&q;
     *p=12;          // changing a value to 12 
     **q=15;               // changing a value to 12 

     printf("%d %d %d %d\n",a,*p,*(*q),*(*(*r)));
     printf("add of q is%d\t%d\n",r,&q);
     printf("add of p is%d\t%d\n",q,&p);
     
    
     return 0;
}*/



//         pointer arthmetic addition



/*#include<stdio.h>
void main(){

    int a[5]={1,4,6,-5,3};
    int* p=&a[0];
    printf("%d\n",*p);
    p=p+4;
    printf("%d\n",*p);
    *p=6;
    printf("%d",*p);

    return 0;
}*/



//           pointer arthmetic substraction



/*#include<stdio.h>
int main(){

    int a[5]={1,4,6,-5,3};
    int *p=a;
    int *q=&a[3];
    printf("%d\n",p-q);
    p=p-1;
    printf("%d\n",p);
    

    return 0;
}*/

                           //increment and decrement operator in pointers 



/*#include<stdio.h>
int main(){

    int a[]={2,3,6,-5,3};
    int *p;
    p=&a[2];
   // printf("%d  %d   %d\n",--(*p),--(*p),--(*p));  //    this will decrement value     
   // printf("%d  %d   %d\n",(*p)++,(*p)++,(*p)++);      //         this will increment the value       
    //printf("%d  %d ",*--p,*--p);                  //           this will decrement  the index
   // printf("%d\n",*p++);
 // printf("%d  %d ",*++p,*++p);           // this will increment the index
   printf("%d  %d ",*p--,*p--);          //this will decrement  the index 

    return 0;
}*/








//                            PROBLEM 1 




/*#include<stdio.h>
int main(){

    const int a=10;
    int *p=&a;
    *p=12;
    printf("%d",a);
}*/






//                            PROBLEM 2 pointer to string

/*#include<stdio.h>
int main(){

    char str[]="Akarshisagoodboy";
    char *ptr=str;
    printf("%c\n",*ptr);
    printf("%c\n",*(ptr++ + 1));
    printf("%c\n", *(ptr + 2));
    printf("%c\n", *ptr++);
    printf("%c\n", *ptr);
    printf("%c\n", *(ptr++ + 2));
    printf("%c\n", *(++ptr + 1));
    printf("%c\n", *((ptr-- + 4) - 1));
    printf("%c\n", *((ptr-- + 5) - 2));
    

    

    return 0;

}*/







//                                VOID pointer



//    A void pointer is a pointer capable of holding the address of any data type.
//  Before dereferencing it, it must be converted into the appropriate pointer type.



/*#include<stdio.h>
int main(){

    int a=10;
    float b=3.14;
    char c='D'; 
    void *vp;

    vp=&a;
    printf("%d\n",*(int*)vp);

    vp=&c;
    printf("%c\n",*(char *)vp);
    
    vp=&b;
    printf("%f\n",*(float *)vp);

    return 0;
}*/






//            NULL POINTER 

//  A null pointer is a pointer that is INTENTIONALLY SETS TO value NULL
//  and does not point to any valid memory location or object.



/*#include<stdio.h>
int main(){

    int a=3;
    int *ptr=NULL;
    if(ptr==NULL){ 
        printf("pointer is Null");
    }
    else
        {
            printf("%d",*ptr);
        }
    

    return 0;
}*/








//                DANGLING POINTER




//  A dangling pointer is a pointer that still holds the address of a memory location 
//  that is no longer valid. This usually happens after the memory it points to has been freed
//                         OR 
// dangling pointer points to a memory location that is freed()






/*#include<stdio.h>
int main(){

    int *ptr=(int *)malloc(sizeof(int));
    *ptr=100;
     printf("%d\n",*ptr);
    
     free(ptr);   //    ptr is now a dangling pointer (undefined behaviour)
                  
     *ptr=NULL;

     printf("%d",*ptr);    
     
     return 0;
}*/




/*#include<stdio.h>

    int *f()
    {
        int a=10;
        return &a;
    }    

    int main(){
        int *ptr=f();

        printf("%d",*ptr);       // undefined behaviour

        return 0;
    }*/




    #include<stdio.h>
    int main()
    {
        int *ptr=NULL;
        {
        int a=10;
        ptr=&a;
        printf("%d\n",*ptr);
    }    

    
    
        printf("%d",*ptr);       // undefined behaviour

        return 0;
    }



    //               WILD POINTER 


    //int *ptr;      //a pointer which is uninitailised  
    
    // act as a wild pointer 


