def max(x, y):
	if(x > y):
		return x
	return y

def solve(s, i, j):

	if (i == j):
		return 1
	
	if (s[i] == s[j] and i + 1 == j):
		return 2

	if (s[i] == s[j]):
		return solve(s, i + 1, j - 1) + 2

	return max(solve(s, i, j - 1),
			solve(s, i + 1, j))


s = input()
n = len(s)
print(solve(s, 0, n - 1))
	

