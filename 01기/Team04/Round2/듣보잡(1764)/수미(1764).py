"""
1764번 듣보잡
"""





n, m = map(int, input().split())

don_hear = set()
for i in range(n):
    don_hear.add(input())
don_see = set()
for i in range(n):
    don_see.add(input())

answer = sorted(list(don_hear & don_see))

print(len(answer))

for i in answer:
    print(i)

