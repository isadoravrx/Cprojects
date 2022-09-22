#include <stdio.h>

int main()
{
    int tests;
    
    scanf("%d", &tests);
    while(tests--){

        int plyers; 
        int ageOfLider;
        int age;

        int x = 1;
        int sum = 0;
        scanf("%d",plyers);  //ISSO
        while(plyers--){
            scanf("%d", &age);//ISSO
            sum+=age;
            
        }

        ageOfLider = sum / plyers;
        printf("Case %d: %d\n", x, ageOfLider);
        x++;


    }

    return 0;
    
}