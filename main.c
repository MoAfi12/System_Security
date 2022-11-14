#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("               Hello , Welcome Mr Look ^_^ ");

    int password;
    int fakeInput;
    printf(" \n\n             Please What Type Your Password = ");
    scanf(" %d" ,  &password);

    if(password <= 2022  && password >=2022){

    printf("  \n                 Correct The Password ");
    printf(" \n       \n         Welcome My Close Friend  \n");

       scanf("%d" , fakeInput);
    }



   else{
         printf("  \n              The Password Wrong -_- ");
        printf("  \n               still you have chance 2 Times ");

         printf("  \n    \n             Try Again ");
         scanf("%d" , &password);

     if(password <= 2022  && password >=2022){
     printf("  \n                     Correct The Password ");
        printf(" \n     \n            Welcome My Close Friend \n ");

         scanf("%d" , fakeInput);

     }

    else{
         printf("  \n                The Password Wrong -_- ");
        printf(" \n                  still you chance 1 Times ");

         printf("  \n   \n                Try Again ");
         scanf("%d"  , &password);
    }

          if(password <= 2022  && password >=2022){
    printf("  \n                          Correct The Password ");
        printf("     \n                   Welcome My Close Friend \n \n");

                               scanf("%d\n"  , fakeInput);
          }

         else{



        printf("\n                          Wrong ");
        printf("\n                          Wrong ");
        printf("\n                          Wrong ");
        printf("\n                          Wrong ");
        printf("\n                          Wrong ");
        printf("\n                          Wrong  \n");

         }


    return 0;
   }
}
