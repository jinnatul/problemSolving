#include<stdio.h>

int main(){
    int d1, d2, h1, h2, m1, m2, s1, s2, stotal1, stotal2, stotal, dt, ht, mt, st;
    printf("Dia ");
    scanf("%d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    printf("Dia ");
    scanf("%d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
     stotal1 = d1*86400 + h1*3600 + m1*60 + s1;
    stotal2 = d2*86400 + h2*3600 + m2*60 + s2;
    stotal = stotal2 - stotal1;
    if(stotal>=60){
        dt = stotal/86400;
        ht = (stotal%86400)/3600;
        mt = ((stotal%86400)%3600)/60;
        st = ((stotal%86400)%3600)%60;
        printf("%d dia(s)\n", dt);
        printf("%d horas(s)\n", ht);
        printf("%d minutos(s)\n", mt);
        printf("%d segundos(s)\n", st);

    }
return 0;
}
