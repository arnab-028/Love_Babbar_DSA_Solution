def calval(elmp):
    return sum(map(int, str(sum(map(int, map(str, map(ord, elmp))))))) % 9 or 9

def balco(cmp, eqp):
    elmp1, elmp2 = cmp[0], cmp[1]

    vy1, vy2 = calval(elmp1), calval(elmp2)
    check_list = []

    for mlt1 in range(1, eqp // vy1 + 1):
        rmp = eqp - mlt1 * vy1
        if rmp % vy2 == 0:
            mlt2 = rmp // vy2
            check_list.append(f"{elmp1}{mlt1} {elmp2}{mlt2}")

    for i in range(len(check_list) - 2, -1, -1):
        print(check_list[i])

    if not check_list:
        print("Not Possible")


cmp_input = input().strip()
eqp_input = int(input().strip())

balco(cmp_input, eqp_input)