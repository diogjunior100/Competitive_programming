def shift_string(S, N):
    shifted_string = ""
    for char in S:
        shifted_char = chr((ord(char) - ord('A') + N) % 26 + ord('A'))
        shifted_string += shifted_char
    return shifted_string

# Exemplo de uso
N = int(input())
S = input()

shifted_result = shift_string(S, N)
print(shifted_result)
