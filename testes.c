#include<stdio.h>

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    //int l = a/b; //pega a div int entre a e b
    // gcd(a,b) = gcd(a-l*b,b) = gcd(a%b,b)
    //a%b > b, gcd (a%b,b) = gcd(b,a%b)

    return gcd(b,a%b);
}

int main(){
    int entradaA, entradaB, mdc;
    scanf("%d %d",&entradaA,&entradaB);
    mdc = gcd(entradaA,entradaB);
    printf("%d\n",mdc);
    


    return 0;
}