int coeficienteBinomial(int n, int k) {
  int aux = 1;
  // C(n, k) = C(n, n-k)
  if (k > (n - k)) {
    k = n - k;
  }
  for (int i = 0; i < k; i++) {
    aux *= (n-1);
    aux /= (i+1);
  }
  return aux;
}

// Complejidad de tiempo O(k)
// Espacio auxiliar O(1)
