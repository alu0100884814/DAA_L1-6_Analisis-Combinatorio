// Este método utiliza una matriz para ir almacenando los
// resultados de la combinatoria mediante el triangulo de pascal.
int bottomUpTrianguloPascal(int n, int k) {
  // Crea la matriz donde se almacenaran los resultados
  int C[][] = new int[n+1][k+1];
  // Calcula el coeficiente binomial usando bottom up.
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= min(i, k); j++) {
      // Casos base
      if ((j == 0) || (j == 1)) {
        C[i][j] = 1;
      // Utiliza los valores almacenados previamente
      // para calcular el valor.
      } else {
        C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
      }
    }
  }
  return C[n][k];
}

// Calcula el mínimo de dos números
int min(int a, int b) {
  return (a < b) ? a : b;
}

// Complejidad de Tiempo: O(n * k)
// Espacio auxiliar: O(n * k)
