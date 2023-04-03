
"""
1620번 포켓몬..
"""

import sys

input = sys.stdin.readline



n, m = map(int, input().split())




pocketmon_list = [input() for i  in range(n)]
pocketmon_numlist = [i+1 for i in range(n)]

answer = []




for i in range(m):
    mission = input()
    if mission.isdigit():
        answer[i]=pocketmon_list[mission]
    else:
        answer[i]=pocketmon_numlist[mission]
    
for i in range(m):
    print(answer[i])
