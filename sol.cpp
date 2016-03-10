#include <stdio.h>

int main(){
    char seq[1000001];
    
    int sub[1000001];
                   
    
    int i=0, j=0, c=0;
    
    int num=0;
    
    
    
    scanf("%s", seq);
    scanf("%d", &c);
                                                      
    
    for(int k=0; k<1000001; k++){
    
        if(seq[k] == '\0')
            break;
                                                                            
        
        sub[k] = num;
        
        if(seq[k] != seq[k+1]){
        
            num++;
            
        }
        
    }
    
    
    
    while(c){
    
        scanf("%d %d", &i, &j);
        
        
        
        if(sub[i] == sub[j])
            printf("Yes\n");
        
        else
            printf("No\n");

        c--;
        
    }
}
