// Este método es una versión comprimida del bottomUpTrianguloPascal
// En este caso,se utiliza menos espacio (un vector), para ir
// almacenando los resultados de la combinatoria.
int combinatoriaBottomUpVector(int n, int k) {
  // Crea vector donde se almacenaran los resultados
  int C[] = new int[k + 1];
  // Inicializa todas las posiciones a cero (menos la primera)
  for (int i = 1; i <= k; i++) {
    C[i] = 0;
  }
  // Inicializa la primera posicion a 1, ya que C(n, 0) = 1
  C[0] = 1;
  // Computa la siguiente fila del Triangulo de pascal
  // usando la fila anterior.
  for (int i = 1; i <= n; i++) {
    for (int j = min(i, k); j > 0; j--) {
      C[j] += C[j-1];
    }
  }
  return C[k];
}

// Calcula el minimo de dos numeros
int min(int a, int b) {
  return (a < b) ? a : b;
}

// Complejidad de tiempo: O(n * k)
// Espacio auxiliar: O(n)
