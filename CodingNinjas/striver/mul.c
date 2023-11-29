#include <stdio.h>
#include <math.h>
#include <omp.h>
int main()
{
    int N;
    printf("Enter the number of equations and variables (N): ");
    scanf("%d", &N);
    double A[N][N];
    double b[N];
    double x[N];
    double x_new[N];
    printf("Enter the coefficient matrix A:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < N; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }
    printf("Enter the constants vector b:\n");
    for (int i = 0; i < N; i++)
    {
        printf("b[%d]: ", i + 1);
        scanf("%lf", &b[i]);
    }
    printf("Enter the initial guess for the solution x:\n");
    for (int i = 0; i < N; i++)
    {
        printf("x[%d]: ", i + 1);
        scanf("%lf", &x[i]);
    }
    int max_iterations = 1000;
    double tolerance = 1e-6;
    int iteration;
    // set num of threads

    for (int no = 1; no <= 5; no++)
    {
        omp_set_num_threads(no);
        double start = omp_get_wtime();
        for (iteration = 0; iteration < max_iterations; iteration++)
        {
// Perform one iteration of the Jacobi method
#pragma omp parallel for
            for (int i = 0; i < N; i++)
            {
                double sum = 0.0;
                for (int j = 0; j < N; j++)
                {
                    if (j != i)
                    {
                        sum += A[i][j] * x[j];
                    }
                }
                x_new[i] = (b[i] - sum) / A[i][i];
            }
            // Check for convergence
            double max_diff = 0.0;
            // #pragma omp parallel for
            for (int i = 0; i < N; i++)
            {
                double diff = fabs(x_new[i] - x[i]);
                if (diff > max_diff)
                {
                    max_diff = diff;
                }
            }
            // Update the solution vector
            for (int i = 0; i < N; i++)
            {
                x[i] = x_new[i];
            }
            // Check if the solution has converged
            if (max_diff < tolerance)
            {
                break;
            }
        }
        // Print the final solution
        // printf("Solution after %d iterations:\n", iteration);
        for (int i = 0; i < N; i++)
        {
            printf("x[%d] = %.6f\n", i + 1, x[i]);
        }
        double end = omp_get_wtime();
        double time = end - start;
        printf("Execution time for %d thread : %lf \n", no, time);
    }
    return 0;
}