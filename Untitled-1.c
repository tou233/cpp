#include <stdio.h>
#include <stdlib.h>

#define N 4

int q[N+1];   // q[j] 表示第 j 行的皇后放在第几列

int check(int j){
    for(int i=1; i<j; i++){          // 只与前面已放的皇后比较
        if(q[i]==q[j] || abs(i-j)==abs(q[i]-q[j]))
            return 0;                // 同列或同对角线，冲突
    }
    return 1;
}

void queen(){
    int answer = 0;
    int i;

    for(i=1; i<=N; i++)              
        q[i] = 0;

    int j = 1;
    
    
    while(j >= 1){




        q[j] = q[j] + 1;             

        while(q[j] <= N && !check(j)) {
            q[j] = q[j] + 1;}



        if(q[j] <= N){    
            
            
            if(j == N){              
                answer++;
            } 
            else {               
                j++;
                q[j] = 0;           
            }
        } 
        
        else {                    
            q[j] = 0;
            j--;
        }




    }
    printf("total = %d\n", answer);
}

int main(){
    queen();
    return 0;
}