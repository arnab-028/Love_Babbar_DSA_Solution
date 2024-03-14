import math

n = int(input())
State = input()
State = State.split()
nd = {}
for Material in State:
    Material = Material.split(':')
    Material[0] = int(Material[0])
    Material[1] = int(Material[1])
    nd[Material[0]] = Material[1]
   
product = {}
for Material in nd:
    Present =  int(input())
    de = nd[Present]
    for i in range(de):
        cnt = input()
        cnt = cnt.split()
        for i in range(3):
            cnt[i] = int(cnt[i])
        if Present not in product:
            product[Present] = []
            product[Present].append(cnt)
        else:
            product[Present].append(cnt)
           

t = input()
t = t.split()
t[0] = int(t[0])
t[1] = int(t[1])
State = {}
State[1] = [0, 0]
i = 1

def pos(src):
    if len(State) == n:
        return
    if src not in State:
        return
    for _ in range(len(product[src])):
        cnt = product[src][-1]
        new_dev = cnt[0]
        dis = cnt[1]
        ang = cnt[2]
        if new_dev not in State:
            x = State[src][0] + dis * math.cos(math.radians(ang))
            y = State[src][1] + dis * math.sin(math.radians(ang))
            State[new_dev] = [x, y]
            pos(new_dev)
        product[src].pop()

pos(1)
sum = math.sqrt((State[t[0]][0] - State[t[1]][0]) ** 2 + (State[t[0]][1] - State[t[1]][1]) ** 2)
sum = format(sum, ".2f")
print(sum, end='')
