#include <stdio.h>

int palindrom(int n){
    int s = 0;
    while (n > 0){
        s = s *10 + n % 10;
        n /=10;
    }
    return s;
}

int main(){
    int ch,f;
    scanf("%d", &ch);
    
    while (ch !=(f=palindrom(ch))){
        ch = f + palindrom(f);
        
    }   
    printf("%d\n", ch);
    return 0;
}
