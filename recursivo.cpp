int cRecursivo(int n, int k) {
  // Casos bases
  if ((k == 0) || (k == n)) {
    return 1;
  // LLamada recursiva
  } else {
    return cRecursivo(n-1, k-1) + cRecursivo(n-1, k);
  }
}

// Complejidad O(2^n)
