#include <stdio.h>
#include <assert.h>

#include "<your student id>/<your student id>.h"

int main(void){


    // One test case only
    int N = 2;
    int Mx[4] = {1,0,1,0};
    int My[4] = {1,0,1,0};
    int Mz[4];
    int Mref[4] = {1,0,1,0};

    // calculate matMult
    matMult(Mx, My, Mz, N);

    for(int i=0; i<(N*N); i++){
        assert(Mref[i] == Mz[i]);
    }

    // print success message
    printf("Passed one test case!! Try submitting it!\n");

    
    return 0;
}