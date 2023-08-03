def narvais(n, m):
  """
  Determina o número de fichas que o apresentador terá no final.

  Argumentos:
    n: O número de narvais.
    m: O número de fichas que o apresentador tem.

  Retorna:
    O número de fichas que o apresentador terá no final.
  """

  chips = m
  for i in range(1, n + 1):
    if chips < i:
      return chips
    chips -= i
  return chips

if __name__ == "__main__":
  n = 4
  m = 11
  print(narvais(n, m))