#include <stdio.h>

int main()
{
    int tests;
    int x = 1;
    
    scanf("%d", &tests);
    while(tests--){

        int plyers; 
        int ageOfLider;
        int age;
        
        scanf("%d", &plyers);
        int collect = (plyers-1)/2;
        while(plyers--){
            scanf("%d", &age);
            if(plyers == collect){
                ageOfLider = age;
            }
            
        }

        printf("Case %d: %d\n", x++, ageOfLider);

    }

    return 0;
    
}