#include <stdio.h> 
int main() 
{ 
  
    int n, m, i, j, k; 
    n=5;
    m=4;
    int noOfProcesses,availResources,noOfResources;
    noOfProcesses = 5; // Number of processes 
    noOfResources = 4; // Number of resources 
    availResources=4;
    int alloc[5][4] = {     // Allocation Matrix 
                        { 0,0,1,2 }, // P0 
                        { 1,0,0,0 }, // P1 
                        { 1,3,5,4}, // P2c
                        { 0,6,3,2 }, // P3
                        {0,0,1,4} 
                        };
  
    int max[5][4] = { 
                      {0,0,1,2 }, // P0    // MAX Matrix 
                      { 1,7,5,0 }, // P1 
                      { 2,3,5,6 }, // P2 
                      { 0,6,5,2 }, // P3 
                      { 0,6,5,6 } }; // P4 
  
    int avail[4] = { 1,5,2,0 }; // Available Resources 
  
    int f[noOfProcesses], ans[noOfProcesses], ind = 0; 
    for (k = 0; k < n; k++) { 
        f[k] = 0; 
    } 
    int need[noOfProcesses][noOfResources]; 
    for (i = 0; i < noOfProcesses; i++) { 
        for (j = 0; j < m; j++) 
            need[i][j] = max[i][j] - alloc[i][j]; 
    } 
    int y = 0; 
    for (k = 0; k < 5; k++) { 
        for (i = 0; i < n; i++) { 
            if (f[i] == 0) { 
  
                int flag = 0; 
                for (j = 0; j < m; j++) { 
                    if (need[i][j] > avail[j]) 
                        flag = 1; 
                    break; 
                } 
  
                if (flag == 0) { 
                    ans[ind++] = i; 
                    for (y = 0; y < m; y++) 
                        avail[y] += alloc[i][y]; 
                    f[i] = 1; 
                } 
            } 
        } 
    } 
  
    printf("Safe sequence of resource allocation- \n"); 
    for (i = 0; i < noOfProcesses - 1; i++) 
        printf(" P%d ->", ans[i]); 
    printf(" P%d", ans[n - 1]); 
  
    return (0); 
  
}
 
