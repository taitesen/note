#include <stdbool.h>
#include <stdio.h>

bool check_square_matrix(int rows, int cols, int matrix[rows][cols]);
bool check_diagonal_matrix(int rows, int cols, int matrix[rows][cols]);
bool check_upper_triangular(int rows, int cols, int matrix[rows][cols]);
bool check_lower_triangular(int rows, int cols, int matrix[rows][cols]);

int main() {
  int notSquareMatrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  int notDiagonalMatrix[4][4] = {
      {1, 2, 0, 0}, {3, 4, 0, 0}, {0, 0, 5, 6}, {0, 0, 7, 8}};

  int diagonalMatrix[4][4] = {
      {4, 0, 0, 0}, {0, 7, 0, 0}, {0, 0, 5, 0}, {0, 0, 0, 1}};

  int upperTriangularMatrix[4][4] = {
      {4, 7, 2, 9}, {0, 5, 8, 3}, {0, 0, 6, 1}, {0, 0, 0, 2}};

  int lowerTriangularMatrix[4][4] = {
      {1, 0, 0, 0}, {4, 5, 0, 0}, {7, 8, 9, 0}, {10, 11, 12, 13}};

  if (check_square_matrix(3, 4, notSquareMatrix)) {
    printf("\nnotSquareMatrix is a square matrix\n");
    if (check_diagonal_matrix(3, 4, notSquareMatrix)) {
      printf("notSquareMatrix is a diagonal matrix\n");
    }
    if (check_upper_triangular(3, 4, notSquareMatrix)) {
      printf("notSquareMatrix is an upper triangular matrix\n");
    }
    if (check_lower_triangular(3, 4, notSquareMatrix)) {
      printf("notSquareMatrix is a lower triangular matrix\n");
    }
  } else {
    printf("notSquareMatrix is not a square matrix\n");
  }

  if (check_square_matrix(4, 4, notDiagonalMatrix)) {
    printf("\nnotDiagonalMatrix is a square matrix\n");
    if (check_diagonal_matrix(4, 4, notDiagonalMatrix)) {
      printf("notDiagonalMatrix is a diagonal matrix\n");
    }
    if (check_upper_triangular(4, 4, notDiagonalMatrix)) {
      printf("notDiagonalMatrix is an upper triangular matrix\n");
    }
    if (check_lower_triangular(4, 4, notDiagonalMatrix)) {
      printf("notDiagonalMatrix is a lower triangular matrix\n");
    }
  } else {
    printf("notDiagonalMatrix is not a square matrix\n");
  }

  if (check_square_matrix(4, 4, diagonalMatrix)) {
    printf("\ndiagonalMatrix is a square matrix\n");
    if (check_diagonal_matrix(4, 4, diagonalMatrix)) {
      printf("diagonalMatrix is a diagonal matrix\n");
    }
    if (check_upper_triangular(4, 4, diagonalMatrix)) {
      printf("diagonalMatrix is an upper triangular matrix\n");
    }
    if (check_lower_triangular(4, 4, diagonalMatrix)) {
      printf("diagonalMatrix is a lower triangular matrix\n");
    }
  } else {
    printf("diagonalMatrix is not a square matrix\n");
  }

  if (check_square_matrix(4, 4, upperTriangularMatrix)) {
    printf("\nupperTriangularMatrix is a square matrix\n");
    if (check_diagonal_matrix(4, 4, upperTriangularMatrix)) {
      printf("upperTriangularMatrix is a diagonal matrix\n");
    }
    if (check_upper_triangular(4, 4, upperTriangularMatrix)) {
      printf("upperTriangularMatrix is an upper triangular matrix\n");
    }
    if (check_lower_triangular(4, 4, upperTriangularMatrix)) {
      printf("upperTriangularMatrix is a lower triangular matrix\n");
    }
  } else {
    printf("upperTriangularMatrix is not a square matrix\n");
  }

  if (check_square_matrix(4, 4, lowerTriangularMatrix)) {
    printf("\nlowerTriangularMatrix is a square matrix\n");
    if (check_diagonal_matrix(4, 4, lowerTriangularMatrix)) {
      printf("lowerTriangularMatrix is a diagonal matrix\n");
    }
    if (check_upper_triangular(4, 4, lowerTriangularMatrix)) {
      printf("lowerTriangularMatrix is an upper triangular matrix\n");
    }
    if (check_lower_triangular(4, 4, lowerTriangularMatrix)) {
      printf("lowerTriangularMatrix is a lower triangular matrix\n");
    }
  } else {
    printf("lowerTriangularMatrix is not a square matrix\n");
  }

  return 0;
}

bool check_square_matrix(int rows, int cols, int matrix[rows][cols]) {
  if (rows == cols)
    return true;
  else
    return false;
}

bool check_diagonal_matrix(int rows, int cols, int matrix[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i != j && matrix[i][j] != 0)
        return false;
      if (i == j && matrix[i][j] == 0)
        return false;
    }
  }
  return true;
}

bool check_upper_triangular(int rows, int cols, int matrix[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (j >= i && matrix[i][j] == 0)
        return false;
    }
  }
  return true;
}

bool check_lower_triangular(int rows, int cols, int matrix[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (j <= i && matrix[i][j] == 0)
        return false;
    }
  }
  return true;
}
